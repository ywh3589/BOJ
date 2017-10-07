#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	int i, a[9], s;
	for (i = 0; i < 9; i++) scanf("%d", a + i);
	sort(a, a + 9);
	do {
		s = 0;
		for (i = 0; i < 7; i++) s += a[i];
		if (s != 100) continue;
		sort(a, a + 7);
		for (i = 0; i < 7; i++) printf("%d\n", a[i]);
		break;
	} while (next_permutation(a, a + 9));
}