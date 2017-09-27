#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	char *p, str[127];
	int a[26], c, i;
	scanf("%s", str);
	fill(a, a + 26, -1);
	p = str;
	for (i = 0; *p > 0; i++) {
		c = (int)(*p++ -'a');
		if (a[c] == -1) a[c] = i;
	}
	for (i = 0; i < 26; i++) printf("%d ", a[i]);
}
