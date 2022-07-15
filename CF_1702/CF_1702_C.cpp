#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int y, x = 0;
        map <int, int> list;

        for (int i = 0; i <= n; i++) {
            cin >> y;
            list.insert(pair <int, int> (x, y));
            x = y;
        }
    }
    return 0;
}