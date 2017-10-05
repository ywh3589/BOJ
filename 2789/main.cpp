#include <cstdio>

using namespace std;

int main() {
	char c;
	while (~scanf("%c ", &c)) {
		if (c <= 'E' || c == 'G' || c == 'I' || c == 'M' || c == 'R') continue;
		printf("%c", c);
	}
}