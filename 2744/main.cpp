#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char s[128];
	scanf("%s", s);
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] >= 'a') printf("%c", s[i] - 32);
		else printf("%c", s[i] + 32);
	}
}