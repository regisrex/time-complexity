#include <stdio.h>
int *bubbleSort(int *arr, int n);
void printa(int *arr, int n);
int main()
{
    int arr[5] = {1, 3, 2, 7, 3};
    bubbleSort(arr,5);
}

int *bubbleSort(int *arr, int n)
{

    for (int k = 0; k < n - 1; k++)
    {
        for (int i = k+1; i < n; i++)
        {
            if (arr[i]  < arr[k])
            {
                int temp = arr[k];
                arr[k] = arr[i];
                arr[i] = temp;
            }
        }
    }

    printa(arr,n);

    return arr;
}

void printa(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    };
    printf("\n");
}