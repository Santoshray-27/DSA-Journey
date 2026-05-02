#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                return true;
            }
            if (nums[j] == n)
            {
                return false;
            }
        }
    }
    return 0;
}
int main()
{
    vector<int> nums = {1, 2, 3, 1};
    cout << containsDuplicate(nums);
}