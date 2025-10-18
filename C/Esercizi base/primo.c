int isprime(unsigned int val) {
	if (val == 0 || val == 1) {
		return 0;
	}
	for (int i = val - 1; i > 1; i--) {
		if (val % i == 0) {
			return 0;
		}
	}
	return 1;
}