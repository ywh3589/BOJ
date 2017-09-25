#include <cstdio>
#include <cstring>

using namespace std;

int dp[12];

void sol(int p, int k) {
	if (k <= dp[p - 1]) {
		printf("1");
		p--;
	}
	else if (k <= dp[p - 1] + dp[p - 2]) {
		printf("2");
		k -= dp[p - 1];
		p -= 2;
	}
	else {
		printf("3");
		k -= (dp[p - 1] + dp[p - 2]);
		p -= 3;
	}
	if (p == 0) return;
	printf("+");
	sol(p, k);
}

int main() {
	int p, k;
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	for (int i = 3; i <= 11; i++) dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	scanf("%d %d", &p, &k);
	if (k > dp[p] || k < 1) printf("-1");
	else sol(p, k);
}

