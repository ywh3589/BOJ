#include <cstdio> 

using namespace std;

int main() {
	int t, h, w, i, j, c;
	char m[512][512];
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &h, &w);
		for (i = 0; i < h; i++) scanf("%s", m[i]);
		c = 0;
		for (i = 0; i < h; i++) {
			for (j = 0; j < w; j++) {
				if (m[i][j] == '>' && m[i][j + 1] == 'o' && m[i][j + 2] == '<') c++;
				if (m[i][j] == 'v' && m[i+1][j] == 'o' && m[i+2][j] == '^') c++;
			}
		}
		printf("%d\n", c);
	}
}