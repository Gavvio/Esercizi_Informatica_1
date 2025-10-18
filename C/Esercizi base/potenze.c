char max_pot10(unsigned int val)
{
	char ret = 0;
	if (val != 0) {
		while (val > 9) {
			val = val / 10;
			ret++;
		}
		return ret;
	}
	else {
		return -1;
	}
}