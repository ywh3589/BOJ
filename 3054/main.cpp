#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	int l, i;
	char s[32];
	scanf("%s", s);
	l = strlen(s);
	for (i = 1; i <= l; i++) {
		if (i % 3 == 0) printf("..*.");
		else printf("..#.");
	}
	printf(".\n");
	for (i = 1; i <= l; i++) {
		if (i % 3 == 0) printf(".*.*");
		else printf(".#.#");
	}
	printf(".\n");
	for (i = 1; i <= l; i++) {
		if(i%3 == 0 || (i % 3 == 1 && i >= 4)) printf("*.%c.", s[i-1]);
		else printf("#.%c.", s[i-1]);
	}
	if(l%3 == 0) printf("*\n");
	else printf("#\n");
	for (i = 1; i <= l; i++) {
		if (i % 3 == 0) printf(".*.*");
		else printf(".#.#");
	}
	printf(".\n");
	for (i = 1; i <= l; i++) {
		if (i % 3 == 0) printf("..*.");
		else printf("..#.");
	}
}