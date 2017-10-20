#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	char s[16], c[10][16] = { "black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white" };
	long long r = 0, i, j;
	scanf("%s", s);
	for (i = 0; i < 10; i++) {
		if (!strcmp(s, c[i])) {
			r += i*10;
			break;
		}
	}
	scanf("%s", s);
	for (i = 0; i < 10; i++) {
		if (!strcmp(s, c[i])) {
			r += i;
			break;
		}
	}
	scanf("%s", s);
	for (i = 0, j = 1; i < 10; i++, j *= 10) {
		if (!strcmp(s, c[i])) {
			r *= j;
		}
	}
	printf("%lld", r);
}