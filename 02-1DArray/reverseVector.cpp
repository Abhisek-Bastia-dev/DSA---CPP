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
int reverseVector(vector<int> &v)
{
  int start = 0;
  int end = v.size() - 1;
  while (start < end)
  {
    swap(v[start], v[end]);
    start++;
    end--;
  }
  display(v);
}

int main()
{
  vector<int> v = {1, 2, 4, 7, 6, 10, 34};
  reverseVector(v);
  return 0;
}