#include <cstdio> 
#include <algorithm>

using namespace std;

pair<int, int> p[100];

int main() {
	int h, w, n, i, d, x, s = 0;
	scanf("%d %d %d", &w, &h, &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d", &p[i].first, &p[i].second);
	}
	scanf("%d %d", &d, &x);
	for (i = 0; i < n; i++) {
		if (p[i].first == d) s += abs(p[i].second - x);
		else if (d == 1) {
			if (p[i].first == 2) s += h + min(p[i].second + x, 2 * w - p[i].second - x);
			else if(p[i].first == 3) s += x + p[i].second;
			else s += w - x + p[i].second;
		}
		else if (d == 2) {
			if (p[i].first == 1) s += h + min(p[i].second + x, 2 * w - p[i].second - x);
			else if (p[i].first == 3) s += x + h - p[i].second;
			else s += w - x + h - p[i].second;
		}
		else if (d == 3) {
			if (p[i].first == 1) s += x + p[i].second;
			else if (p[i].first == 2) s += h - x + p[i].second;
			else s += w + min(p[i].second + x, 2 * h - p[i].second - x);
		}
		else {
			if (p[i].first == 1) s += x + w - p[i].second;
			else if (p[i].first == 2) s += h - x + p[i].second;
			else s += w + min(p[i].second + x, 2 * h - p[i].second - x);
		}
	}
	printf("%d", s);
}