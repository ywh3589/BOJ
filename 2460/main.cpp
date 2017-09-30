#include <cstdio> 

using namespace std;

int main() {
	int max = 0, i, a, b, s = 0;
	for (i = 0; i < 10; i++) {
		scanf("%d %d", &a, &b);
		s += (b - a);
		if (max < s) max = s;
	}
	printf("%d", max);
}