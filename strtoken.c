#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] ="Istanbul Commerce University";
  char * pch;
  printf ("%s i will be seperate this for you :\n",str);
  pch = strtok (str," ,.-");
  
  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ,.-");
  }
  return 0;

}
