

#include <stdio.h>
#include <string.h>

void reverse(char str[])
{

    int len= strlen(str);
    char reversedWord[len + 1];
    int i,j;
    for(int i = len - 1,  j = 0; i >= 0; i--, j++)
    {

        reversedWord[j]= str[i];

    }
    reversedWord[len]="\0";
    strcpy(str,reversedWord);

}

int main()
{
 char word[]= "irmak";
    reverse(word);
  printf("%s",word);
}