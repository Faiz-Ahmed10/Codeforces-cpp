#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin >> x;

    if(x/10 == 0 && x == 9) {
        cout << x;
        return 0;
    }

    string str = to_string(x);
    for (int i = 0; i < str.length(); ++i)
    {   
        if(str[i] == '9' && i == 0) continue;
        if (str[i] > '4')
            str[i] = 9 - (str[i] - '0') + '0';
    }

    cout << stoll(str);

    return 0;
}