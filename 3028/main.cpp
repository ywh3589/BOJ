#include<cstdio>

using namespace std;

int main() {
	char s;
	int p = 0, c[3][3] = { {1, 0, 2}, {0, 2, 1}, {2, 1, 0} };
	while (~scanf("%c ", &s)) {
		p = c[p][(int)(s - 'A')];
	}
	printf("%d", p + 1);
}