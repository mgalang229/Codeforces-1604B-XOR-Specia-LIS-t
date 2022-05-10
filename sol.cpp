#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		if (n % 2 == 0) {
			cout << "YES" << '\n';
			continue;
		}
		bool possible = false;
		for (int i = 0; i + 1 < n; i++) {
			if (a[i] >= a[i + 1]) {
				possible = true;
				break;
			}
		}
		cout << (possible ? "YES" : "NO") << '\n';
	}
	return 0;
}
