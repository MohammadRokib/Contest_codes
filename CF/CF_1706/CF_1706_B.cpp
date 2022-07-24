// Bismillahir Rahmanir Raheem

#include <bits/stdc++.h>
using namespace std;

vector <int> ara[100100];

int solve (int x) {
    if (ara[x].size() == 0) return 0;

    int ans = 1;
    int curr = ara[x][0];
    for (int i : ara[x]) {
        if ((i & 1) != (curr & 1)) {
            ans++;
            curr = i;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n;

        for (int i = 1; i <= n; i++)
            ara[i].clear();
        
        for (int i = 1; i <= n; i++) {
            cin >> x;
            ara[x].push_back(i);
        }

        for (int i = 1; i <= n; i++)
            cout << solve (i) << " ";
            cout << endl;
    }
}

/*
int main()


bool comp (int a, int b) {
	return (a < b);
}

int search_index (int x, int n, int ara[]) {
	int index;
	for (int i = 0; i < n; i++)
		if (ara[i] == x) {
			index = i;
			break;
		}
	return index;
}

int solve (int x, int n, int ara[]) {
	int first = search_index (x, n, ara);
	int cnt = 0; int ans = 0;
	for (int i = 0; i < n; i++) {
		if (ara[i] == x) {
			if (i-first == 0) {
                cnt++; first = i;
            }
            else if ((i-first) % 2 == 1) {
				cnt++; first = i;
			}
			else {
				ans = max (cnt, ans, comp);
				cnt = 1; first = i;
			}
		}
	}
	ans = max (cnt, ans, comp);
	return ans;
}

int main()
{
	int t;
	cin >> t;
	
	while (t--) {
		int n;
		cin >> n;
		
		int ara[n];
		for (int i = 0; i < n; i++)
			cin >> ara[i];
		
		for (int i = 1; i <= n; i++)
			cout << solve (i, n, ara) << " ";
			cout << endl;
	}
	return 0;
}
*/

/*
bool comp (int a, int b) {
    return (a < b);
}

int solve (int x, int first, int n, int ara[]) {
    int cnt = 1, mx = 1;
    int curr = first;

    for (int i = first+1; i < n; i++) {
        if (ara[i] == x) {
            curr = i;
            if (curr-first % 2 == 1) {
                cnt++;
                first = i;
            }
            else
                mx = max (cnt, mx, comp);
        }
    }
    return cnt;
}

int find_index (int x, int n, int ara[]) {
    int ans;
    for (int i = 0; i < n; i++)
        if (ara[i] == x) {
            ans = solve (x, i, n, ara);
            break;
        }
    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int ara[n];
        for (int i = 0; i < n; i++)
            cin >> ara[i];
        
        for (int i = 1; i <= n; i++)
            cout << find_index (i, n, ara) << " ";
            cout << endl;
    }
    return 0;
}
*/