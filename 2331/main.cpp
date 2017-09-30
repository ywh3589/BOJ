#include <cstdio> 
#include <algorithm>

using namespace std;

int main() {
	int i, j, P, tp, s, a[10001];
	scanf("%d %d", &a[0], &P);
	for (i = 1; ; i++) {
		tp = a[i-1];
		s = 0;
		while (tp) {
			s += pow(tp % 10, P);
			tp /= 10;
		}
		for (j = i - 1; j >= 0; j--) {
			if (a[j] == s) {
				printf("%d", j);
				return 0;
			}
		}
		a[i] = s;
	}
}
