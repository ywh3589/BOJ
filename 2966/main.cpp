#include <cstdio>

using namespace std;

int main() {
	int n, i, a, b, c;
	a = b = c = 0;
	char s[128];
	scanf("%d %s", &n, s);
	for (i = 0; i < n; i++) {
		if (s[i] == 'A') {
			if (i % 3 == 0) a++;
			if (i % 4 == 1) b++;
			if (i % 6 == 2 || i % 6 == 3) c++;
		}
		else if (s[i] == 'B') {
			if (i % 3 == 1) a++;
			if (i % 4 == 0 || i%4 == 2) b++;
			if (i % 6 == 4 || i % 6 == 5) c++;
		}
		else {
			if (i % 3 == 2) a++;
			if (i % 4 == 3) b++;
			if (i % 6 == 0 || i % 6 == 1) c++;
		}
	}
	if (a > b) {
		if (a > c) printf("%d\nAdrian", a);
		else if(a == c) printf("%d\nAdrian Goran", a);
		else printf("%d\nGoran", c);
	}
	else if (a == b) {
		if (a > c) printf("%d\nAdrian Bruno", a);
		else if (a == c) printf("%d\nAdrian Bruno Goran", a);
		else printf("%d\nGoran", c);
	}
	else {
		if (b > c) printf("%d\nBruno", b);
		else if (b == c) printf("%d\nBruno Goran", b);
		else printf("%d\nGoran", c);
	}

}