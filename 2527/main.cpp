#include <cstdio> 

using namespace std;

int main() {
	int i, j, a[8];
	char r;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 8; j++) scanf("%d", &a[j]);
		if (a[0] > a[6]) r = 'd';
		else if (a[2] < a[4]) r = 'd';
		else if (a[0] == a[6]) {
			if (a[1] > a[7]) r = 'd';
			else if (a[3] < a[5]) r = 'd';
			else if (a[1] == a[7]) r = 'c';
			else if (a[3] == a[5]) r = 'c';
			else r = 'b';
		}
		else if (a[2] == a[4]) {
			if (a[1] > a[7]) r = 'd';
			else if (a[3] < a[5]) r = 'd';
			else if (a[1] == a[7]) r = 'c';
			else if (a[3] == a[5]) r = 'c';
			else r = 'b';
		}
		else {
			if (a[1] > a[7]) r = 'd';
			else if (a[3] < a[5]) r = 'd';
			else if (a[1] == a[7]) r = 'b';
			else if (a[3] == a[5]) r = 'b';
			else r = 'a';
		}
		printf("%c\n", r);
	}
	
}