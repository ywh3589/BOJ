#include <cstdio>
#include <vector>

using namespace std;

vector<int> a;

int main() {
	int n, m, i;
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf("%d", &m);
		a.insert(a.end() - m, i);
	}
	for (i = 0; i < n; i++) printf("%d ", a[i]);
}