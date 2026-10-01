// Find minimum Element in Array
#include <iostream>
#include <climits>
using namespace std;
void minimum(int array[], int size)
{
  int mini = INT_MAX;
  for (int i = 0; i < size; i++)
  {
    mini = min(mini, array[i]);
  }
  cout << mini << " is minimum element";
}
int main()
{
  int array[5] = {1, 2, 45, -99, 4};
  minimum(array, 5);
  return 0;
}