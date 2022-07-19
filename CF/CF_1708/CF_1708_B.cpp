// Bismillahir Rahmanir Raheem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        int ara[n];
        bool flag = true;
        for (int i = 0; i < n; i++) {
            ara[i] = ((l-1)/(i+1) + 1) * (i+1);
            if (ara[i] > r) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout << "YES\n";
            for (int i = 0; i < n; i++)
                cout << ara[i] << " ";
                cout << endl;
        }
        else cout << "NO\n";
    }
}
/*
int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, l, r, x;
        cin >> n >> l >> r;

        int p = 1;
        vector <int> ara;
        map <int, bool> list;
        for (int i = l; i <= r; i++) {
            x = __gcd (p, i);
            if (!list[x]) {
                list[x] = true;
                ara.push_back(i);
                p++;
            }
            if (ara.size() >= n) break;
        }

        if (ara.size() < n)
            cout << "NO\n";
        else {
            cout << "YES\n";
            for (auto &itr: ara)
                cout << itr << " ";
                cout << endl;
        }
    }
    return 0;
}
*/

/*
int main()
{
    map <int, bool> list;

    list.insert ({5, true});
    list.insert ({17, true});
    list.insert ({510000000, true});
    list.insert ({5213, true});
    list.insert ({5782, true});

    for (auto &itr: list)
        cout << itr.first << endl;
    cout << list[18] << endl;

    int n = 9;
    for (int i = 9; i > 0; i--)
        cout << i << " ";
}
*/