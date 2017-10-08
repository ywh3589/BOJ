// mod operation

int gcd(int a, int b) {
	if (b) return gcd(b, a%b);
	return a;
}

// prime number

bool pn(int n) {
	if (n <= 1) return false;
	for (int i = 2; i*i <= n; i++) if (n%i == 0) return false;
	return true;
}

// reverse integer

int rn(int n) {
	int m = 0;
	while (n) {
		m = 10 * m + n % 10;
		n /= 10;
	}
	return m;
}