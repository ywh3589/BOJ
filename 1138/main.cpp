#include <cstdio>
#include <vector>

using namespace std;

vector<int> v;

int main() {
	int n, i, a[10];
	scanf("%d", &n);
	for (i = 0; i < n; i++) scanf("%d", &a[i]);
	for (i = n - 1; i >= 0; i--) v.insert(v.begin() + a[i], i + 1);
	for (int i : v) printf("%d ", i);
}
