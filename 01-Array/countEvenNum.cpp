// count how many even numbers present in Array
#include <iostream>
using namespace std;

int main()
{
  int array[6] = {1, 4, 7, 8, 10, 13}, count = 0;
  for (int i = 0; i < 6; i++)
  {
    if (array[i] % 2 == 0)
    {
      count++;
    }
  }
  cout << count << " Even numbers";
  return 0;
}