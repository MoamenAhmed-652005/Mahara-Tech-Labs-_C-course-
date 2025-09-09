// =============== Lab 1 ========
// #include <stdio.h>
//  #include <string.h>

//     int main(void)
//     {

//         int x = 10,*ptr ;
//         printf("befor : %d \n",x);

//         ptr = &x;
//         *ptr = 20;

//         printf("after : %d",x);

//     }

// ======================= Lab 2 =====
// #include <stdio.h>
// #include <string.h>

// void PTR_Fn(int *x, int *y, int *ptr_sum, int *ptr_sub)
// {

//     *ptr_sum = *x + *y;
//     *ptr_sub = *x - *y;
// }

// int main(void)
// {
//     int X, Y, sum, sub;
//     printf("Enter 2 values\n");
//     scanf("%d %d", &X, &Y);

//     PTR_Fn(&X, &Y, &sum, &sub);
//     printf("The sum : %d\n", sum);
//     printf("The Sub : %d\n", sub);
// }

== == == == == == == == == == == == Lab 3 == == == == ==
#include <stdio.h>
#include <string.h>
    int sum_arr(int arr[], int size)
{

        int sum;

        for (int i = 0; i < size; i++)
        {
                arr++; // next index
                sum += (*arr);
        }
        return sum;
}

int main(void)
{

        int list[4] = {1, 1, 3, 4};
        printf("Sum : %d", sum_arr(list, 4));
}

/*   ====================================
-- Note :

        We pass the array to fn -> (passed as pointer)
        So, if we need to know size of array we must calc it outside Fn .
        -------------------------------------------------------------------
*/
// #include <stdio.h>

// void Modify(int arr[], int size)
// {
//     printf("%d\n", sizeof(arr)); //  *Size of Pointer

//     for (int i = 0; i < size; i++)
//     {

//         arr[i] *= 2;

//         printf("%d\t", arr[i]);
//     }
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     Modify(arr, 5);
// }

// ========================= Lab 4 ====
// #include <stdio.h>

// float Scalar_multi(int arr1[], int arr2[], int size)
// {

//     float sum = 0, mul = 0;
//     for (int i = 0; i < size; i++)
//     {
//         mul = arr1[i] * arr2[i];
//         sum += mul;
//     }
//     return sum;
// }

// int main()
// {

//     int l1[5] = {1, 2, 3, 4, 5};
//     int l2[5] = {4, 4, 2, 6, 5};

//     printf("The result : %.2f", Scalar_multi(l1, l2, 5));
// }
