#include <stack>
#include <string>
#include <iostream>
using namespace std;
class Solution
{
public:
    bool isValid(std::string s)
    {
        stack<char> st;

        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                    return false;

                char top = st.top();
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

int main()
{
    Solution solution;
    string input = "({[]})";
    bool result = solution.isValid(input);
    if (result)
    {
        cout << "The parentheses are valid." << endl;
    }
    else
    {
        cout << "The parentheses are not valid." << endl;
    }
    return 0;
}