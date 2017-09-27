#include <cstdio>
#include <vector>

using namespace std;

vector<int> v;

int main() {
	int a[5], i, j, c;
	for (i = 0; i < 5; i++) scanf("%d", &a[i]);
	for (i = 1; i <= 1000000; i++) {
		c = 0;
		for (j = 0; j < 5; j++) {
			if (i%a[j] == 0) c++;
		}
		if (c >= 3) {
			printf("%d", i);
			break;
		}
	}
}
