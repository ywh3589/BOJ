#include <cstdio>

using namespace std;

int main() {
	float a, b, c, d, v[4], m = 0;
	scanf("%f %f %f %f", &a, &b, &c, &d);
	v[0] = a / c + b / d;
	v[1] = c / d + a / b;
	v[2] = d / b + c / a;
	v[3] = b / a + d / c;
	int i, j;
	for (i = 0; i < 4; i++) {
		if (m < v[i]) {
			m = v[i];
			j = i;
		}
	}
	printf("%d", j);
}