#include <iostream>
using namespace std;

int * find_prime_numbers(int N, int a[])
{
  // finding prime numbers
  for (int i = 2; i <=N; i++)
  {
    if(a[i])
    {
      for(int j = i; j*i <= N; j++)
      {
        a[i*j] = 0;
      }
    }
  }
  return a;
}

void display_prime_numbers(int *k, int N)
{
  // display prime numbers
  for(int i = 2; i <= N; i++)
    cout << "I is " << i << " : " << *(k + i) << endl;
}

int main()
{
  int N;
  cout << "enter the range of numbers ";
  cin >> N;
  int a[N];

  for (int i = 2; i <= N; i++)
    a[i] = 1;

  int *k;
  k = find_prime_numbers(N, a);
  display_prime_numbers(k, N);

  return 0;
}
