#include <cstdio> 

using namespace std;

int main() {
	int s = 0, i, j, c = 0;
	for (i = 10000; i >= 1; i /= 10) {
		scanf("%d", &j);
		s += j*i;
	}
	while (s) {
		c += (s % 10)*(s % 10);
		s /= 10;
	}
	printf("%d", c%10);
}