#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	string blank;
	while (t--) {
		int n;
		cin >> n;
		string s, p;
		cin >> s >> p;
		int o1 = 0, o2 = 0;
		for (int i = 0; i < n; i++)if (s[i] == '1')o1++;
		for (int i = 0; i < n; i++)if (p[i] == '1')o2++;
		if (o1 != o2) {
			cout << "No\n"; continue;
		}
		bool pos = 1;
		o1 = o2 = 0;
		for (int i = 0; i < n; i++) {
			if (s[i] == '1')o1++;
			if (p[i] == '1')o2++;
			if (o2 > o1) {
				pos = 0; break;
			}
		}
		if (!pos) {
			cout << "No\n";
		}
		else {
			cout << "Yes\n";
		}
	}
	return 0;
}