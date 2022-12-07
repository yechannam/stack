#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int t = 0;
    stack <char>s;
    string str;

    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        getline(cin, str);
        for (int j = 0; j <= str.size(); j++)
        {
            if (str[j] == ' ')
            {
                while (!s.empty())
                {
                    cout << s.top();
                    s.pop();
                }
                cout << ' ';        
            }
            else if (str[j] == 0)
            {
                while (!s.empty())
                {
                    cout << s.top();
                    s.pop();
                }
            }
            else
                s.push(str[j]);
        }
        cout << '\n';
    }
}
