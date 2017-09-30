#include <cstdio> 

using namespace std;

int main() {
	int n, s, i, j, c = 0;
	scanf("%d", &n);
	for (i = 0, j = 0; i < n; i++) {
		scanf("%d", &s);
		if (s) c += ++j;
		else j = 0;
	}
	printf("%d", c);
}