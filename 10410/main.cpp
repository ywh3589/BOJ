#include<cstdio>

using namespace std;

int main() {
	int n, y1, m1, d1, y2, m2, d2, c;
	char s[64];
	scanf("%d", &n);
	while (n--) {
		scanf("%s %d/%d/%d %d/%d/%d %d", s, &y1, &m1, &d1, &y2, &m2, &d2, &c);
		printf("%s ", s);
		if (y1 >= 2010 || y2 >= 1991) printf("eligible\n");
		else if (c > 40) printf("ineligible\n");
		else printf("coach petitions\n");
	}
}