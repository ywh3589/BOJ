#include <cstdio>

using namespace std;

int main() {
	int s = 0, t[] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	char c;
	while (~scanf(" %c", &c)) s += t[(int)(c - 'A')];
	printf("%d", s);
}
