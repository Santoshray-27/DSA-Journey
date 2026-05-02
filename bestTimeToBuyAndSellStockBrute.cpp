// bestTimeToBuyAndSellStock
#include <iostream>
using namespace std;
#include <vector>

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int max = 0;
    int diff;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            diff = prices[j] - prices[i];
            if (diff > max)
            {
                max = diff;
            }
        }
    }
    return max;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);
}

