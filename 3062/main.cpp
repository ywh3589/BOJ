#include<cstdio>

using namespace std;

int rn(int n) {
	int m = 0;
	while (n) {
		m = 10*m + n % 10;
		n /= 10;
	}
	return m;
}

int main() {
	int t, r, a;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &r);
		a = r + rn(r);
		if (a == rn(a)) printf("YES\n");
		else printf("NO\n");
	}
}