#include <cstdio> 

using namespace std;

int main() {
	int k, max = 0, p = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &k);
		if (k > max) {
			max = k;
			p = i + 1;
		}
	}
	printf("%d\n%d", max, p);
}