#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main (){

    const char* s1= "I need a cigarette.";
    char* new = strdup (s1);
    assert (new != NULL);

    fprintf( stdout , "%s\n", new);

    free (new);
    return 0;
}
