#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "My name is ", str2[] = "UtkuErem";

    //concatenates str1 and str2 and resultant string is stored in str1.
    strcat(str1,str2);

    puts(str1);    
    puts(str2); 

    return 0;
}
