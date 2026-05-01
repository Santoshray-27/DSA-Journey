#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {3, 4, 5, 1};
    int target = 6;

    for (int i = 0; i < 4; i++) //O(n)
    {
        for (int j = i + 1; j < 4; j++) //O(n)
        {
            if (target == arr[i] + arr[j])
            {
                cout <<"[" << i << "," << j << "]";
            }
        }
    }
}

//O(n) * O(n)
// TC : O(n^2)