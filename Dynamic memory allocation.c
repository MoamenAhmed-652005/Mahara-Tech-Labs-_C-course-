// #include <stdio.h>

// #include <stdlib.h>

// int main()
// {

//     int n, SUM = 0;
//     printf("Enter the num element :\n");
//     scanf("%d", &n);
//     int *ptr;
//     ptr = (int *)malloc(n * sizeof(int));

//     if (NULL == ptr)
//     {

//         printf("    Faild!   ");
//         return 0;
//     }
//     else
//     {

//         printf("Enter The values :");
//         for (int i = 0; i < n; i++)
//         {

//             printf("Num %d : \n", i + 1);
//             scanf("%d", (ptr + i));
//             SUM += *(ptr + i);
//         }
//         printf("SUM = %d", SUM);

//         free(ptr);
//     }
// }

// ================== Using calloc() =============
// #include <stdio.h>

// #include <stdlib.h>

// int main()
// {

//     int n, SUM = 0;
//     printf("Enter the num element :\n");
//     scanf("%d", &n);
//     int *ptr;
//     ptr = (int *)calloc(n, sizeof(int));

//     if (NULL == ptr)
//     {

//         printf("    Faild!   ");
//         return 0;
//     }
//     else
//     {

//         printf("Enter The values :");
//         for (int i = 0; i < n; i++)
//         {

//             printf("Num %d : \n", i + 1);
//             scanf("%d", (ptr + i));
//             SUM += *(ptr + i);
//         }
//         printf("SUM = %d", SUM);

//         free(ptr);
//     }
// }

// ======================== Linked list on C ==============
#include <stdio.h>

#include <stdlib.h>

typedef struct node
{

    int data; // value

    struct node *next; // pointer to next node

} Node_conf;

int main()
{

    Node_conf *first = malloc(sizeof(Node_conf));
    Node_conf *second = malloc(sizeof(Node_conf));
    Node_conf *third = malloc(sizeof(Node_conf));

    first->data = 23; // First node
    first->next = second;

    second->data = 44;
    second->next = third;

    third->data = 334;
    third->next = NULL;

    Node_conf *ptr = first;
    while (ptr != NULL)
    {

        printf("%d\n", ptr->data);

        ptr = ptr->next;
    }
    printf("    End!    ");
}

// ============ Lab 1 ============
#include <stdio.h>

#include <stdlib.h>

typedef struct node
{

    int data; // value

    struct node *next; // pointer to next node

} Node_conf;

void add(int value, Node_conf *ptr);
void print(Node_conf *ptr, int n);

int flag = 0;

int main()
{

    int choice;
    while (1)
    {

        printf(
            "    1- add \n \
                 2- print \n\ 
                 3-Exit \n\     
            \n");
        printf("Your Choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            int n = 0, val, i;
            Node_conf *ptr;
            printf("Enter the num of element:");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("Num %d :", i + 1);
                scanf("%d", &val);
                add(val, (ptr + i));
            }

            break;
        case 2:

            print(ptr, n);
            break;
        case 3:
        {
            printf("    Thanks!   ");
            return 0;
        }

        default:
            printf("invaild operation \n");
            break;
        }
    }
}

void print(Node_conf *ptr, int n)
{

    printf("-----------------------------\n");
    if (flag == 0)
    {
        printf("    Empty Nodes!     \n");
    }
    else
    {
        for (int x = 0; x < n; x++)
        {

            printf("%d\n", (ptr + x)->data);
        }
        printf("    End!    \n");
        flag = 0;
    }
}

void add(int value, Node_conf *ptr)
{

    ptr->data = value;
    flag++;
}
