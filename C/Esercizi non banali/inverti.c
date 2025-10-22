extern unsigned int inverti(unsigned int i) {
	unsigned int mom = 0;
	while (i > 0) {
		mom *= 10;
		mom += i % 10;
		i /= 10;
	}
	return mom;
}
/*
int main(void) {
	unsigned int res1 = inverti(123);
	return 1;
}
*/