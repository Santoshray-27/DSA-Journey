// bestTimeToBuyAndSellStock
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 2, 4, 6, 2};
    int n = 5;
    int profit = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] - arr[i] > profit)
            {
                profit = arr[j] - arr[i];
            }
        }
    }
    cout << profit << endl;
}