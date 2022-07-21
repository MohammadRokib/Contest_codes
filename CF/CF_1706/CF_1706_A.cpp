// Bismillahir Rahmanir Raheem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int ara[n];
        for (int i = 0; i < n; i++)
            cin >> ara[i];

        string str = "B";
        for (int i = 0; i < m; i++)
            str += "B";
        
        int x, y;
        for (int i = 0; i < n; i++) {
            x = ara[i];
            y = m + 1 - x;

            if (x < y) {
                if (str[x] == 'A')
                    str[y] = 'A';
                else str[x] = 'A';
            }
            else {
                if (str[y] == 'A')
                    str[x] = 'A';
                else str[y] = 'A';
            }
        }
        str.erase(0, 1);
        cout << str << endl;
    }
    return 0;
}