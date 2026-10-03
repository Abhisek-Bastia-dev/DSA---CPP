#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int size, target;
  cout << "Enter the number of Elements as input: ";
  cin >> size;

  vector<int> vec;
  for (int i = 0; i < size; i++)
  {
    int x;
    cin >> x;
    vec.push_back(x);
  }

  cout << "Enter the target: ";
  cin >> target;

  for (int i = 0; i < vec.size() - 1; i++)
  {
    for (int j = i + 1; j < vec.size(); j++)
    {
      if (vec[i] + vec[j] == target)
      {
        cout << "(" << i << ", " << j << ")" << endl;
      }
    }
  }
  return 0;
}