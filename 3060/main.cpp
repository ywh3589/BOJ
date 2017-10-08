#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;

int main() {
	int t, r, s, res, n[6], tp[6], i;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &r);
		s = 0;
		for (i = 0; i < 6; i++) {
			scanf("%d", n + i);
			s += n[i];
		}
		res = 1;
		while (r >= s) {
			for (i = 0; i < 6; i++) tp[i] = n[i];
			n[0] = tp[0] + tp[1] + tp[3] + tp[5];
			n[1] = tp[0] + tp[1] + tp[2] + tp[4];
			n[2] = tp[1] + tp[2] + tp[3] + tp[5];
			n[3] = tp[0] + tp[2] + tp[3] + tp[4];
			n[4] = tp[1] + tp[3] + tp[4] + tp[5];
			n[5] = tp[0] + tp[2] + tp[4] + tp[5];
			s = 0;
			for (i = 0; i < 6; i++) s += n[i];
			res++;
		}
		printf("%d\n", res);
	}
}