#include <iostream>
using namespace std;
#include <vector>
int maxProfit(vector<int> &prices)
{
    int max = 0;
    int buyPrice = prices[0];
    int n = prices.size();

    for (int i = 1; i < n; i++)
    {
        int currProfit = prices[i] - buyPrice;
        if (currProfit > max)
        {
            max = currProfit;
        }
        if (prices[i] < buyPrice)
        {
            buyPrice = prices[i];
        }
    }
    return max;
}

int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);
}