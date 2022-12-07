#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    string str;
    int n = 0;
    int temp = 0;
    stack <int>s;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> temp; 
            s.push(temp);
        }
        else if (str == "pop")
        {
            if (!s.empty())
            {
                cout << s.top() <<endl;
                s.pop();
            }
            else
                cout << -1 << endl;
        }
        else if (str == "size")
        {
            cout << s.size() << endl;
        }
        else if (str == "empty")
        {
            cout << s.empty() << endl;
        }
        else if (str == "top")
        {
            if (s.empty())
            {
                cout << -1 << endl;
            }
            else
                cout << s.top() << endl;
        }
    }
    
    return 0;
}