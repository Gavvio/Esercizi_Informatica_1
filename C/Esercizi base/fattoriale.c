unsigned int fattoriale(unsigned char val) {
	unsigned int ret = 1;
	while (val>1) {
		ret *= val;
		val--;
	}
	return ret;
}