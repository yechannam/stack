#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack <char>st;
    stack <char>st2;
    string str;
    char command;
    int M;

    cin >> str;
    int i = 0;

    while (str[i])
        st.push(str[i++]);
    cin >> M;
    for (int j = 0; j < M; j++)
    {  
        cin >> command;
        if (command == 'L')
        {
            if (!st.empty())
            {
                st2.push(st.top());
                st.pop();
            }
        }
        else if (command == 'D')
        {
            if (!st2.empty())
            {
                st.push(st2.top());
                st2.pop();
            }
        }
        else if (command == 'B')
        {
            if (!st.empty())
                st.pop();
        }
        else if (command == 'P')
        {
            cin >> command;
            st.push(command);
        }
    }   
    while (!st.empty())
    {
        st2.push(st.top());
        st.pop();
    }
    while (!st2.empty())
    {
        cout << st2.top();
        st2.pop();
    }
    return (0);
}