#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int>& nums, int k){
    vector<int> temp(nums.size());

    for(int i = 0; i<nums.size(); i++){
        temp[(i+k)%nums.size()] = nums[i];
    }
     nums = temp;
}

void printVector(const vector<int>& nums) {
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    cout << "Original vector: ";
    printVector(nums);

    rotate(nums, k);

    cout << "Rotated vector: ";
    printVector(nums);

    return 0;
}