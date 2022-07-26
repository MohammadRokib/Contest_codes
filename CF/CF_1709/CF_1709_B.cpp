// Bismillahir Rahmanir Raheem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n, m;
    cin >> n >> m;

    int ara[n];
    for (int i = 0; i < n; i++)
        cin >> ara[i];
        
    long long int lst1[n];
    long long int lst2[n];
    lst1[0] = 0; lst2[n-1] = 0;
    for (int i = 1, j = n-2; i < n, j >= 0; i++, j--) {
        lst1[i] = (ara[i] < ara[i-1])? ara[i-1]-ara[i]:0;
        lst2[j] = (ara[j] < ara[j+1])? ara[j+1]-ara[j]:0;

        lst1[i] += lst1[i-1]; lst2[j] += lst2[j+1];
    }

    int s, j;
    for (int i = 0; i < m; i++) {
        cin >> s >> j;

        if (s < j)
            cout << lst1[j-1]-lst1[s-1] << endl;
        else
            cout << lst2[j-1]-lst2[s-1] << endl;
    }
    return 0;
}


/*
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
        
        int list1[n];
        int list2[n];
        list1[0] = 0; list2[n-1] = 0;

        for (int i = 1, j = n-2; i < n, j >= 0; i++, j--) {
            list1[i] = list1[i-1] + ((ara[i] > ara[i-1]) ? 0:(ara[i]-ara[i-1]));
            list2[j] = list2[j+1] + ((ara[j] > ara[j+1]) ? 0:(ara[j]-ara[j+1]));
        }

        int s, j;
        for (int i = 0; i < m; i++) {
            cin >> s >> j;

            if (s < j) cout << list1[j-1]-list1[s-1] << endl;
            else cout << list2[s-1]-list2[j-1] << endl;
        }
    }
    return 0;
}
*/