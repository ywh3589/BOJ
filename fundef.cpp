// mod 연산

int gcd(int a, int b) {
	if (b) return gcd(b, a%b);
	return a;
}

// 소수

bool pn(int n) {
	if (n <= 1) return false;
	for (int i = 2; i*i <= n; i++) if (n%i == 0) return false;
	return true;
}