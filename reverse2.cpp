#include <iostream>
#include <deque>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
    string  str;
    deque   <int>dq;
    int     i = 0;
    getline(cin, str);
    while (str[i])
    {
        if (str[i] == '<')
        {
            while (1)
            {
                if (str[i] == '>')
                {
                    cout << '>';
                    i++;
                    break;
                }
                cout << str[i];
                i++;
            }
        }
        else
        {
            
        }
    }
    return (0);
}