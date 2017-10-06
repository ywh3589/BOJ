#include <cstdio>

using namespace std;

int main() {
	int m, d, a, b, r = 3, M[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	scanf("%d %d", &a, &b);
	m = d = 1;
	while (!(m == a && d == b)) {
		r++;
		d++;
		if (d > M[m]) {
			d = 1;
			m++;
		}
	}
	char s[7][10] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	printf("%s", s[r % 7]);
}