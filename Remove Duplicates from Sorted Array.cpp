#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Handle the edge case of an empty array.
        if (nums.empty()) {
            return 0;
        }

        int j = 1; // Initialize the pointer for the updated array.

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                nums[j] = nums[i]; // Overwrite duplicate element.
                j++;
            }
        }

        return j; // Length of the updated array.
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int length = solution.removeDuplicates(nums);

    cout << "Updated Array: ";
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Length of Updated Array: " << length << endl;

    return 0;
}
