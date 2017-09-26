#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	while (a >= 30) a -= 30;
	if (12*a == b) printf("O");
	else printf("X");
}
