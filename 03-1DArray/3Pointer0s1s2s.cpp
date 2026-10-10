#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &v)
{
  int low = 0, mid = 0, high = v.size() - 1;
  while (mid <= high)
  {
    if (v[mid] == 2)
    {
      swap(v[mid], v[high]);
      high--;
    }
    else if (v[mid] == 0)
    {
      swap(v[mid], v[low]);
      low++;
      mid++;
    }
    else if (v[mid] == 1)
    {
      mid++;
    }
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