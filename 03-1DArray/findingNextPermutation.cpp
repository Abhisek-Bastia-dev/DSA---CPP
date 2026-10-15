#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> nextPermutation(vector<int> &nums)
{
  int n = nums.size();
  int idx = -1;
  for (int i = n - 2; i >= 0; i--)
  {
    if (nums[i] < nums[i + 1])
    {
      idx = i;
      break;
    }
  }

  if (idx == -1)
  {
    reverse(nums.begin(), nums.end());
    return nums;
  }

  reverse(nums.begin() + idx + 1, nums.end());

  int j = -1;
  for (int i = idx + 1; i < n; i++)
  {
    if (nums[idx] < nums[i])
    {
      j = i;
      break;
    }
  }

  swap(nums[idx], nums[j]);
  return nums;
}
int main()
{
  vector<int> v1 = {3, 2, 1};
  vector<int> v2 = nextPermutation(v1);
  for (int val : v2)
  {
    cout << val << ", ";
  }

  return 0;
}