// generate random binary bits
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  srand(time(0));  // Initialize random number generator.
  int num_of_rand; // enter r = 2, 4 and 16

  cout << "how many random numbers you want to generate ";
  cin >> num_of_rand;

  for (int i = 0; i < num_of_rand; i++)
  {
    cout << "random number " << i << " is : " << rand()%2 << endl;
  }

  return 0;
}
