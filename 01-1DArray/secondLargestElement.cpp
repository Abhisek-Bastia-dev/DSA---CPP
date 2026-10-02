// Find Second Largest Element in Array
#include <iostream>
#include <climits>
using namespace std;
// 23, 53, 56, 98, 72, 89
void secondLargestElement(int array[], int size)
{
  int maximum = array[0], secondMax = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (maximum < array[i])
    {
      maximum = max(maximum, array[i]);
    }
  }
  for (int i = 0; i < size; i++)
  {
    if (secondMax < array[i] && array[i] != maximum)
    {
      secondMax = array[i];
    }
  }
  cout << maximum << " is maximum number, " << secondMax << " is second maximum number.";
}
int main()
{
  int array[6] = {23, 53, 56, 98, 72, 89};
  secondLargestElement(array, 6);
  return 0;
}