#include <stdio.h>

#include "random.h"

#define	SIZE	100

int main()
{
	char str[SIZE];
	printf("string %s\n", gen_rand_str(str, SIZE+1));
	printf("char %d\n", gen_rand_char());
	printf("short %d\n", gen_rand_short());
	printf("int %d\n", gen_rand_int());
	printf("long %ld\n", gen_rand_long());
	printf("long long %lld\n", gen_rand_long_long());
	printf("float %f\n", gen_rand_float());
	printf("double %lf\n", gen_rand_double());
	return 0;
}

