#include <stdio.h>

enum Gender
{
    MALE = 1,
    FEMALE
};

int main()
{
    const float PI = 3.14075703473;
    int nums[5] = {10, 20, 30, 40, 60};
    nums[0] = 10;
    nums[1] = 20;
    // printf("Array size: %lu\n", (int)sizeof(nums) / sizeof(nums[0]));
    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++)
    {
        printf("At %d we have %d\n", i, nums[i]);
    }
    // printf("At %d we have %d\n", -1, nums[-1]); [ERROR: index is before the beginning of the array]
    // 0.2 to limit decimal places to 2 places only
    printf("The value of PI is: %0.2f\n", PI);
    printf("I  am %d\n", FEMALE);


    // STRINGS
    char str[4] = {'a','b','c','d'};
    char str2[] = "abcd";
    printf("%s", str2);
    printf("%s\n", str);
    return 0;
}