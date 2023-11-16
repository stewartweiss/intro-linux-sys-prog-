#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    char path_to_home[256];
    strncpy(path_to_home, getenv("HOME"), 255);
    if ( NULL == path_to_home )
        printf("The HOME variable is not in the environment.\n");
    else
        printf("HOME=%s\n", path_to_home);
    return 0;
}
