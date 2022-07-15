#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--) {
        int x;
        cin >> x;

        if (x%2 == 0 && x > 1) {
            cout << x/2 << " ";
            cout << 0 << " ";
            cout << 0 << endl;
        }
        else cout << -1 << endl;
    }

    return 0;
}