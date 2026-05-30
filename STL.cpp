#include <bits/stdc++.h>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    vector<pair<pair<int, int>, pair<int, int>>> v;

    v.push_back({{1, 2}, {3, 4}});
    v.push_back({{3, 4}, {5, 6}});
    for (auto it : v)
    {
        cout << it.first.first << " " << it.first.second << " " << it.second.first << " " << it.second.second << endl;
    }

    // STACK
    stack<int> s;

    s.push(1);
    s.push(2);                  
    s.push(3);
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    s.swap(s); // clear stack

     
    // QUEUE
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << q.front() << endl; // 1
    q.pop();
    cout << q.front() << endl; // 2





    return 0;
}