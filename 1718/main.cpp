#include <cstdio>
#include <cstring>
#define MAX 30100

using namespace std;

int main() {
	char S[MAX], K[MAX];
	int i, p, q;
	scanf("%[^\n]", S);
	scanf("%s", K);
	p = strlen(S);
	q = strlen(K);
	for (i = 0; i < p; i++) {
		if (S[i] == ' ') continue;
		S[i] = (S[i] - K[i%q] + 25)%26 + 'a';
	}
	printf("%s", S);
}
