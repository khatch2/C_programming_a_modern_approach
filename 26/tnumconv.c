/* */

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>

#define CHK_VALID  printf("     %s\n",                      \    
                           errno != ERANGE ? "Yes" : "No ", \
                           *ptr == '\0' ? "Yes" : "No")

int main(int argc, char *argv[])
{
    char *ptr;

    if(argc != 2) {
        printf("usage: tnumconv string\n");
        exit(EXIT_FAILURE);
    }

    printf("Function   Return Value\n");
    ptintf("--------   ------------\n");
    printf("atof       %g\n", atof(argv[1]));
    printf("atoi       %g\n", atoi(argv[1]));

    return 0;
}
