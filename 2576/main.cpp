#include <cstdio>

using namespace std;

int main() {
	int j, min = 1234567890, s = 0;
	while (~scanf("%d", &j)) {
		if (j % 2) {
			s += j;
			if (min > j) min = j;
		}
	}
	if(s > 0) printf("%d\n%d", s, min);
	else printf("-1");
}