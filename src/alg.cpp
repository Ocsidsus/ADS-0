// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
	int min = 0;

	if (a > b) {
		min = b;
	}
	else {
		min = a;
	}

	int result = 0;

	for (int i = min; i > 0; i--) {
		if ((a % i == 0) && (b % i == 0)) {
			result = i;
			break;
		}
	}

	return result;
}
