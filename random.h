#ifndef	RANDOM_H
#define	RANDOM_H

#include <stdio.h>
#include <stdlib.h>

static inline char* gen_srand_str(char* str, int n, unsigned int seed)
{
	if (n < 1) return str;
	const char* s = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890";
	srand(seed);
	for (int i=0; i < n; i++) {
		str[i] = s[rand()%62];
	}
	str[n] = '\0';
	return str;
}

static inline void write_random_data(void* ptr, size_t size)
{
	FILE* file = fopen("/dev/urandom", "rb");
	fread(ptr, size, 1, file);
	fclose(file);
}

static inline int gen_rand_int() { int n; write_random_data(&n, sizeof(n)); return n; }
static inline char gen_rand_char() { char n; write_random_data(&n, sizeof(n)); return n; }
static inline short gen_rand_short() { short n; write_random_data(&n, sizeof(n)); return n; }
static inline long gen_rand_long() { long n; write_random_data(&n, sizeof(n)); return n; }
static inline long long gen_rand_long_long() { long long n; write_random_data(&n, sizeof(n)); return n; }
static inline float gen_rand_float() { float n; write_random_data(&n, sizeof(n)); return n; }
static inline double gen_rand_double() { double n; write_random_data(&n, sizeof(n)); return n; }
static inline char* gen_rand_str(char* str, int n) { return gen_srand_str(str, n, (unsigned int)gen_rand_int()); }

#endif
