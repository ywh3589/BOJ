#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int a[26];
	char c;
	fill(a, a + 26, 0);
	while (~scanf(" %c", &c)) a[(int)(c - 'a')]++;
	for (int i = 0; i < 26; i++) printf("%d ", a[i]);
}
