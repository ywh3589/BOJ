#include <cstdio>

using namespace std;

int main() {
	int a[6], b[] = { 1, 1, 2, 2, 2, 8 };
	for (int i = 0; i < 6; i++) {
		scanf("%d", a + i);
		printf("%d ", b[i] - a[i]);
	}
}