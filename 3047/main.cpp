#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int a[3], i;
	char s[8];
	for (i = 0; i < 3; i++) scanf("%d", a + i);
	sort(a, a + 3);
	scanf("%s", s);
	for (i = 0; i < 3; i++) printf("%d ", a[(int)s[i] - 'A']);
}