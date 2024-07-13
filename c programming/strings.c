#include <stdio.h>
#include <string.h>

int main()
{
    char name[20];
    char lname[20];
    char fullname[100];
    puts("Enter your names, sir: ");
    // scanf("%s%s", name, lname);
    gets(fullname);
    printf("\nHis name is %s\n", fullname);
    // printf("\nHis name is %s %s\n", lname, name);


    //  MULTILINE STRINGS
    char bigstring[100] = "My name is Regis" 
    "My class Y3A";
    puts(bigstring);


    // STRING MANIPULATION
    // char *concatenated   = {0};
    // concatenated = strcat("re","gis");
    // printf("%s", concatenated);
    int equal  =   strcmp("regis", "regis");


        printf("Equality %d\n, length =  %d\n", equal, strlen("regis"));
}
