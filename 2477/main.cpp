#include <cstdio> 

using namespace std;

int main() {
	int k, n, l, i, a[6];
	scanf("%d", &k);
	for (i = 0; i < 6; i++) {
		scanf("%d %d", &n, &l);
		a[i] = l;
	}
	for (i = 0; i < 6; i++) {
		if (a[(i + 3) % 6] == a[(i + 5) % 6] + a[(i + 1) % 6] &&
			a[i%6] + a[(i+4)%6] == a[(i+2)%6]) {
			printf("%d", k*(a[(i+2)%6]*a[(i+3)%6] - a[i]*a[(i+5)%6]));
			break;
		}
	}
}