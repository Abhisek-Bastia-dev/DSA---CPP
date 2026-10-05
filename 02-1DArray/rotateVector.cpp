#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v)
{
  for (int value : v)
  {
    cout << value << " ";
  }
  cout << endl;
}
void reversePartOfArray(int start, int end, vector<int> &v)
{
  while (start < end)
  {
    swap(v[start], v[end]);
    start++;
    end--;
  }
}
int main()
{
  vector<int> v = {1, 2, 3};
  int n = v.size(), k = 11;
  k = k % n; // n == size
  reversePartOfArray(0, n - k - 1, v);
  reversePartOfArray(n - k, n - 1, v);
  reversePartOfArray(0, n - 1, v);
  display(v);
  return 0;
}