#include<cstdio>

using namespace std;

int main() {
	int n, h, m, d, s, c = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d:%d %d", &h, &m, &d);
		m += h * 60;
		if (m <= 360) c += d * 5;
		else if (m > 360 && m < 420) {
			s = 420 - m;
			if (s >= d) c += d * 5;
			else c += 10 * (d - s) + s * 5;
		}
		else if (m >= 420 && m <= 1080) c += d * 10;
		else if (m > 1080 && m < 1140) {
			s = 1140 - m;
			if (s >= d) c += 10 * d;
			else c += 5 * (d - s) + 10 * s;
		}
		else c += 5 * d;
	}
	printf("%d", c);
}