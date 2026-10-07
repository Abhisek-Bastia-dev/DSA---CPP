// sort 0s and 1s in array
// Method 01 two pass/ traversal
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
  for (int val : v)
  {
    cout << val << " ";
  }
}
void sortArray0s1s(vector<int> &v)
{
  int numOfZeros = 0, numOfOnes = 0;
  // 1st travel => count total 0 and 1
  for (int i = 0; i < v.size(); i++)
  {
    if (v[i] == 0)
      numOfZeros++;
    else
      numOfOnes++;
  }

  // 2nd travel => fill array
  //  All 0s from 0th index
  //  1s will be fill after all zeros filled up
  for (int i = 0; i < v.size(); i++)
  {
    if (i < numOfZeros)
      v[i] = 0;
    else
      v[i] = 1;
  }
}
int main()
{
  vector<int> v = {0, 1, 1, 0, 1, 0, 1, 0, 1, 1, 0};

  sortArray0s1s(v);
  display(v);

  return 0;
}