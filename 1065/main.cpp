#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int N, i, c = 0;
	scanf("%d", &N);
	if (N == 1000) N--;
	for (i = 1; i <= N; i++) {
		if (i < 100) c++;
		else if ((i % 10) - (i / 10) % 10 == (i / 10) % 10 - (i / 100) % 10) c++;
	}
	printf("%d", c);
}
