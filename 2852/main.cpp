#include <cstdio>

using namespace std;

int main() {
	int n, i, a, b, t, m, s, d = 0, p = 0;
	a = b = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d %d:%d", &t, &m, &s);
		s += m * 60;
		if (d > 0) a += s - p;
		else if (d < 0) b += s - p;
		p = s;
		if (t == 1) d++;
		else d--;
	}
	if (d > 0) a += 48*60 - p;
	else if (d < 0) b += 48*60 - p;
	printf("%.2d:%.2d\n%.2d:%.2d", a / 60, a % 60, b / 60, b % 60);
}