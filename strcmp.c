

#include <stdio.h>
 
#define      SIZE    200
 
char *mystrcmp(const char *, const char*);
 
int main()
{
   char name1[SIZE];
   char name2[SIZE];
   int comp_result;
 
   printf("First name : ");
   gets(name1);
   printf("Last name : ");
   gets(name2);
   comp_result = strcmp(name1, name2);
   if (comp_result > 0)
      printf("(%s) > (%s)\n", name1, name2);
   else if (comp_result < 0)
      printf("(%s) < (%s)\n", name1, name2);
   else
      printf("(%s) == (%s)\n", name1, name2);
   return 0;
}

