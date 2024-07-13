#include <stdio.h>
#include <strings.h>

int main()
{
    char str1[] = "regis";
    char str2[100];
    strcpy(str2, str1);
    printf("%s was copied into  %s\n", str1, str2);
}