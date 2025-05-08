// majority element

#include<iostream>
#include<vector>
using namespace std;

int findMajority(vector<int>&nums) 
{
    int count = 0, candidate = 0;

    // step1 : find candidate or element
    for(int i=0; i<nums.size(); i++) {
        if(count == 0) {
            candidate = nums[i];
        }
        if(candidate == nums[i]) count++;
        else count--;
    }

    // step2 : verify the element
    int freq = 0;
    for(auto val : nums) {
        if(val == candidate) freq++;
    }
    if(freq > nums.size()/2) {
        return candidate;
    } 
    else return -1;
}

int main() {
    vector<int> nums = {1,1,2,2,0,0,2,2,2};
    int ans = findMajority(nums);

    if(ans != -1) {
        cout << "Majority element : " << ans << endl;
    }else {
        cout << "Majority element not exist!" << endl;
    }
}