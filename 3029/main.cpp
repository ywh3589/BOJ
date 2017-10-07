#include<cstdio>

using namespace std;

int main() {
	int h1, h2, m1, m2, s1, s2;
	scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
	s2 -= s1;
	m2 -= m1;
	h2 -= h1;
	if (h2 == 0 && m2 == 0 && s2 == 0) {
		printf("24:00:00");
		return 0;
	}
	if (s2 < 0) {
		s2 += 60;
		m2--;
	}
	if (m2 < 0) {
		m2 += 60;
		h2--;
	}
	if (h2 < 0) h2 += 24;
	printf("%.2d:%.2d:%.2d", h2, m2, s2);
}