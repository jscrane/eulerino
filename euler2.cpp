long euler2() {
	long s = 0;
	for (int a = 1, b = 1; b <= 4000000; ) {
		if (!(b & 1))
			s += b;
		int t = a + b;
		a = b;
		b = t;
	}
	return s;
}

