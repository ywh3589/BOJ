#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	int N, t, m = 0, c = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &t);
		if (t == m) {
			m = (m + 1) % 3;
			c++;
		}
	}
	printf("%d", c);
}

