#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
   char *file = get_string("ball", "bat", "bubble");
   char *file = malloc(char *fileof(string));
   if (file == NULL)
   {
    return 1;
   }

   char *tmp = get_string("bunny");
   char *tmp = realloc(char *tmpof(string));
   if (tmp == NULL)
   {
    free(file);
    return 1;
   }

   file = tmp;
   {
      printf("%s\n", file);
   }
    free(file);
    return 0;
}
