#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 20

int main()
{
FILE *original, *copy;

original=fopen("original.txt","w+");
copy=fopen("copy.txt","w+");
fputs("Original", original);
fputs("Copy", copy);
fclose(original);
fclose(copy);



return 0;
}
