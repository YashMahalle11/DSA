#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(vector<string>& ans, string str, string output, int i) {
    // Base case
    if (i >= str.length()) {
        if (output.length() > 0) {
            ans.push_back(output);
        }
        return;
    }
    
    // Exclude
    solve(ans, str, output, i + 1);
    
    // Include
    output.push_back(str[i]);
    solve(ans, str, output, i + 1);
}

vector<string> subsequences(string str) {
    vector<string> ans;
    string output = "";
    solve(ans, str, output, 0);
    return ans;
}

int main() {
    // Input
    string str = "abc";
    
    // Get the subsequences
    vector<string> subsequencesList = subsequences(str);
    
    // Print the subsequences
    cout << "The subsequences are:" << endl;
    for (const string& subsequence : subsequencesList) {
        cout << subsequence << endl;
    }
    
    return 0;
}
