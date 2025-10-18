int primo(unsigned int val) {
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

unsigned int prossimo_primo(unsigned int x) {
	int mom = x+1;
	while (1) {
		if (primo(mom)) {
			return mom;
		}
		else {
			mom++;
		}
	}
}