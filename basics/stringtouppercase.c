
#include <ctype.h>
#include <stdio.h>

void toUpperCase(char s[])
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        s[i] = toupper(s[i]);
    }
}
int main()
{
char str[] = "Hello World!";
    toUpperCase(str);
    printf("%s", str);
}