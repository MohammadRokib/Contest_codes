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

        int ara[n];

        for (int i = 0; i < n; i++)
            cin >> ara[i];
        
        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (ara[i]%ara[0] != 0) {
                flag = false;
                break;
            }
        }
        if (flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}