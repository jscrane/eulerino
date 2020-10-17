#include <Arduino.h>
#include <math.h>
#include "primes5.h"
#include "euler.h"

long euler3() {

	long long n = 600851475143L;
	long p = -1;
	int lim = (int)sqrt((double)n);

	for (int i = 0; i < min(lim, MAX_PRIME); i++)
		if (is_prime(i) && (n % i) == 0)
			p = i;

	return p;
}
