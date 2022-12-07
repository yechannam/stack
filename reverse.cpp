#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    string str;
    int j = 0;
    int save = 0, end = 0;

    cin >> t;
    cin.ignore();
    
    for (int i = 0; i < t; i++)
    {
        j = 0;
        getline(cin, str);
        while (str[j])
        {
            if (str[j] == ' ' )
            {
                j++;
                cout << ' ';
            }
            save = j;
            while (str[j] != ' ' && str[j] != '\0')
                j++;
            end = j;
            while (end > save)
            {
                end--;
                cout << str[end];
            }
        }
        cout << '\n';
    }
    return (0);
}