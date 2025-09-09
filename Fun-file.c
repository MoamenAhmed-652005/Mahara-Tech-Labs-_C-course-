#include <stdio.h>

void Modify(int arr[], int size)
{
    printf("%d\n", sizeof(arr)); // Size of Pointer

    for (int i = 0; i < size; i++)
    {

        arr[i] *= 2;

        printf("%d", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    Modify(arr, 5);
}
