#include <bits/stdc++.h>

using namespace std;

const int nax = 1e4;
int a[nax], n, k;

void test_case() {
	cin >> n >> k;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);
	double sum = 0;
	if(k != 0) {
		int cnt = 0;
		for(int i = 0 + k; i < n - k; ++i) {
			sum += a[i];
			cnt++;
		}
		cout << fixed << setprecision(6) << sum / cnt;
	}
	else {
		for(int i = 0; i < n; ++i) {
			sum += a[i];
		}
		cout << fixed << setprecision(6) << sum / n;
	}
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	while(T--) {
		test_case();
	}
	//test_case();
	return 0;
}
