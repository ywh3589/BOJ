#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int t, a, b, c;
	scanf("%d %d %d", &t, &a, &b);
	double L = sqrt(a*a + b*b);
	while (t--) {
		scanf("%d", &c);
		if (c > L) printf("NE\n");
		else printf("DA\n");
	}
}