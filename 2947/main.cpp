#include <cstdio>

using namespace std;

int a[5];

bool chk() {
	for (int i = 0; i < 5; i++) if (a[i] != i + 1) return false;
	return true;
}

int main() {
	for (int i = 0; i < 5; i++) scanf("%d", a + i);
	while (!chk()) {
		for (int i = 0; i < 4; i++) {
			if (a[i] > a[i + 1]) {
				int tp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = tp;
				for (int j = 0; j < 5; j++) printf("%d ", a[j]);
				printf("\n");
			}
		}
	}
}