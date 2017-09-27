#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int i, j;
	bool chk[10001];
	for (i = 1; i <= 10000; i++) chk[i] = false;
	for (i = 1; i <= 10000; i++) {
		j = i + (i / 10000) + ((i / 1000) % 10) + ((i / 100) % 10) + ((i / 10) % 10) + (i % 10);
		if (j <= 10000) chk[j] = true;
	}
	for (i = 1; i <= 10000; i++) if (!chk[i]) printf("%d\n", i);
}
