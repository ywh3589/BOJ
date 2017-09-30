#include <cstdio> 

using namespace std;

int main() {
	int i, j, k, max;
	char s[10];
	for (i = 0; i < 3; i++) {
		scanf("%s", s);
		max = 1;
		for (j = 0, k = 1; j < 7; j++) {
			if (s[j] == s[j + 1]) k++;
			else {
				if (max < k) max = k;
				k = 1;
			}
		}
		if (max < k) max = k;
		printf("%d\n", max);
	}
}