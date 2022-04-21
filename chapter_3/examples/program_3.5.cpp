#include <iostream>
using namespace std;

int main()
{
  int N;
  cout << "enter the range of numbers ";
  cin >> N;
  int a[N];

  for (int i = 2; i <= N; i++)
    a[i] = 1;

  // for (int i = 1; i <= N; i++)
  //   cout << "I is : " << i << " : " << a[i] << endl;

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

  for(int i = 2; i <= N; i++)
    cout << "I is " << i << " : " << a[i] << endl;

  return 0;
}
