#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        set <char> list;
        string ch;
        cin >> ch;

        int s = ch.size();
        int cnt = 0;
        for (int i = 0; i < s; i++) {
            list.insert(ch[i]);
            int x = list.size();
            if (x > 3) {
                cnt++;
                list.clear();
                list.insert(ch[i]);
            }
        }
        if (list.size() > 0) cnt++;
        cout << cnt << endl;
    }
    return 0;
}