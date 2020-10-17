long euler6() {
	long s = 0, ss = 0;
	for (int i = 1; i <= 100; i++) {
		ss += i*i;
		s += i;
	}
	return s*s - ss;
}

