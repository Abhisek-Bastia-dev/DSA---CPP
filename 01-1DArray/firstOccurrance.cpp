// find first occurrence in elements of Array
#include <iostream>
using namespace std;

int main()
{
  int array[5] = {2, 5, 8, 5, 10}, target = 5;
  for (int i = 0; i < 5; i++)
  {
    if (target == array[i])
    {
      cout << i;
      break;
    }
  }
  return 0;
}