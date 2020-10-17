#include <math.h>

long euler9() {

	for (int b = 4; b < 997; b++) {
		long bb = b*b;
		for (int a = 3; a < b; a++) {
			long aa = a*a;
			long cc = bb + aa;
			long c = int(sqrt(cc));
			if (cc == c*c && a + b + c == 1000)
				return a*b*c;
		}
	}

	return 0;
}
