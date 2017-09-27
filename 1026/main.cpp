#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, i, A[51], B[51], s = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &A[i]);
	for (i = 0; i < n; i++) scanf("%d", &B[i]);
	sort(A, A + n);
	sort(B, B + n);
	for (i = 0; i < n; i++) s += A[i] * B[n - 1 - i];
	printf("%d", s);
}
