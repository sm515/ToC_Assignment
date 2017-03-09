#include<stdio.h>
#include<string.h>
#define NO_OF_CHARS 256
 
int getNextState(char *pattern, int M, int state, int x)
{
  if (state < M && x == pattern[state])
  return state+1;
 
  int ns, i; 
    for (ns = state; ns > 0; ns--)
  {
  if(pattern[ns-1] == x)
  {
  for(i = 0; i < ns-1; i++)
  {
  if (pattern[i] != pattern[state-ns+1+i])
  break;
  }
  if (i == ns-1)
  return ns;
  }
  }
 
  return 0;
}
 
void computeTF(char *pattern, int M, int TF[][NO_OF_CHARS])
{
  int state, x;
  for (state = 0; state <= M; ++state)
  for (x = 0; x < NO_OF_CHARS; ++x)
  TF[state][x] = getNextState(pattern, M, state, x);
}
 
void search(char *pattern, char *txt)
{
  int M = strlen(pattern);
  int N = strlen(txt);
 
  int TF[M+1][NO_OF_CHARS];
 
  computeTF(pattern, M, TF);
 
  int i, state=0;
  for (i = 0; i < N; i++)
  {
  state = TF[state][txt[i]];
  if (state == M)
  {
  printf ("\n pattern found at index %d", i-M+1);
  }
  }
}
 
int main()
{
  char txt[100];
  char pattern[100];
  printf("Enter the characters: ");
  gets(txt);
  printf("Enter the pattern: ");
  gets(pattern);
  
  search(pattern, txt);
  return 0;
}

