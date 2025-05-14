
/* PS :
📝 Problem Statement: Best Fit Memory Allocation
You are given a list of memory block sizes available in a system and the memory requirement of a process. Your task is to simulate the Best Fit memory allocation strategy.

Best Fit selects the smallest memory block that is large enough to accommodate the requested memory size, thereby minimizing internal fragmentation.

🧾 Input:
An array memory_size[] representing the sizes of available memory blocks.

An integer required_space representing the amount of memory needed by a process.

✅ Requirements:
Implement the Best Fit algorithm to find the memory block which can fulfill the request with minimum internal fragmentation.

If a suitable block is found:

Output the minimum internal fragmentation.

Output the index of the block used.

If no block is large enough:

Print "Enough space not available".

🚫 Constraints:
All memory block sizes and required_space are positive integers.

The number of memory blocks is at least 1.


*/


#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> memory_size = {10, 18, 25, 30, 15};
    int required_space = 15;
    int diff = 0;
    int minDiff = INT16_MAX;
    int memory_idx = -1;

    //! simplified way
    for(int i=0; i<memory_size.size(); i++) {
        diff = memory_size[i] - required_space;
        if(diff >= 0 && diff < minDiff) {
            minDiff = diff;
            memory_idx = i;
        }
    }
    
    //! Bruteforce approach
    // for(int i=0; i<memory_size.size(); i++) 
    // {
    //     diff = memory_size[i] - required_space;
    //     if(diff > 0) 
    //     {
    //         minDiff = min(minDiff, diff);
    //     }
    // }
    // int target = required_space + minDiff;
    // for(int i=0; i<memory_size.size(); i++) 
    // {
    //     if(target == memory_size[i]) 
    //     {
    //         memory_idx = i;
    //         break;
    //     }
    // }

    if(memory_idx == -1) {
        cout << "Enough space is not available\n";
    } else {
        cout << "Minimum internal fragmantation : " << minDiff << ", at index -> " << memory_idx << endl;
    }
}