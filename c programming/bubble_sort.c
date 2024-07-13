#include <stdio.h>
int *bubbleSort(int *nums, int n);
void printa(int *arr, int n);

int main()
{
    int a[5] = {0, 3, 5, 2, 4};
    printa(a, 5);
    bubbleSort(a, 5);
    return 0;
}

void printa(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    };
    printf("\n");
}

int *bubbleSort(int *nums, int n)
{
    int len = n;
    int *sorted = nums;
    for (int i = 0; i < len - 1; i++)
    {
        int flag = 0;
        for (int i = 0; i < len - 1; i++)
        {
            if (flag == 1)
                continue;

            if (sorted[i] > sorted[i + 1])
            {
                printf("Swapping %d and %d\n", sorted[i], sorted[i + 1]);
                flag = 1;
                int temp = sorted[i];
                sorted[i] = sorted[i + 1];
                sorted[i + 1] = temp;
            }
        }
    }

    printa(sorted, n);

    return sorted;
}
