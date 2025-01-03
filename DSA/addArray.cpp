#include<iostream>
#include<vector>
using namespace std;

// Function to reverse a vector
vector<int> reverse(vector<int> v) {
    int s = 0;
    int e = v.size() - 1;
    while(s < e) {
        swap(v[s++], v[e--]);
    }
    return v;
}

// Function to find the sum of two arrays representing numbers
vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1;
    int j = m - 1;
    vector<int> ans;
    int carry = 0;
    
    while(i >= 0 && j >= 0) {
        int val1 = a[i];
        int val2 = b[j];
        int sum = val1 + val2 + carry;   
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    // Process remaining elements of a
    while(i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    
    // Process remaining elements of b
    while(j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    
    // Process remaining carry
    while(carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    
    return reverse(ans);
}

// Function to print the vector
void print(const vector<int>& v) {
    for(int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> a = {9, 9, 9};
    vector<int> b = {1};
    
    vector<int> result = findArraySum(a, a.size(), b, b.size());
    
    cout << "Sum: ";
    print(result);
    
    return 0;
}
