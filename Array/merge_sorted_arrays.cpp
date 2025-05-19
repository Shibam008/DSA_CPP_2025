#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> left = {2, 4, 6, 9};
    vector<int> right = {1, 3, 5, 7, 8};
    vector<int> merged;

    int l_idx = 0, r_idx = 0;

    while (l_idx < left.size() && r_idx < right.size())
    {
        if (left[l_idx] >= right[r_idx])
            merged.push_back(right[r_idx++]);
        else
            merged.push_back(left[l_idx++]);
    }
    if (r_idx < right.size()) {
        merged.push_back(right[r_idx++]);
    }
    if (l_idx < left.size()) {
        merged.push_back(left[l_idx++]);
    }

    for (int val : merged)
    {
        cout << val << " ";
    }

    return 0;
}