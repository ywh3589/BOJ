#include <cstdio> 

using namespace std;

int main() {
	int n, i, j, h[4][4], max[4], p = -1;
	for (i = 1; i <= 3; i++) {
		for (j = 0; j <= 3; j++) h[i][j] = 0;
	}
	scanf("%d", &n);
	while(n--){
		for (i = 1; i <= 3; i++) {
			scanf("%d", &j);
			h[i][j]++;
			h[i][0] += j;
			if (max[0] < h[i][0]) max[0] = h[i][0];
			if (max[j] < h[i][j]) max[j] = h[i][j];
		}
	}
	for (i = 1, j = 0; i <= 3; i++) {
		if (max[0] == h[i][0]) {
			j++;
			p = i;
		}
	}
	if (j == 1) {
		printf("%d %d", p, max[0]);
		return 0;
	}
	for (i = 1, j = 0; i <= 3; i++) {
		if (max[0] == h[i][0] && max[3] == h[i][3]) {
			j++;
			p = i;
		}
	}
	if (j == 1) {
		printf("%d %d", p, max[0]);
		return 0;
	}
	for (i = 1, j = 0; i <= 3; i++) {
		if (max[0] == h[i][0] && max[3] == h[i][3] && max[2] == h[i][2]) {
			j++;
			p = i;
		}
	}
	if (j == 1) {
		printf("%d %d", p, max[0]);
		return 0;
	}
	printf("0 %d", max[0]);
}
