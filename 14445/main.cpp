#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	long long N;
	scanf("%lld", &N);
	if (N == 1) printf("0");
	else if (N%2) printf("%lld", N/2 + 1);
	else printf("%lld", N / 2);
}

