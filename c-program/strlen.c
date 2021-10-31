#include <stdio.h>
#include <stddef.h>
#include <string.h>

void   main()
{
char string[20]="hello honey I'm here .Yes,I'm coming!";
char *ans;
ans=strpbrk(string,"coming");
printf("%c",&ans);
//printf("%d",strlen(ans));
} 
