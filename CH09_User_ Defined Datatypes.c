// // ============================ Lab 1 ========
// #include <stdio.h>
// typedef struct employees
// {
//     char name[20];
//     float salary;
//     short Bonus;
//     float deductions;
// } Employees;

// void main(void)
// {
//     float total = 0;
//     Employees E[3] = {
//         {"Moamen Ahmed", 5000, 20, 700}, {"Amr Ahmed", 6000, 15, 456}, {"Waleed", 10000, 33, 500}};

//     for (int i = 0; i < 3; i++)
//     {

//         total = (E[i].salary + E[i].Bonus) - E[i].deductions;
//     }
//     printf("The total you need : %0.2f ", total);
// }

// ================================ Lab 2 =====
// #include <stdio.h>

// typedef struct Student_Grade
// {

//     int ID;
//     int Math_G;
//     int Language_G;
//     int Physics_G;
//     int Chemistry_G;

// } Students;

// int main()
// {
//     int id, flag = 0;
//     Students students_array[5] = {

//         {10, 40, 30, 60, 70},
//         {20, 30, 45, 64, 75},
//         {30, 20, 50, 65, 59},
//         {40, 40, 34, 34, 70},
//         {50, 20, 49, 55, 89}

//     };

//     while (1)
//     {
//         /* code */

//         printf("Enter the Student ID :\n");
//         if (scanf("%d", &id) != 1)
//         {
//             printf("ID incorrect\n");
//             int buffer_clear; // getchar() -> بتمسح الحرف وتخزنه في متغير تاني
//             while ((buffer_clear = getchar()) != '\n' && buffer_clear != EOF)
//                 ;     // EOF the end of input you add
//             continue; // fot continue program
//         }
//         else
//         {
//             for (int i = 0; i < 5; i++)
//             {

//                 if (id == students_array[i].ID)
//                 {
//                     printf("The Math degree :%d\n", students_array[i].Math_G);
//                     printf("The Language degree :%d\n", students_array[i].Language_G);
//                     printf("The Physics degree :%d\n", students_array[i].Physics_G);
//                     printf("The Chemistry degree :%d\n", students_array[i].Chemistry_G);
//                     flag++;
//                 }
//             }
//             if (flag == 0)
//             {
//                 printf("The ID is invaild\n");
//             }
//             flag = 0;
//         }
//     }
// }

// =================================== Lab 3 ===========

// #include <stdio.h>
// #pragma pack(1) // Packing
// typedef struct Student_Grade
// {

//     char ID;
//     short Math_G;
//     short Language_G;

// } Students;

// int main()
// {

//     printf("SIZE : %d", sizeof(Students));
// }

// ===================== Lab 4 =====

// #include <stdio.h>

// typedef union Test
// {
//     struct
//     {
//         /* data */
//         char B0 : 1;
//     } Bit;

//     char Byte;

// } __register;

// int main()
// {

//     __register V;
//     V.Byte = 44;
//     V.Bit.B0 = 0;
//     printf("%d", V.Byte);
// }

// =========================