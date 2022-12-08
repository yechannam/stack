#include <iostream>
#include <string>
#include <stack>
#include <stdio.h>
using namespace std;

int main()
{
    int     n;
    int     num;
    int     m = 1;
    int     flag = 0;
    stack   <int>st;
    string  answer;

    cin >> n;
    st.push(0);
    while (n--)
    {
        cin >> num;
        if (num >= m)
        {
            while (m <= num)
            {
                st.push(m++);
                answer += '+';
            }
            st.pop();
            answer += '-';
        }
        else
        {
            if (st.top() == num)
            {
                st.pop();
                answer += '-';
            }
            else
                flag = 1;
        }
    }
    if (flag == 0)
    {
    num = 0;
    while (answer[num])
    {
        printf("%c\n",answer[num]); //타임아웃 때문에 printf 사용
        num++;
    }
    }
    else
        cout << "NO" << endl;

    return (0);
}