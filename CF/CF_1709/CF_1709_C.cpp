// Bismillahir Rahmanir Raheem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        int s = str.size();
        int cnt = 0;
        int qm = 0;
        for (int i = 0; i < s; i++) {
            if (str[i] == '(') cnt++;
            else if (str[i] == ')') cnt--;
            else qm++;
            
            if (cnt + qm == 1) {
                cnt = 1; qm = 0;
            }
        }

        if (abs(cnt) == qm) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

/*
int main()
{
    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        int s = str.size();
        int i = 0, j = s-1;
        int p = 0, q = 0;
        while (i < j) {
            if (str[i] == '?') p++;
            if (str[j] == '?') q++;
            i++; j--;
        }

        if (p+q == s && p+q > 2) cout << "NO\n";
        else if (p+q < 2) cout << "YES\n";
        else if (p != q) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
*/