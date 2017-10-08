#include<cstdio>
#include<algorithm>
#define MAX 1000000

using namespace std;

bool chk[MAX+1];
int a[100001];

int main() {
	int n, m, c = 0, i;
	fill(chk, chk + MAX+1, false);
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", a + i);
		chk[a[i]] = true;
	}
	scanf("%d", &m);
	for (i = 0; i < n; i++) {
		if (a[i] >= m || m == 2*a[i] || m - a[i] > MAX) continue;
		if (chk[m - a[i]]) c++;
	}
	printf("%d", c / 2);
}