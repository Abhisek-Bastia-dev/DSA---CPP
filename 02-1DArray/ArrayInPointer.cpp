#include <iostream>
using namespace std;
int changePointer(int *ptr, int size)
{
  cout << endl;
  for (int i = 0; i < size; i++)
  {
    cout << *ptr << " ";
    ptr++;
  }
}
int display(int array[], int size)
{
  cout << endl;
  for (int i = 0; i < size; i++)
  {
    cout << array[i] << " ";
  }
}
int main()
{
  int array[] = {4, 2, 6, 1, 7};
  int size = sizeof(array) / sizeof(array[0]);
  int *ptr = array; // give address of array
  /*
  correct syntax :-
  int* ptr = array;
  int* ptr = &array[0]; it is valid because
        array's address is same as array[0]'s
        address.

  wrong syntax :-
  int* ptr = &array;
  int* ptr = array[0];
  */
  // *ptr same as ptr[i] same as array[0]
  cout << array[0] << endl; // value of 0th index
  cout << *ptr << endl;     // go to address that stored, print that
  cout << ptr[0] << endl;   // same syntax as array[0]

  for (int i = 0; i < size; i++)
  {
    cout << i[array] << " "; // i[array] same as array[i]
    // ptr[i] or i[ptr] is valid if we send array to pointer.
  }

  changePointer(array, size); // in this function ptr is lost

  // Make changes in array
  *ptr = 8; // same as ptr[0] = 8
  ptr++;
  *ptr = 9; // same as ptr[1] = 9
  ptr--;    // need to came back to 0th index
  cout << endl
       << "modified array";
  display(array, size);
  return 0;
}