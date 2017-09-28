#include <cstdio>
#include <algorithm>

using namespace std;

int main() {
	int n, a;
	scanf("%d", &n);
	while (n--) {
		scanf("%d", &a);
		printf("%d", (int)sqrt(a));
	}
}
