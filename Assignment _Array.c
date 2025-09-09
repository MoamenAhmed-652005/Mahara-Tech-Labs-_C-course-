// ================ Lab 6=======
//     #include <stdio.h>
//     #include <stdbool.h>

//     int main(void)
//     {
//         int list[10];
//         for(int i =0 ; i<10 ; i++){
//             printf("Enter Num %d :",i+1);
//             scanf("%d",&list[i]);
//         }

//         printf("    Reversed Order  ");

//         for(int x =9;x >=0 ; x--){
//             printf("%d \n",list[x]);
//         }

//     }

// =================================
//     #include <stdio.h>
//     #include <stdbool.h>

//     int main(void)
//     {
//         int list[10];
//         int sum = 0 ;

//         for(int i =0 ; i<10 ; i++){
//             printf("Enter Num %d :",i+1);
//             scanf("%d",&list[i]);
//              sum += list[i] ;
//         }

//         printf("The Sum = %d\n",sum);
//         printf("The average = %f",(float)sum/10);

//     }

// ================================= Buble Sorting ===
//     #include <stdio.h>

//     int main(void)
//     {
//         int list[10],temp = 0;

//         for(int i =0 ; i<10 ; i++){
//             printf("Enter Num %d :",i+1);
//             scanf("%d",&list[i]);
//         }

//         for (int i=0 ;i<9;i++){  // num of iteration n = (size-1)
//             for (int j =0 ;j < 9-i ;j++){  // n-i-1
//                 if(list[j] > list[j+1]){
//                     temp = list[j] ;
//                     list[j]=list[j+1];
//                     list[j+1] = temp ;

//                 }
//             }

//         }

//     printf("    After Sorting    \n"); // Ascending

//         for(int x = 0;x<10;x++){

//             printf("list[%d] = %d\n",x,list[x]);
//         }

//     }
// ================================= Binary Search ====
#include <stdio.h>

int main(void)
{

    int list[10], temp = 0, start = 0, end = 0, mid, size;
    printf("***************************************\n");
    while (1)
    {
        printf("Enter the Total num : ");
        scanf("%d", &size);
        end = size - 1;

        for (int i = 0; i < size; i++)
        {
            printf("Enter Num %d :", i + 1);
            scanf("%d", &list[i]);
        }

        for (int i = 0; i < size - 1; i++)
        { // num of iteration n = (size-1)
            for (int j = 0; j < size - i - 1; j++)
            { // n-i-1
                if (list[j] > list[j + 1])
                {
                    temp = list[j];
                    list[j] = list[j + 1];
                    list[j + 1] = temp;
                }
            }
        }

        int target;
        printf("Enter Num you search : ");
        scanf("%d", &target);

        while (start <= end)
        {

            mid = (start + end) / 2;

            if (list[mid] == target)
            {
                printf("the value found in index :%d \n", mid); // after sorting
                break;
            }
            else if (list[mid] < target)
            {
                start = mid + 1;
            }
            else if (list[mid] > target)
            {
                end = mid - 1;
            }
        }

        if (start > end)
        {

            printf("Num not found \n");
        }
    }
}

// ---------------------------------------------- Assignment ----------------
//  =========================
// #include <stdio.h>

// int main(void)
// {
//     int Students_arr[3][10];
//     int ctr = 0, ctr1 = 0;

//     printf("Enter the Students` Degree \n");
//     for (int i = 0; i < 3; i++)
//     {

//         for (int k = 0; k < 3; k++)
//         {
//             printf("Class %d,Student %d : \n", i + 1, k + 1);
//             scanf("%d", &Students_arr[i][k]);
//         }
//     }

//     int max = Students_arr[0][0];
//     int min = Students_arr[0][0];

//     for (int i = 0; i < 3; i++)
//     {

//         for (int k = 0; k < 3; k++)
//         {

//             if (Students_arr[i][k] >= 50)
//             {

//                 ctr++;
//             }

//             if (Students_arr[i][k] < 50)
//             {

//                 ctr1++;
//             }

//             if (max < Students_arr[i][k])
//             {
//                 max = Students_arr[i][k];
//             }

//             if (min > Students_arr[i][k])
//             {

//                 min = Students_arr[i][k];
//             }
//         }
//     }

//     printf("The Passed Student_NUM : %d \n", ctr);
//     printf("The Faild Student_NUM : %d \n", ctr1);
//     printf("The average grade : %f %% \n", ((float)ctr / 9) * 100);
//     printf("    ===============     \n");
//     printf("The max degree : %d \n", max);
//     printf("The min degree : %d", min);
// }
