#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int N, a, b, sum = 0;
	scanf("%d", &N);
	while (N--) {
		scanf("%d %d", &a, &b);
		sum += a*b;
	}
	printf("%d", sum);
}