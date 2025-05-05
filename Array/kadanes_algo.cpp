// Maximum subarray sum

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1,2,3,-8, 5, -3, 6};
    int currSum = 0;
    int maxSum = INT16_MIN;

    for(int i=0; i<nums.size(); i++) {
        currSum += nums[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0) currSum = 0;
    }

    cout << "Maximum subarray sum : " << maxSum << endl;
    return 0;
}
