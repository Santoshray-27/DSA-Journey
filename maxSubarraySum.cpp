#include <bits/stdc++.h>
using namespace std;

// Kadane's Algorithm
// it is a Greedy Algorithm
// it state that if sum is negative then discard it
// TC : O(n)

int maxSubArray(vector<int> &nums)
{
    int maxSum = INT_MIN, currSum = 0;
    for (int val : nums)
    {
        currSum += val;
        maxSum = max(maxSum, currSum);

        if (currSum < 0)
        {
            currSum = 0;
        }
    }
    return maxSum;
}

// TC : O(n^2) Brute Force Approach...
int maxSubarraySum(int arr[], int n)
{
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            max_sum = max(sum, max_sum);
        }
    }
    return max_sum;
}

// Print All Subarrays
int printAllSubarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n = 4;
    int arr[n] = {2,3,4,1,4};

    printAllSubarrays(arr, n);
    cout << endl;
    cout << maxSubarraySum(arr, n);

    vector<int> nums = {-2, 1, -3, 4};
    cout << maxSubArray(nums);
}