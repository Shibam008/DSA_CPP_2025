#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums =  {2,5,8,9};
    vector<int> result;
    int st = 0, end = nums.size()-1;
    int target = 13;
    bool flag = false;

    while(st < end) {
        int sum = nums[st] + nums[end];
        if(sum == target) {
            result.push_back(nums[st]);
            result.push_back(nums[end]);
            flag = true;
            break;
        }
        if(sum > target) end--;
        if(sum < target) st++;
    }

    if(flag) {
        cout << "Elements are : " << result[0] << " + " << result[1] <<endl;
    } else {
        cout << "Didn't exist!";
    }
}