#include <iostream>
using namespace std;

int main()
{
  // calculating size of Array
  int array[5];
  cout << sizeof(array) / 4 << endl;
  cout << sizeof(array) / sizeof(array[0]) << endl;

  // memory allocation in arrays
  int arr[5] = {1, 2, 3, 4, 5};
  cout << &arr[0] << endl; // address of array
  cout << &arr << endl;    // address of array
  cout << arr << endl;     // address of array

  // taking input
  for (int i = 0; i < 5; i++)
  {
    cin >> array[i];
  }
  // print output
  for (int i = 0; i < 5; i++)
  {
    cout << array[i] << " ";
  }
}