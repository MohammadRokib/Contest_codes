#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	while (t--) {
		long long int x;
		cin >> x;
		
		long long int ara[10];
		for ( int i = 0; i < 10; i++) {
			ara[i] = pow (10, i);
			if (ara[i] > x) {
				cout << x - ara[i-1] << endl;
				break;
			}
            else if (ara[i] == x) {
                cout << x - ara[i] << endl;
                break;
            }
		}
		
	}
	
	return 0;
}