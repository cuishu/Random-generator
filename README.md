# Random-generator
Used to random initialization memory or generate random strings.

**Generate string**

```c
char buff[size];
gen_rand_str(buff, size-1);
```

**Generate random memory**

```c
int n;
write_random_data(&n, sizeof(n));
```

**Generate random number**

Reference random.h

```c
int i = gen_random_int();
double d = gen_random_double();
...
```

