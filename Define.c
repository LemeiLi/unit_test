#include <stdio.h>

int main()
{
    printf("Build time: %s\n", __BUILD_STRING__);
    return 0;
}

