// Bismillahir Rahmanir Raheem
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int sum = 0;
        int ara[n];

        for (int i = 0; i < n; i++) {
            cin >> ara[i];
            if (i < n-1)
                sum += ara[i];
        }

        if (ara[n-1]%sum == 0 || sum%ara[n-1] == 0)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}