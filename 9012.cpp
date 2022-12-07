#include <iostream>
#include <string>
#include <stack>

using namespace std;

void    print_result(int n)
{
    if (n == 0)
        cout << "NO\n";
    else if (n == 1)
        cout << "YES\n";
}

int main()
{
    int     t, flag = 0;
    string  str;
    stack   <char>s;

    cin >> t;
    while (t--)
    {
        flag = 0;
        cin >> str;
        int i = 0;
        while (str[i])
        {
            if (str[i] == '(')
               s.push('(');
            else if (str[i] == ')')
            {
                if (s.empty())
                    flag = 1;
                else
                    s.pop();
            }
            i++;
        }
        if (s.empty() && flag == 0)
            print_result(1);
        else
            print_result(0);
        while (!s.empty())
            s.pop();
    }
    return (0);
}
