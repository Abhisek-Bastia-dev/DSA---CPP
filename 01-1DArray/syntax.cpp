#include <iostream>
using namespace std;

// Array is a collection of elements of same datatype stored in continuous memory location.

int main()
{
  int array[5]; // recommended
  // or
  int array2[5] = {1, 2, 3, 4, 5};
  // or
  int array3[] = {1, 2, 3, 4, 5}; // usually not recommended

  // Accessing elements of array

  cout << array2[1]; // 2
  return 0;
}