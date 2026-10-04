#include <iostream>
using namespace std;
int changeArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  // modifing array
  arr[0] = 100;
  arr[9] = 99;
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}
int main()
{
  int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  int size = sizeof(array) / sizeof(array[0]);
  changeArray(array, size);
}