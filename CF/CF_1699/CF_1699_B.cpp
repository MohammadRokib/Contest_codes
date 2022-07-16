#include <bits/stdc++.h>
using namespace std;

vector <int> lst1, lst2;

void loop () {
    
    int a = 1;
    for (int i = 1; i < 51; i++) {
        
        if (i == 4*a-2)
            lst1.push_back(i);
        else if (i == 4*a-1) {
            a++;
            lst1.push_back(i);
        }
        else lst2.push_back(i);
    }
}

int main()
{
    loop();
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int ara[50], arr[50];
        int x = 1;
        for (int i = 1; i <= m; i++) {
            if (i == 4*x-2) {
                ara[i-1] = 0;
                arr[i-1] = 1;
            }
            else if (i == 4*x-1) {
                ara[i-1] = 0;
                arr[i-1] = 1;
                x++;
            }
            else {
                ara[i-1] = 1;
                arr[i-1] = 0;
            }
        }

        x = 0;
        bool flag;
        for (int i = 0; i < n; i++) {
            if (ara[i] == 1) {
                for (int j = 0; j < m; j++)
                    cout << ara[j] << " ";
            }
            else {
                for (int j = 0; j < m; j++)
                    cout << arr[j] << " ";
            }
            cout << endl;
        }
    }
}