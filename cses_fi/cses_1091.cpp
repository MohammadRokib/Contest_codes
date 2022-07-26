// Bismillahir Rahmanir Raheem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, t;
    cin >> n >> m;

    multiset <int> ara;
    for (int i = 0; i < n; i++) {
        cin >> t;
        ara.insert(t);
    }

    for (int i = 0; i < m; i++) {
        cin >> t;
        
        auto it = ara.upper_bound (t);  
        if (it == ara.begin()) cout << "-1 ";
        else {
            cout << *(--it) << " ";
            ara.erase(it);
        }
    }
    cout << endl;
    return 0;
}