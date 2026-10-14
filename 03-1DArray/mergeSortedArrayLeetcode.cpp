#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSorted(vector<int> &nums1, vector<int> &nums2, int m, int n)
{
  int i = m - 1, j = n - 1, k = (n + m) - 1;
  while (i >= 0 && j >= 0)
  {
    if (nums1[i] > nums2[j])
    {
      nums1[k] = nums1[i];
      i--;
    }
    else
    {
      nums1[k] = nums2[j];
      j--;
    }
    k--;
  }
  // remaining elems of nums2
  while (j >= 0)
  {
    nums1[k] = nums2[j];
    j--;
    k--;
  }

  return nums1;
}

int main()
{
  vector<int> arr1 = {1, 3, 5, 7, 0, 0, 0, 0, 0};
  vector<int> arr2 = {2, 4, 6, 8, 10};
  int m = 4, n = 5; // m for i || n for j
  vector<int> vec = mergeSorted(arr1, arr2, m, n);
  for (int value : vec)
  {
    cout << value << " ";
  }
  return 0;
}