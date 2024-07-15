#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

#include <sys/time.h>

#pragma pack(1)
struct test_struct
{
    char a;             // 1
    int b;              // 4
    short c;            // 2
    int x;              // 4
    char *p;            // 8
};
#pragma pack()

#if 0
int main(int argc, char *argv[])
{
    int i;
    short j;
    int32_t y;

    uint32_t x;

    long k;
    long long h;

    bool b;

    char *addr;
    int *p;

    struct timeval         ts;
    
    struct test_struct test;

    time_t time1;

    // 打印变量大小
    printf("len int: %ld\n", sizeof(i));
    printf("len short: %ld\n", sizeof(j));
    printf("len y: %ld\n", sizeof(y));
    printf("len x: %ld\n", sizeof(x));
    printf("len long: %ld\n", sizeof(k));
    printf("len longlong : %ld\n", sizeof(h));
    printf("len bool: %ld\n", sizeof(b));
    printf("len char*: %ld\n", sizeof(addr));
    printf("len int*: %ld\n", sizeof(p));

    printf("len struct timeval: %ld\n", sizeof(ts));

    printf("len struct test_struct: %ld\n", sizeof(test));
    printf("len time_t: %ld\n", sizeof(time1));

    printf("address i: %x\n", &i);
    printf("address i: %p\n", &i);

#if __WORDSIZE == 64
#else
    2222222222
#endif
    return 0;
}

#endif

int main(int argc, char *argv[])
{
    time_t time_now;

    
    printf("sizeof int: %ld\n", sizeof(int));
    printf("sizeof size_t %ld\n", sizeof(size_t));

    printf("sizeof long int: %ld\n", sizeof(long int));
    printf("sizeof unsinged long int: %ld\n", sizeof(unsigned long int));  

    printf("sizeof intptr_t: %ld\n", sizeof(intptr_t));
    printf("sizeof uintptr_t: %ld\n", sizeof(uintptr_t));

    printf("sizeof time_now: %ld\n", sizeof(time_now));
    printf("sizeof struct: %ld\n", sizeof(struct test_struct));

    return 0;
}