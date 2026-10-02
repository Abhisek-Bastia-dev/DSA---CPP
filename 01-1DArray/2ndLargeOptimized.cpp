// Find Second Largest Element in Array but optimized
#include <iostream>
#include <climits>
using namespace std;

void secondLargestElement(int array[], int size)
{
  int maximum = INT_MIN;
  int secondMax = INT_MIN;

  for (int i = 0; i < size; i++)
  {
    if (array[i] > maximum)
    {
      secondMax = maximum;
      maximum = array[i]; // 23, 53, 56, 98, 72, 89
    }
    else if (array[i] > secondMax && array[i] != maximum)
    {
      secondMax = array[i];
    }
  }

  cout << "Maximum = " << maximum << endl;
  cout << "Second Maximum = " << secondMax;
}

int main()
{
  int array[6] = {23, 53, 56, 98, 72, 89};

  secondLargestElement(array, 6);

  return 0;
}