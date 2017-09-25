#include <cstdio>
#include <cstring>

using namespace std;

char N[20];

int main() {
	int n, i, s, c;
	scanf("%d\n", &n);
	while (n--) {
		fgets(N, 20, stdin);
		s = 0;
		for (i = 15; i >= 0; i--) {
			c = (int)(N[i] - '0');
			if(i%2 == 0) {
				c *= 2;
				if (c >= 10) c = c / 10 + c % 10;
			}
			s += c;
		}
		if (s % 10) printf("F\n");
		else printf("T\n");
	}
}

