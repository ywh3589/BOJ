#include <cstdio>

using namespace std;

int main() {
	float a, b, c, d;
	scanf("%f %f", &a, &b);
	if (a == 0) {
		if (b <= 125) {
			d = (250 * (125 - b)) / (250 - b);
			c = 250 - d;
		}
		else {
			d = 0;
			c = 250 * 125 / b;
		}
	}
	else if (b == 0) {
		if (a <= 125) {
			d = 125 * 250 / (250 - a);
			c = 250 - d;
		}
		else {
			d = 125 * 250 / (a);
			c = 0;
		}
	}
	else {
		if (a <= 125) {
			c = 250 * (125 - a) / b;
			d = 0;
		}
		else {
			c = 0;
			d = 250 * (125 - b) / a;
		}
	}
	printf("%.2f %.2f", c, d);
}