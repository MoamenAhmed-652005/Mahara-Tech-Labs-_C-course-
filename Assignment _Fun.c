// ==================== lab 5 ====

// #include <stdio.h>
// #include <stdbool.h>

// int Max_Num();
// float x =0 ;
// int main(void)
// {
//         int c,x ;
//         printf("enter the two numbers : \n");
//         bool test = scanf("%d %d",&c,&x) ;
//         if((test != 1) ){        // to test incorrect input
//         printf("invaild input ");  }
//         else {
//              printf("the Max : %d",Max_Num(c,x));
//         }

//     	return 0 ;
//     }

// int Max_Num(int c,int x ) {

//     int max = c ;
//     if(max < x ){

//         max = x ;
//     }
//     return max ;
// }

// =================================================
// #include <stdio.h>
// #include <stdbool.h>

// void Swap ();
// int X,Y =0 ;
// int main(void)
// {

//     printf("enter the first num  : ");
//     scanf("%d",&X);

//     printf("enter the second num  : ");
//     scanf("%d",&Y);
//     Swap();     // swap by value

//     printf(" the first num  : %d",X);
//     printf(" the second num  : %d",Y);

//     	return 0 ;
// }
// void Swap (){

//     int temp ;
//     temp = X;
//     X = Y ;
//     Y = temp ;
// }
// ==================================
// #include <stdio.h>
// #include <stdbool.h>

// int fact ();
// int main(void)
// {
//     int f = 0 ;
//     printf("Enter Factorial Num :");
//     scanf("%d",&f);
//     printf("The Fact = %d",fact(f));

//     	return 0 ;
// }

// int fact (int n){

//     if (n == 0)
//         return 0 ;
//     if(n == 1)
//         return 1;
//     else{
//         return n*fact(n-1);

//     }

// }
// =====================================
// ----------------------------------------Assignment ch05

#include <stdio.h>
#include <stdbool.h>

void sub(void);
void divide(void);
void OR(void);
void NOT(void);
void increment(void);

int main(void)
{

    int choice = 0;
    while (1)
    {
        printf("\t\t\t1-OR\n\
                2-division\n \
                3-sub\n \
                4-NOT\n \
                5-increment\n \
                0- Exit\
               ");

        printf("please! ,Enter the operation \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            OR();
            break;
        case 2:
            divide();
            break;
        case 3:
            sub();
            break;
        case 4:
            NOT();
            break;
        case 5:
            increment();
            break;

        default:
            printf("operation invaild !\n");
        }
    }
}

void sub(void)
{
    int x, y;
    printf("Enter the 1st num :");
    scanf("%d", &x);

    printf("Enter the 2nd num :");
    scanf("%d", &y);

    printf(" The result =  %d\n", x - y);
}
void divide(void)
{
    int x, y;
    printf("    1st / 2nd   \n");
    printf("Enter the 1st num :");
    scanf("%d", &x);

    printf("Enter the 2nd num :");
    scanf("%d", &y);

    if (y == 0)
        printf("incorect operation! ,Try again \n");
    else
        printf(" The result =  %d\n", ((float)x / y));
}
void OR(void)
{
    int x, y;
    printf("    1st | 2nd   \n");

    printf("Enter the 1st num :");
    scanf("%d", &x);

    printf("Enter the 2nd num :");
    scanf("%d", &y);
    printf(" The result =  %d\n", (x | y));
}
void NOT(void)
{
    int x;
    printf("    !NUM   \n");
    printf("Enter the Num :");
    scanf("%d", &x);

    printf(" The result =  %d\n", ~x);
}
void increment(void)
{
    int x;
    printf("    ++NUM   \n");

    printf("Enter the Num :");
    scanf("%d", &x);

    printf(" The result =  %d\n", (++x));
}
