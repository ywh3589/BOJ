#include <cstdio> 

using namespace std;

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if((b += c) >= 60) a += b/60;
	printf("%d %d", a % 24, b % 60);
}