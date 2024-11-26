#include <stdio.h>
#include <string.h>

int contains(char string[], char c)
{
    for(int i =0; i<strlen(string); i++)
    {
        if(string[i]==c)
        {
            return 1;
        }
    }
    return 0;
}



int counter(char string[])
{
    int k=0;
    for(int i=0; i < strlen(string); i++)
    {
        if(contains(string, ' '))
        {
            if(string[i] == ' ' || string[i] == ',' || string[i] == '\t')
            {
                k++;
            }
        }else
        {
            k=1;
        }


    }

    return k;
}


int main(){
    char string[100];
    printf("Enter the text : ");
    fgets(string,sizeof(string), stdin);
    printf("%d words in the sentence.", counter(string));
}