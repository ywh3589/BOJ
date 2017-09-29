#include <cstdio>
#include <cstring>
#define MAX 1000001 

using namespace std;

int cal(int n) {
	int m = 0;
	while (n) {
		m += n % 10;
		n /= 10;
	}
	return m;
}

int main() {
	char n[MAX];
	int l, i, s = 0, c = 0;
	scanf("%s", n);
	l = strlen(n);
	for (i = 0; i < l; i++) s += n[i] - '0';
	if (l > 1) for (c = 1; s > 9; c++) s = cal(s);
	printf("%d\n", c);
	if (s % 3) printf("NO");
	else printf("YES");
}
