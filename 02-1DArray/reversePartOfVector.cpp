#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
  for (int val : v)
  {
    cout << val << " ";
  }
  cout << endl;
}
void reversePartOfArray(vector<int> &v, int start, int end)
{
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
  vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  reversePartOfArray(v, 1, 5);
  return 0;
}