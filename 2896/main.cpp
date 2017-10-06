#include <cstdio>

using namespace std;

int main() {
	float a[3], n[3], m = 12345, r;
	for (int i = 0; i < 3; i++) scanf("%f", &a[i]);
	for (int i = 0; i < 3; i++) scanf("%f", &n[i]);
	for (int i = 0; i < 3; i++) if (m > a[i] / n[i]) m = a[i] / n[i];
	for (int i = 0; i < 3; i++) {
		r = a[i] - m*n[i];
		printf("%.4f ", r);
	}
}