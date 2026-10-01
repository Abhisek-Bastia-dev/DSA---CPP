// Find Sum of all Elements in Array
#include <iostream>
using namespace std;
int main()
{
  int array[4] = {5, 10, 15, 20}, sum = 0;
  for (int i = 0; i < 4; i++)
  {
    sum += array[i];
  }
  cout << sum << " is sum of all elements";
  return 0;
}