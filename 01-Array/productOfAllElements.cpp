#include <iostream>
using namespace std;

int main()
{
  int array[4] = {5, 10, 15, 20}, product = 1;

  for (int i = 0; i < 4; i++)
  {
    product *= array[i];
  }

  cout << product << " is product of all elements";

  return 0;
}