#include<cstdio>
#include<cstring>

using namespace std;

int a[20001], l, r, n, i;
char s[16];

int main() {
	l = 10000;
	r = 9999;
	scanf("%d", &n);
	while (n--) {
		scanf("%s", s);
		if (!strcmp(s, "pop_front")) printf("%d\n", (l > r) ? -1 : a[l++]);
		else if(!strcmp(s, "pop_back")) printf("%d\n", (l > r) ? -1 : a[r--]);
		else if (!strcmp(s, "size")) printf("%d\n", r-l+1);
		else if (!strcmp(s, "empty")) printf("%d\n", (l > r));
		else if (!strcmp(s, "front")) printf("%d\n", (l > r) ? -1 : a[l]);
		else if (!strcmp(s, "back")) printf("%d\n", (l > r) ? -1 : a[r]);
		else {
			scanf("%d", &i);
			if (!strcmp(s, "push_front")) a[--l] = i;
			else a[++r] = i;
		}
	}
}