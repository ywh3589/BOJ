#include<cstdio>

using namespace std;

int main() {
	char c;
	int n, i = 0;
	while (~scanf("%c ", &c)) {
		n = c - '0';
		if (!i) {
			if (n <= 1) printf("%d", n);
			else if(n <= 3) printf("1%d", n%2);
			else printf("1%d%d", (n % 4) / 2, n % 2);
		}
		else {
			printf("%d%d%d", n/4, (n % 4) / 2, n % 2);
		}
		i++;
	}
}