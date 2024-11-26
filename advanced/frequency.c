
#include <stdio.h>
#include <string.h>

int contains(char string[], char c)
{
   for(int i= 0; i < strlen(string); i++)
   {
      if(string[i]==c)
      {
         return 1;
      }
   }
   return 0;
}

int howMany(char string[], char c)
{
   int k=0;

   for(int i= 0; i < strlen(string); i++)
   {
      if(string[i] == c)
      {
         k++;
      }
   }

   return k;
}

void countFrequency(char string[])
{
char englishletters[52]= {0};
   int k=0;

   for(int i=0; i < strlen(string); i++)
   {
      if(!contains(englishletters, string[i]) &&
         ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')))
      {
         englishletters[k]= string[i];
         k++;
      }
   }

   for(int i=0; i<k ;i++ )
   {
      printf("Char : %c, Frequency: %d\n", englishletters[i], howMany(string, englishletters[i]));
   }
}

int main()
{
   char string[100];
   printf("Enter the string :");
   fgets(string, sizeof(string), stdin);//****
   //scanf kullanırsan sadece kelimeyi alır
   countFrequency(string);


}