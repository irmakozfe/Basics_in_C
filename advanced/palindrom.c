
#include <stdio.h>
#include <string.h>

int isPalindrom(char string[])
{
    int k=0;
    int len=strlen(string);
    char new[len+1];
    for(int i=len-1; i>=0 ; i--)
    {
        new[k]=string[i];
        k++;
    }
    new[k]=NULL;

    printf("Old word: %s\n", string);
    printf("New Word: %s\n", new);

    if(strcmp(new, string)==0)
    {
        return 1;
    }else
    {
        return 0;
    }

}

int main()
{
    char string[20];
 printf("Enter the string :");
    scanf("%s", &string);
    if(isPalindrom(string) == 1 )
    {
        printf("Palindrom");

    }else
    {
        printf("it's not a Palindrom word.");
    }
}