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
        
        string enemy, gregor;
        cin >> enemy >> gregor;
        
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (gregor[i] == '0') continue;
            
            if (i > 0 && enemy[i-1] == '1') {
                enemy[i-1] = 'x'; cnt++;
            }
            else if (enemy[i] == '0') {
                enemy[i] = 'x'; cnt++;
            }
            else if (i+1 < n && enemy[i+1] == '1') {
                enemy[i+1] = 'x'; cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}

/*
int main()
{
    int t, p = 0;
    cin >> t;
    
    while (p < t) {
        int n, cnt;
        string ara, arr;

        cin >> n;
        cin >> ara >> arr;

        if (arr[0] == '1' && ara[1] == '1') {
            cnt = 1;
            ara[1] = '2';
        }
        else if (arr[0] == '1' && ara[0] == '0') {
            cnt = 1;
            ara[0] = '2';
        }
        else cnt = 0;

        if (arr[n-1] == '1' && ara[n-2] == '1') {
            cnt++; ara[n-2] = '2';
        }
        else if (arr[n-1] == '1' && ara[n-1] == '0') {
            cnt++; ara[n-1] = '2';
        }

        for (int i = 1; i < n-1; i++) {
            if (arr[i] == '1' && ara[i-1] == '1') {
                cnt++;
                ara[i-1] = '2';
            }
            else if (arr[i] == '1' && ara[i] == '1') {
                cnt++;
                ara[i] = '2';
            }
            else if (arr[i] == '1' && ara[i+1] == '0') {
                cnt++;
                ara[i+1] = '2';
            }
        }
        if (p == 62)
            cout << ara << arr << endl;
        else
            cout << cnt << endl;
        p++;
    }
    return 0;
}
*/