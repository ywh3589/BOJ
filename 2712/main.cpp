#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int n;
	char s[5], a[4][5] = { "kg", "lb", "l", "g" };
	float m;
	scanf("%d", &n);
	while(n--) {
		scanf("%f %s", &m, s);
		if (!strcmp(s, a[0])) printf("%.4f lb\n", m*2.2046);
		else if(!strcmp(s, a[1])) printf("%.4f kg\n", m*0.4536);
		else if (!strcmp(s, a[2])) printf("%.4f g\n", m*0.2642);
		else printf("%.4f l\n", m*3.7854);
	}
}