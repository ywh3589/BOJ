#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int n, i, j, a, m[100001][3], M[100001][3];
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		for (j = 0; j < 3; j++) {
			scanf("%d", &a);
			m[i][j] = M[i][j] = a;
		}
	}
	for (i = 1; i < n; i++) {
		m[i][0] += min(m[i - 1][0], m[i - 1][1]);
		m[i][1] += min(m[i - 1][0],
			min(m[i - 1][1], m[i - 1][2]));
		m[i][2] += min(m[i - 1][1], m[i - 1][2]);
		M[i][0] += max(M[i - 1][0], M[i - 1][1]);
		M[i][1] += max(M[i - 1][0],
			max(M[i - 1][1], M[i - 1][2]));
		M[i][2] += max(M[i - 1][1], M[i - 1][2]);
	}
	printf("%d %d", max(max(M[n - 1][0], M[n - 1][1]), M[n - 1][2]),
		min(min(m[n - 1][0], m[n - 1][1]), m[n - 1][2]));
}