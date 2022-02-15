// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (int i = 2; i <= sqrt(value); i++)
	{
		if (value % i == 0) {
			return false;
		}
		else {
			continue;
		}
	}
	if (value == 0 || value == 1) {
		return false;
	}
	if (value == 2) {
		return true;
	}
	return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 1) {
		return 2;
	}
	else if (n <= 0) {
		return false;
	}
	int k = 1;
	for (int i = 4; ;i++ ) {
		if (checkPrime(i)) {
			k = k + 1;
			if (k == n) {
				return i;
			}
		}
	}
}

uint64_t nextPrime(uint64_t value) {
  if (value <= 0) {
		return 1;
	}
	while (true) {
		if (checkPrime(++value)) {
			return value;
		}
		else {
			continue;
		}
	}
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
	for (int i = 0; i < hbound; i++)
	{
		if (checkPrime(i)) {
			sum += i;
		}
	}
	return sum;
}
