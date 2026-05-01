#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 2, 4, 6, 2};
    int sub = 0;
    int max;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            sub = arr[i] - arr[j];
            if (sub > sub)
            {
                max = sub;
            }
        }
    }
    cout << max;
}