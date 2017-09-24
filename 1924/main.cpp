#include <cstdio>
#include <cstring>

using namespace std;

int d[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	int a, b, c = 0, i;
	scanf("%d %d", &a, &b);
	for (i = a; i > 1; i--) c += d[i - 2];
	c = (c + b) % 7;
	if (c == 0) printf("SUN");
	else if (c == 1) printf("MON");
	else if (c == 2) printf("TUE");
	else if (c == 3) printf("WED");
	else if (c == 4) printf("THU");
	else if (c == 5) printf("FRI");
	else printf("SAT");
}