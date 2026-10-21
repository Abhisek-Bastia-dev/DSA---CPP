#include <iostream>
using namespace std;

int main()
{
  // Traverse through 2D array
  int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  for (int i = 0; i < 3; i++)
  { // i -> row
    for (int j = 0; j < 3; j++)
    { // j -> col
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // Taking input and output
  int m, n;
  cout << "Enter the row no and col no: ";
  cin >> m >> n; // m -> row size, n -> col size
  int arr2[m][n];
  cout << "Enter the elements: ";
  for (int i = 0; i < m; i++)
  { // i -> row
    for (int j = 0; j < n; j++)
    { // j -> col
      cin >> arr2[i][j];
    }
  }
  for (int i = 0; i < m; i++)
  { // i -> row
    for (int j = 0; j < n; j++)
    { // j -> col
      cout << arr2[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}