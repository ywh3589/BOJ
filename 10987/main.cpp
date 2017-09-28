#include <cstdio>

using namespace std;

int main() {
	char c;
	int a = 0;
	while (~scanf("%c", &c)) if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') a++;
	printf("%d", a);
}
