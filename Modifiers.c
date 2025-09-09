// * ========================= Lab 1 ========
// #include <stdio.h>
// #include <stdbool.h>

// void READ_BIT(int n)
// {

//     for (int i = 0; i < sizeof(n) * 8; i++)
//     {

//         int bit = ((n >> i) & 1);
//         printf("%d", bit);
//     }
//     printf("\n");
// }

// int main()
// {

//     unsigned int y = +0;
//     READ_BIT(y);
//     printf("%d", y); // * 2`s Complement
// }

// *========================= Lab 2 ======
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;

typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long s64;

typedef float float32;
typedef double double64;

#include <stdio.h>

int main()
{
    int const u = 1;
    printf("the size :%d \n", sizeof(u16));
    printf("the size :%d\n ", sizeof(u64));
    printf("the size :%d\n ", sizeof(s64));
}
