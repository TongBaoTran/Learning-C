#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 100


int palindrom(char word[LENGTH]);

int main()
{
    char word[LENGTH];
    printf("Enter a word: ");
    scanf("%s",word);
    printf("%d",palindrom(word));
    return 0;
}


int palindrom(char word[LENGTH])
{
              int i=0;
              char wordrev[LENGTH];
              strcpy(wordrev,word);
              strrev(wordrev);
              if (strcmp(word,wordrev)==0) i=1;
              return i;
}
