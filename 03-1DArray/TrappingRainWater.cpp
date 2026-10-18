#include <iostream>
#include <vector>
using namespace std;

int trap3arrays(vector<int> &height)
{
  int n = height.size();
  // previous greatest number
  vector<int> prev(n);
  prev[0] = -1;
  int max = height[0];
  for (int i = 1; i < n - 1; i++)
  {
    prev[i] = max;
    if (height[i] > max)
    {
      max = height[i];
    }
  }
  // find the next greatest number
  vector<int> next(n);
  next[n - 1] = -1;
  max = height[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    next[i] = max;
    if (height[i] > max)
    {
      max = height[i];
    }
  }
  // finding minimum elements
  vector<int> mini(n);
  for (int i = 0; i < n; i++)
  {
    mini[i] = min(prev[i], next[i]);
  }

  // calculate water amount
  int water = 0;
  for (int i = 1; i < n - 1; i++)
  {
    if (height[i] < mini[i])
    {
      water = water + (mini[i] - height[i]);
    }
  }
  return water;
}

int trap2arrays(vector<int> &height)
{
  int n = height.size();
  // previous greatest number
  vector<int> prev(n);
  prev[0] = -1;
  int max = height[0];
  for (int i = 1; i < n - 1; i++)
  {
    prev[i] = max;
    if (height[i] > max)
    {
      max = height[i];
    }
  }
  // find the next greatest number
  vector<int> next(n);
  next[n - 1] = -1;
  max = height[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    next[i] = max;
    if (height[i] > max)
    {
      max = height[i];
    }
  }
  // finding minimum elements
  for (int i = 0; i < n; i++)
  {
    prev[i] = min(prev[i], next[i]);
  }

  // calculate water amount
  int water = 0;
  for (int i = 1; i < n - 1; i++)
  {
    if (height[i] < prev[i])
    {
      water = water + (prev[i] - height[i]);
    }
  }
  return water;
}

int trap1array(vector<int> &height)
{
  int n = height.size();
  vector<int> prev(n);
  prev[0] = -1;
  int max = height[0];
  // finding previous number
  for (int i = 1; i < n; i++)
  {
    prev[i] = max;
    if (height[i] > max)
      max = height[i];
  }
  // finding next number
  max = height[n - 1];
  prev[n - 1] = -1;
  for (int i = n - 2; i >= 0; i--)
  {
    if (max < prev[i])
      prev[i] = max;
    if (height[i] > max)
      max = height[i];
  }

  // water amount
  int water = 0;
  for (int i = 0; i < n; i++)
  {
    if (prev[i] > height[i])
    {
      water += (prev[i] - height[i]);
    }
  }
  return water;
}

int main()
{
  vector<int> vec = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
  int trapWater = trap2arrays(vec);
  cout << trapWater;
}