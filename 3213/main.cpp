#include<cstdio>

using namespace std;

int main() {
	int n, a, b, c, p, q, res;
	a = b = c = res = 0;
	scanf("%d", &n);
	while (n--) {
		scanf("%d/%d", &p, &q);
		if (p == 1 && q == 4) a++;
		else if (p == 1 && q == 2) b++;
		else c++;
	}
	if (c >= a) {
		res += c;
		res += b / 2 + (b % 2 ? 1 : 0);
	}
	else {
		a -= c;
		res += c;
		if (b % 2) {
			res += b / 2 + 1;
			a -= 2;
		}
		else {
			res += b / 2;
		}
		if (a > 0) res += a / 4 + (a % 4 ? 1 : 0);
	}
	printf("%d", res);
}