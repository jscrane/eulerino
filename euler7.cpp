#include <Arduino.h>
#include "primes6.h"

long euler7() {

	int n = 0;
	for (int i = 2; i < MAX_PRIME; i++) {
		if (is_prime(i)) {
			n++;
			if (n == 10001)
				return i;
		}
	}
	return -1;
}
