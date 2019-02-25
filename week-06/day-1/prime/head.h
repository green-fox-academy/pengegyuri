//
// Created by gyuri on 2019.02.25..
//

#ifndef PRIME_HEAD_H
#define PRIME_HEAD_H
int isPrime(int num)
{
	int result = 1;
	for (int i = 2; i < num; ++i) {
		if (num % i == 0) {
			result = 0;
			break;
		}
	}
	return result;
}
#endif //PRIME_HEAD_H
