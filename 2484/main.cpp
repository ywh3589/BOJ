#include <cstdio> 
#include <algorithm>

using namespace std;

int main() {
	int a[4], i, s, n, max = 0;
	scanf("%d", &n);
	while (n--) {
		for (i = 0; i < 4; i++) scanf("%d", &a[i]);
		sort(a, a + 4);
		if (a[0] == a[1] && a[1] == a[2] && a[2] == a[3]) s = 50000 + a[0] * 5000;
		else if ((a[0] == a[1] && a[1] == a[2]) ||
			(a[1] == a[2] && a[2] == a[3])) s = 10000 + a[1] * 1000;
		else if (a[0] == a[1] && a[2] == a[3]) s = 2000 + (a[0] + a[2]) * 500;
		else if (a[0] == a[1]) s = 1000 + a[0] * 100;
		else if (a[1] == a[2]) s = 1000 + a[1] * 100;
		else if (a[2] == a[3]) s = 1000 + a[2] * 100;
		else {
			i = (a[0] > a[1]) ? a[0] : a[1];
			i = (i > a[2]) ? i : a[2];
			i = (i > a[3]) ? i : a[3];
			s = 100 * i;
		}
		if (max < s) max = s;
	}
	printf("%d", max);
}