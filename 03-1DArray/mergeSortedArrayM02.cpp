#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{
  int n = arr1.size();
  int m = arr2.size();

  vector<int> vec(n + m);
  int i = n - 1, j = m - 1, k = vec.size() - 1;

  while (i >= 0 && j >= 0)
  {
    if (arr1[i] > arr2[j])
    {
      vec[k] = arr1[i];
      i--;
    }
    else
    {
      vec[k] = arr2[j];
      j--;
    }
    k--;
  }
  // for remaining
  while (i >= 0)
  {
    vec[k] = arr1[i];
    i--;
    k--;
  }
  while (j >= 0)
  {
    vec[k] = arr2[j];
    j--;
    k--;
  }
  return vec;
}

int main()
{
  vector<int> arr1 = {1, 3, 5, 7};
  vector<int> arr2 = {2, 4, 6, 8, 10, 12};
  vector<int> vec = merge(arr1, arr2);
  for (int value : vec)
  {
    cout << value << " ";
  }
}