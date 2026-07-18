#include <bits/stdc++.h>

using namespace std;

int main() {
    int nums[4] = {
        1,
        2,
        3,
        4,
    };
    std::vector<int> ans;
    int mul = 1;
    int n = 4;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == j) {
                continue;
            }
            mul *=  nums[j];
        }
        ans.push_back(mul);
        mul = 1;
    }
  
    for(auto i : ans){
        cout << i << " ";
    }
    
}