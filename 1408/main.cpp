#include <cstdio>

using namespace std;

int main() {
	int h1, h2, m1, m2, s1, s2;
	scanf("%d:%d:%d\n%d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
	h2 = h2 + 23 - h1;
	m2 = m2 + 59 - m1;
	s2 = s2 + 60 - s1;
	m2 += s2 / 60;
	h2 += m2 / 60;
	printf("%02d:%02d:%02d", h2%24, m2%60, s2%60);
}
