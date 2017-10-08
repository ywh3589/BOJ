#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	int n, l, i, c;
	char a[128], b[128];
	scanf("%d", &n);
	while (n--) {
		scanf("%s %s", a, b);
		l = strlen(a);
		c = 0;
		for (i = 0; i < l; i++) {
			c += (a[i] != b[i]);
		}
		printf("Hamming distance is %d.\n", c);
	}
}