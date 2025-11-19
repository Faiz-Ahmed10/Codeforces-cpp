#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    for (int i = 0; i < str.length(); ++i)
    {   
        if(str[i] == '9' && i == 0) continue;
        if (str[i] > '4')
            str[i] = '9' - (str[i] - '0');
    }

    cout << str;

    return 0;
}