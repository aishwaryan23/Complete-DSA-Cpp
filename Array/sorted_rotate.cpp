#include<iostream>
#include<vector>
using namespace std;

bool check(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    // Count how many times the array drops
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }
    
    // The array is sorted and rotated if there's at most one drop
    return count <= 1;
}

int main() {
    vector<int> nums = {3, 4, 5, 1, 2};
    if (check(nums)) {
        cout << "The array is sorted and rotated." << endl;
    } else {
        cout << "The array is NOT sorted and rotated." << endl;
    }
    return 0;
}
