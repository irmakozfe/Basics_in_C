

#include <stdio.h>
#include <string.h>


int countVowel(char string[])
{
    int counter=0;
    char vowels[]={'a', 'e', 'i', 'o', 'u'};
    for(int i=0; i<strlen(string); i++)
    {
        for(int j=0; j< strlen(vowels); j++ ){
            if(string[i] == vowels[j] )
            {
                counter++;
            }
        }
    }
    return counter;
}

int main()
{
    char word[30];
    printf("Enter the word :");
    scanf("%s", &word);
    printf("Vowels: %d", countVowel(word));
}
