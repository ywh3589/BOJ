#include <cstdio>

using namespace std;

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	printf("%d", (b >= c) ? -1 : (a / (c - b)) + 1);
}
