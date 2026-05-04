// Merge Sorted Array

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums1;
    vector<int> nums2;

    nums1 = {1, 2, 3, 0, 0, 0};
    nums2 = {2, 5, 6};

    vector<int> ans;

    int m = nums1.size();
    int n = nums2.size();

    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if(nums1[i] < nums2[j]){
            ans.push_back(nums1[i]);
            i++;
        } else {
            ans.push_back(nums2[j]);
            j++;
        }
    }

    while (i < m)
    {
        ans.push_back(nums1[i]);
        i++;
    }

    while (j < n)
    {
        ans.push_back(nums2[j]);
        j++;
    }

    for(int x : ans){
        cout << x << " ";
    }

    return 0;
}