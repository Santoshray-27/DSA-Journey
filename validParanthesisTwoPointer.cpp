#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "{[]{}[](){}}";
    // valid parentheses using two pointers
    int left = 0;
    int right = s.length() - 1;
    bool isValid = true;

    while (left < right) {
        if ((s[left] == '(' && s[right] != ')') ||
            (s[left] == '{' && s[right] != '}') ||
            (s[left] == '[' && s[right] != ']')) {
            isValid = false;
            break;
        }
        left++;
        right--;
    }

    if (isValid)
        cout << "Valid";
    else
        cout << "Invalid";

    return 0;
}