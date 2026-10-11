#include <iostream>
#include <vector>
using namespace std;
void sort(vector<int> &v)
{
    int i = 0, j = v.size() - 1; // i is negative and j is positive
    while (i < j)
    {
        // Left is already negative → correct position
        if (v[i] < 0)
        {
            i++;
        }

        // Right is already positive → correct position
        else if (v[j] > 0)
        {
            j--;
        }

        // Left is positive and right is negative → swap
        else
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
}
// Once one action happens, the loop immediately goes to the next iteration. Think of it like choosing ONE action per turn.
int main()
{
    vector<int> v = {1, -2, 3, -4, -5, 6, 8};
    //-5, -2, -4, 3, 1, 6, 8
    sort(v);
    for (int value : v)
    {
        cout << value << " ";
    }
    return 0;
}