// Bismillahir Rahmanir Raheem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    int ara[n], arr[m];
    
    for (int i = 0; i < n; i++)
        cin >> ara[i];
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    
    sort (ara, ara+n);
    sort (arr, arr+m);

    int j = 0;
    int i = 0;
    int ans = 0;
    while (i < n && j < m) {
        int x = (ara[i]-arr[j]);

        if (x >= -k && x <= k) {
            i++; j++;
            ans++;
        }
        else if (x < -k) i++;
        else j++;
            
    }
    cout << ans << endl;
    return 0;
}