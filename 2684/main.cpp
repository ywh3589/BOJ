#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, i, a[8];
	char s[50];
	scanf("%d", &n);
	while(n--) {
		scanf("%s", s);
		fill(a, a + 8, 0);
		for (i = 0; i < 38; i++) {
			if (s[i] == 'T') {
				if(s[i+1] == 'T') a[s[i+2] == 'T' ? 0 : 1]++;
				else a[s[i + 2] == 'T' ? 2 : 3]++;
			}
			else {
				if (s[i + 1] == 'T') a[s[i + 2] == 'T' ? 4 : 5]++;
				else a[s[i + 2] == 'T' ? 6 : 7]++;
			}
		}
		for (i = 0; i < 8; i++) printf("%d ", a[i]);
		printf("\n");
	}
}