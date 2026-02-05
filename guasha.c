#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char *v = get_string("v: ");

    string u = v;

    if (strlen(u) < 0)
    {
       return 0;
    }
    else
    {
        if (strlen(u) > 0)

        u[2] = toupper(u[2]);
    }
    printf("v: %s\n", v);
    printf("u: %s\n", u);

    return 0;
}
