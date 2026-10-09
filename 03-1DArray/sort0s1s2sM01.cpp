#include <iostream>
#include <vector>

using namespace std;
// two pass method // two loops
void sort(vector<int> &nums)
{
  int n = nums.size(), numOfZero = 0, numOfOne = 0, numOfTwo = 0;
  for (int i = 0; i < n; i++)
  {
    if (nums[i] == 0)
      numOfZero++;
    else if (nums[i] == 1)
      numOfOne++;
    else if (nums[i] == 2)
      numOfTwo++;
  }

  for (int i = 0; i < n; i++)
  {
    if (i < numOfZero)
      nums[i] = 0;
    else if (i < (numOfZero + numOfOne))
      nums[i] = 1;
    else
      nums[i] = 2;
  }
}
int main()
{
  vector<int> v = {2, 0, 1, 0, 2, 1};
  sort(v);
  for (int value : v)
  {
    cout << value << " ";
  }
  return 0;
}