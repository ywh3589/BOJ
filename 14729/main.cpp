#include <cstdio>
#include <cstring>

using namespace std;

int a[1000001];

int main() {
	int N, i, j;
	float m;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%f", &m);
		a[(int)(1000 * m)]++;
	}
	for (i = 0, j = 0; i < 7;) {
		if (a[j] == 0) {
			j++;
			continue;
		}
		i++;
		printf("%.3f\n", (float)j / 1000);
		a[j]--;
	}
}

