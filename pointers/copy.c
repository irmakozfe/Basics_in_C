#include <stdio.h>

void myStrCpy(char *dest, char *src)
{
  while ((*dest++ = *src++) != 0);
}

int main()
{
  char *hello = "hello";
  char target[255];

  myStrCpy(target, hello);

  printf("%s\n", target);
  return 0;
}