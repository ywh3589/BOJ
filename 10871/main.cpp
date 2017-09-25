#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int n, x, s;
	scanf("%d %d", &n, &x);
	while (n--) {
		scanf("%d", &s);
		if (s < x) printf("%d ", s);
	}
}
