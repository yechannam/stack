#include <iostream>
#include <deque>
#include <stdio.h>

using namespace std;

int main()
{
    string str;
    int n = 0;
    int temp = 0;
    deque <int>dq;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push_front")
        {
            cin >> temp; 
            dq.push_front(temp);
        }
        else if (str == "push_back")
        {
            cin >> temp; 
            dq.push_back(temp);
        }
        else if (str == "pop_front")
        {
            if (!dq.empty())
            {
                printf("%d\n", dq.front());
                dq.pop_front();
            }
            else
                printf("-1\n");
        }
        else if (str == "pop_back")
        {
            if (!dq.empty())
            {
                printf("%d\n", dq.back());
                dq.pop_back();
            }
            else
                printf("-1\n");
        }
        else if (str == "size")
        {
            printf("%lu\n", dq.size());
        }
        else if (str == "empty")
        {
            printf("%d\n", dq.empty());
        }
        else if (str == "front")
        {
            if (dq.empty())
            {
                printf("-1\n");
            }
            else
                printf("%d\n", dq.front());
        }
        else if (str == "back")
        {
            if (dq.empty())
            {
                printf("-1\n");
            }
            else
                printf("%d\n", dq.back());
        }
    }
    return (0);
}