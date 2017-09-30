#include <cstdio> 

using namespace std;

int main() {
	long long n, i, s = 0;
	scanf("%lld", &n);
	for (i = 1; i < n; i++) s += (n + 1)*i;
	printf("%lld", s);
}
