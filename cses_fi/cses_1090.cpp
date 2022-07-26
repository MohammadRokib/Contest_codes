#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int ara[n];
    for (int i = 0; i < n; i++)
        cin >> ara[i];
        sort (ara, ara+n);
    
    int i = 0;
    int j = n-1;
    int cnt = 0;
    while (i <= j) {
        if (ara[i]+ara[j] > k) j--;
        else {i++; j--;}
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}