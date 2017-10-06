#include <cstdio>
#include <map>
#include <algorithm>

using namespace std;

map<int, int> m;
pair<int, int> p[1000];

int main() {
	int n, c, a[1000], i, j, k;
	scanf("%d %d", &n, &c);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		m[a[i]]++;
	}
	for (i = 0, j = 0; i < n; i++) {
		if (m[a[i]]) {
			p[j++] = { m[a[i]], -i };
			m[a[i]] = 0;
		}
	}
	sort(p, p + j);
	for (i = j-1; i >= 0; i--) {
		for (k = 0; k < p[i].first; k++) {
			printf("%d ", a[-p[i].second]);
		}
	}
}