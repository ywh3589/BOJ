#include <cstdio>

#define M_PI 3.14159265358979323846

using namespace std;

int main() {
	int c, T = 1;
	double r, d, t;
	while (~scanf("%lf %d %lf", &r, &c, &t)) {
		if (!c) break;
		d = r*c*M_PI / 63360;
		printf("Trip #%d: %.2lf %.2lf\n", T++, d, d * 3600 / t);
	}
}