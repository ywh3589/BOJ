#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, i, j, a[3];
	scanf("%d", &n);
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	while (n--) {
		scanf("%d %d", &i, &j);
		swap(a[--i], a[--j]);
	}
	if (a[0] == 1) printf("1");
	else if (a[1] == 1) printf("2");
	else printf("3");
}
