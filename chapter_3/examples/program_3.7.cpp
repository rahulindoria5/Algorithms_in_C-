/*
coin-flippping simulation
*/

#include <iostream>
using namespace std;

int heads()
{
  return rand() < RAND_MAX/2;
}

int main(int argc, char *argv[])
{
  int cnt, j;

  int N = atoi(argv[1]), M = atoi(argv[2]);

  int *f = new int[N+1];

  for (int i = 0; i < N; i++)
    f[i] = 0;

  // for(int i = 0; i < M; i++, f[cnt]++)
  // {
  //   for(cnt = 0, j = 0; j <= N; j++)
  //     if (heads()) cnt++;
  // }

  for (int i = 0; i < M; i++)
  {
    for(cnt = 0, j = 0; j <= N; j++)
    {
      if(heads())
      {
        cnt++;
      }
    }
    f[cnt]++;
  }

  for(j = 0; j <= N; j++)
  {
    if(f[j]==0)cout << ".";
    for(int i = 0; i < f[j]; i+=100) cout << "*";
    cout << endl;
  }

  return 0;
}
