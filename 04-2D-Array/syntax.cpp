#include <iostream>
using namespace std;

int main()
{
  // declaration of 2D Array
  int arr1[2][3]; // here 2 is row no  // 3 is column no
  // initialize the 2D Array

  int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}}; // {1, 2, 3} and {4, 5, 6} are rows inside elements are  columns no.
  cout << arr2[0][2] << endl;

  // initialize 2nd way

  int arr3[2][3] = {1, 2, 3, 4, 5, 6};
  cout << arr2[0][2];
  cout << endl;

  // not recommended -> int arr[][];

  int arr[][3] = {1, 2, 3, 4, 5, 6}; // this is allowed but col no required.

  return 0;
}