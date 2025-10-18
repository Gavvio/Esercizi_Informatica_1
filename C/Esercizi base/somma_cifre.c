unsigned int somma_cifre(unsigned int x) {
	int ret = 0;
	for (int i = x; i > 0; i = i / 10) {
		ret += i % 10;
	}
	return ret;
}