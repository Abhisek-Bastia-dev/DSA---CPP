#include <iostream>
#include <vector>

using namespace std;

vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{
  int n = arr1.size();
  int m = arr2.size();
  vector<int> vec(n + m);

  int i = 0, j = 0, k = 0;

  while (i < n && j < m)
  {
    if (arr1[i] < arr2[j])
    {
      vec[k] = arr1[i];
      i++;
    }
    else
    {
      vec[k] = arr2[j];
      j++;
    }
    k++;
  }

  // for remaining
  while (j < m)
  {
    vec[k] = arr2[j];
    j++;
    k++;
  }

  while (i < n)
  {
    vec[k] = arr1[i];
    i++;
    k++;
  }

  return vec;
}

int main()
{
  cout << "Program started!" << endl;

  vector<int> arr1 = {1, 3, 5, 7};
  vector<int> arr2 = {2, 4, 6, 8, 9, 10, 12};

  vector<int> vec = merge(arr1, arr2);

  cout << "Result: ";

  for (int value : vec)
  {
    cout << value << " ";
  }

  cout << endl;

  return 0;
}