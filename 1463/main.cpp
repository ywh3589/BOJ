#include<cstdio>
#include<algorithm>
#define MAX 1000000

using namespace std;

int dp[MAX+1];

int sol(int n) {
	int a, b, c, *p = &dp[n];
	if (*p == -1) {
		a = b = c = MAX;
		if (n % 3 == 0) a = sol(n / 3);
		if (n % 2 == 0) b = sol(n / 2);
		c = sol(n - 1);
		*p = 1 + min(min(a, b), c);
	}
	return *p;
}

int main() {
	int n;
	dp[1] = 0;
	fill(dp + 2, dp + MAX + 1, -1);
	scanf("%d", &n);
	printf("%d", sol(n));
}