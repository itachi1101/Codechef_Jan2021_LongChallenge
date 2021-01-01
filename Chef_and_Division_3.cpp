#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		long long n, k, d;
		cin >> n >> k >> d;
		long long v[1024];
		for (long long  i = 0; i < n; i++) {
			cin >> v[i];
		}
		long long total_question = 0;
		for (int i = 0; i < n; i++) {
			total_question += v[i];
		}
		if (total_question < k) {
			cout << "0" << endl;

		}
		else {
			long long days = total_question / k;
			cout << min(days, d) << endl;
		}
	}



	return 0;
}