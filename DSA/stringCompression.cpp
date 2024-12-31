#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int ansIndex = 0;
        int n = chars.size();
        int i = 0;

        while(i < n) {
            int j = i + 1;
            while(j < n && chars[i] == chars[j]) {
                j++;
            }

            // Store the current character
            chars[ansIndex++] = chars[i];

            // Count of characters
            int count = j - i;
            if(count > 1) {
                string cnt = to_string(count);
                for(char ch: cnt) {
                    chars[ansIndex++] = ch;
                }
            }

            // Move to the new/different character
            i = j;
        }

        return ansIndex;
    }
};

void printVector(const vector<char>& chars, int length) {
    for(int i = 0; i < length; i++) {
        cout << chars[i];
    }
    cout << endl;
}

int main() {
    Solution sol;

    vector<char> chars = {'a', 'b', 'b', 'b', 'd', 'f', 'd'};
    int newLength = sol.compress(chars);

    cout << "Compressed string: ";
    printVector(chars, newLength);

    return 0;
}
