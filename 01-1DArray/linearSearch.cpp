// Linear search in Array
#include <iostream>
using namespace std;
void linearSearch(int array[], int size, int target)
{
  bool flag = false;
  for (int i = 0; i < size; i++)
  {
    if (array[i] == target)
    {
      flag = true;
    }
  }
  if (flag)
  {
    cout << "Element was found";
  }
  else
  {
    cout << "element was not found";
  };
}
int main()
{
  int size, target;
  cout << "Enter the size: ";
  cin >> size;
  int array[size];
  cout << "Enter elements: ";
  for (int i = 0; i < size; i++)
  {
    cin >> array[i];
  }
  cout << "Enter element to search: ";
  cin >> target;

  linearSearch(array, size, target);
  return 0;
}
