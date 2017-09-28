#include <cstdio>

using namespace std;

int main() {
	int i, f[50] = { 0, 1 };
	for (i = 2; i < 50; i++) f[i] = f[i - 1] + f[i - 2];
	scanf("%d", &i);
	printf("%d", f[i]);
}
