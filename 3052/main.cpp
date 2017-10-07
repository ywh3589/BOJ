#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int a[42], i, j, c = 0;
	fill(a, a + 42, 0);
	for (i = 0; i < 10; i++) {
		scanf("%d", &j);
		a[j % 42]++;
	}
	for (i = 0; i < 42; i++) if (a[i]) c++;
	printf("%d", c);
}