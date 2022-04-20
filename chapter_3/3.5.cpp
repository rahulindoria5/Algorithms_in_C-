// generate random binary bits
#include <iostream>
using namespace std;

int main()
{
  for (int i = 0; i < 10; i++)
  {
    cout << "random bits is : " << rand()%2 << endl;
  }

  return 0;
}
