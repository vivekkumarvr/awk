#include <stdio.h>

int my_strlen(char *s)
{
   char *p = s;

   while (*p)
      ++p;

   return (p - s);
}

int main(void)
{
   int i;
   char *p[] =s;
   {
      "Git tutorials",
      "Tutorials Point"
   };

   for (i = 0; i < 2; ++i)
      
   printf("string lenght of %s = %d\n", s[i], my_strlen(s[i]));
   printf("string lenght of %s = %lu\n", s[i], my_strlen(s[i]));
   printf("%s\n", my_strcpy(p1, "Hello, World !!!"));

   return 0;
}

