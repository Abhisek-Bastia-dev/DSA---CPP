// Find  Largest Element in Array
#include <iostream>
#include <climits>
using namespace std;
void maximum(int array[], int size)
{
  int max = INT_MIN;
  for (int i = 0; i < size; i++)
  {
    if (max < array[i])
    {
      max = array[i];
    }
  }
  cout << max << " is maximum number";
}
int main()
{
  int size;
  cout << "Enter the size: ";
  cin >> size;
  int array[size];
  cout << "Enter the elements: ";
  for (int i = 0; i < size; i++)
  {
    cin >> array[i];
  }
  maximum(array, size);
  return 0;
}