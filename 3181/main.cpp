#include<cstdio>
#include<cstring>

using namespace std;

int main() {
	char s[128], L[][8] = {"i", "pa", "te", "ni", "niti", "a", "ali", "nego", "no", "ili" };
	int f, k = 0;
	while (~scanf("%s ", s)) {
		f = 0;
		for (int i = 0; i < 10 && k; i++) {
			if (!strcmp(s, L[i])) {
				f = 1;
				break;
			}
		}
		if(!f) printf("%c", s[0] - 32);
		k++;
	}
}