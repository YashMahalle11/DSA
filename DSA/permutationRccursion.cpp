#include <iostream>
#include <vector>

using namespace std;

class Solution {

private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
        // Base case
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        // Recursive case: generate permutations by swapping elements
        for (int j = index; j < nums.size(); j++) {
            swap(nums[index], nums[j]);
            solve(nums, ans, index + 1);
            // Backtrack to restore the original configuration
            swap(nums[index], nums[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<vector<int>> result = sol.permute(nums);

    cout << "The permutations are:" << endl;
    for (const auto& permutation : result) {
        for (int num : permutation) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
