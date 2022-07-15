#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        map <int, pair<int, int>> list;

        for (int i = 0; i < n; i++) {
            int y;
            cin >> y;

            if (!list.count(y)) {
                list[y].first = i;
                list[y].second = i;
            }
            else list[y].second = i;
        }
    }
    return 0;
}