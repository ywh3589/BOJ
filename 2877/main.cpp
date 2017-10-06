#include <cstdio>

using namespace std;

int main() {
	int n, i, j;
	char s[50];
	scanf("%d", &n);
	for (i = 0, j = 2; n > 0; j *= 2) {
		if ((n-1)%j < j / 2) s[i] = '4';
		else s[i] = '7';
		n -= j;
		i++;
	}
	for (j = i - 1; j >= 0; j--) printf("%c", s[j]);
}