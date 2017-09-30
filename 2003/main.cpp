#include <cstdio> 

using namespace std;

int main() {
	int n, m, i, j, s[10001], c = 0;
	scanf("%d %d", &n, &m);
	s[0] = 0;
	for (i = 1; i <= n && ~scanf("%d", &j); i++) s[i] = s[i - 1] + j;
	for (i = 1; i <= n; i++) {
		for (j = i; j <= n; j++) {
			if (s[j] - s[i - 1] == m) c++;
		}
	}
	printf("%d", c);
}
