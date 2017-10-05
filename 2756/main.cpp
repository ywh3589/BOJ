#include <cstdio>

using namespace std;

int main() {
	int n, i, s1, s2;
	double x, y, r;
	scanf("%d", &n);
	while (n--) {
		s1 = s2 = 0;
		for (i = 0; i < 3; i++) {
			scanf("%lf %lf", &x, &y);
			r = x*x + y*y;
			if (r <= 3 * 3) s1 += 100;
			else if (r <= 6 * 6) s1 += 80;
			else if (r <= 9 * 9) s1 += 60;
			else if (r <= 12 * 12) s1 += 40;
			else if (r <= 15 * 15) s1 += 20;
		}
		for (i = 0; i < 3; i++) {
			scanf("%lf %lf", &x, &y);
			r = x*x + y*y;
			if (r <= 3 * 3) s2 += 100;
			else if (r <= 6 * 6) s2 += 80;
			else if (r <= 9 * 9) s2 += 60;
			else if (r <= 12 * 12) s2 += 40;
			else if (r <= 15 * 15) s2 += 20;
		}
		printf("SCORE: %d to %d, ", s1, s2);
		if (s1 > s2) printf("PLAYER 1 WINS.\n");
		else if(s1 == s2) printf("TIE.\n");
		else printf("PLAYER 2 WINS.\n");
	}
}