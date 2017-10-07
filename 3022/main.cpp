#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> m;

int main() {
	int n, i, k = 0;
	string N;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> N;
		if (i / 2 < m[N]) k++;
		m[N]++;
	}
	cout << k;
}