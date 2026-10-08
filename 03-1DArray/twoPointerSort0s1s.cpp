#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &v)
{
  int i = 0, j = v.size() - 1; // i is start and j is end
  while (i < j)
  {
    if (v[j] == 0 && v[i] == 1)
    {
      swap(v[i], v[j]);
      i++;
      j--;
    }
    if (v[i] == 0)
      i++;
    else if (v[j] == 1)
      j--;
  }
}
int main()
{
  vector<int> v = {0, 1, 0, 1, 1, 0, 1};

  sort(v);
  for (int value : v)
  {
    cout << value << " ";
  }
  return 0;
}