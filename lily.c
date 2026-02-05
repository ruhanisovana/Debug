#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *f = "little";
    char *g = malloc(strlen(f) + 1);

    for (int i = 0; i < strlen(f); i++)

    strcpy(g, f);

       g[0] = toupper(g[0]);

        printf("f: %s\n", f);
        printf("g: %s\n", g);
}
