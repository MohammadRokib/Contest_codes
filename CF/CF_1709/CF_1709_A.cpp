// Bismillahir Rahmanir Raheem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int x, ara[4];
        cin >> x;

        ara[0] = 0;
        cin >> ara[1] >> ara[2] >> ara[3];

        int pos = x;
        while (pos != 0) {
            x += ara[pos];
            pos = ara[pos];
        }

        if (x >= 6) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}