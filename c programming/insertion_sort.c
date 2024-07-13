#include <stdio.h>
void printa(int *arr, int n);
int* insertionSort(int *arr, int n);

int main()
{
    int arr[5] = {1, 3, 2, 7, 3};
    int *sorted = insertionSort(arr, 5);
    printa(sorted, 5);
    return 0;
}

int* insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
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