// A vector is a dynamic array provided by C++ STL.
// It can Grow or Shrink during the program.
// to use vector need to add vector header file.
#include <iostream>
#include <vector>
using namespace std;

// vectors in function
// by default vector are pass by value
// use & for link to original vector
int changeVec(vector<int> &vec)
{

  // modify vector using range based loop
  /*
  for(int val : vec){
    val = 100; // val has copy of value of vector
    // it cant change the value
  }
  */
  for (int &val : vec)
  {
    val = 100; // val is linked / reference to original vector or vec[i]
    // it can change the value
  }

  cout << endl
       << endl;
  for (int &val : vec)
  {
    cout << val << " ";
  }
}

int main()
{
  // declaration of vector
  vector<int> vec; // empty vector
  vector<char> arr = {'a', 'b', 'c', 'd'};
  vector<int> v(5, 0);
  // functions of vector
  // push_back
  vec.push_back(10);
  vec.push_back(11);
  vec.push_back(12);
  vec.push_back(13);
  // range loop to print and read
  for (int value : vec)
  {
    cout << value << " ";
  }
  cout << endl;
  // pop_back
  vec.pop_back();
  for (int value : vec)
  {
    cout << value << " ";
  }

  // front and back

  cout << endl
       << vec.front();
  cout << endl
       << vec.back();

  // at()
  cout << endl
       << vec.at(0);
  // size() = number of elems present in vec and
  // capacity() = how much space available to store elem
  cout << endl
       << vec.size() << " is the size of vec";
  cout << endl
       << vec.capacity() << " is the capacity of vec" << endl;

  // accessing elems by
  cout << vec[2] << endl;
  cout << vec.at(1);
  // it will show error if index is not present = segmentation failure

  // For loop Traversing vector
  cout << endl;
  for (int i = 0; i < vec.size(); i++)
  {
    cout
        << vec.at(i) << " ";
  }

  cout << endl;

  // take input 1st way
  vector<char> characters;
  int size; // no. of elements want to take as input
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    char x;
    cin >> x;
    characters.push_back(x);
  }
  for (char val : characters)
  {
    cout << val << " ";
  }

  return 0;
}