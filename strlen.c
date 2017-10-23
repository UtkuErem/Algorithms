#include <stdio.h>
#include <string.h>
int main()
{
    char c[20];

    printf("Enter string: ");
    gets(c);



    //calculates the length of string before null charcter.
  
    printf("Length of string c = %d \n",strlen(c));

    return 0;
}
