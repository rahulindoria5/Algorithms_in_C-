// generate random number between 0 and 99

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  srand(time(0));  // Initialize random number generator.
  int total = 0;
  int num_of_rand;
  int random_num;

  cout << "how many random numbers you want to generate ";
  cin >> num_of_rand;

  for (int i = 0; i < num_of_rand; i++)
  {
    random_num = ((rand() % 99) + 0);
    total = total + random_num;
    cout << "random number " << i << " is : " << random_num << " and sum is : " << total << endl;
  }

  cout << "average of random numbers  is " << (float)total/num_of_rand << endl;

  return 0;
}
