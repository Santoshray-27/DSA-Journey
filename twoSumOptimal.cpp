#include <iostream>
using namespace std;
#include <vector>
#include <map>

vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> mp;
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        if (mp.find(target - nums[i]) != mp.end())
        {
            ans.push_back(mp[target - nums[i]]);
            ans.push_back(i);
            return ans;
        }
        mp[nums[i]] = i;
    }
    return ans;
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = twoSum(nums, target);
    cout << ans[0] << " " << ans[1];
}