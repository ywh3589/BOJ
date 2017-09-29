#include <cstdio>

using namespace std;

int main() {
	char c;
	while (~scanf(" %c", &c)) printf("%c", (c < 'D') ? c + 23 : c - 3);
}
