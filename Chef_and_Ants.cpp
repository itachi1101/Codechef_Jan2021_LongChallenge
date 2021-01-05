// works only when N==1
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int nXm = 2e5 + 7;
int main() {

	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long  n;
		cin >> n;
		long long v[nXm];
		for (long long  i = 0; i < n; i++) {
			long long  d;
			cin >> d;
			v[0] = d;
			for (long long  j = 1; j <= d; j++)
				cin >> v[j];
		}
		long long  neg = 0;
		long long  pos = 0;
		for (long long  i = 1; i <= v[0]; i++) {
			if (v[i] > 0) {
				pos++;
			}
			else neg++;
		}

		long long  ans = (pos * neg);
		cout << ans << endl;
	}



	return 0;
}