#include <cstdio>

using namespace std;

int main() {
	char c;
	while (~scanf(" %c", &c)) if ('A' <= c && c <= 'Z') printf("%c", c);
}
