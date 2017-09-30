#include <cstdio> 

using namespace std;

int main() {
	int a, b, i, p[10], q[10];
	a = b = 0;
	for (i = 0; i < 10; i++) scanf("%d", &p[i]);
	for (i = 0; i < 10; i++) scanf("%d", &q[i]);
	for (i = 0; i < 10; i++) {
		if (p[i] > q[i]) a += 3;
		else if (p[i] < q[i]) b += 3;
		else {
			a++;
			b++;
		}
	}
	printf("%d %d\n", a, b);
	if (a > b) printf("A");
	else if (a < b) printf("B");
	else {
		for (i = 9; i >= 0; i--) {
			if (p[i] == q[i]) continue;
			if (p[i] > q[i]) printf("A");
			else if (p[i] < q[i]) printf("B");
			return 0;
		}
		printf("D");
	}
}