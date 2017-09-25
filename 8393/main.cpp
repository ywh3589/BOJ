#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int N, s = 0;
	scanf("%d", &N);
	while (N) {
		s += N--;
	}
	printf("%d", s);
}

