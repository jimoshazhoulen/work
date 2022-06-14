#include <stdio.h>
#include<string.h>
    int  *digit;
    char *string;
    char *str[]={"hello","nice","book"}; 
    int b[3][5]={{12,34,95,0,12},{2,3,4,5,6},{34,66,11,33}};
    int (*p)[5]=b;
    char const * nihao="hello,my name is hxq";
    int	a[]={1,2,3};
    //int *a[3]={1,2,3};//错误写法 ,没有必要这样存 ‘【】’中有没有数都一样 
	int *h=a;
    char sd[]="dyefwafwef"; 
    //char *ds[]="hahahahahah";//错误写法，也没必要 ‘【】’中有没有数都一样
int    findchar(char **str,char *string)
{ 
    while((string=*str++)!=NULL)
    {
        printf("%c%c\n",*(string+1),*(string+2));


    }
    return 0;
}
int laji(char **str,char *string){
        int i;
        for(i=1;i<=3;i++){

        string=*str;
        printf("%c%c\n",*(string+1),*(string+2));
        str++;
        }
return 0;
}

int main(int argc, char const *argv[])
{
     //laji(str,string);
     digit=*b;
     printf("%d\n",digit);
     printf("%d\n",++*++digit);
     printf("%d\n",digit);
    printf("%p\n",&str);
    printf("%p\n",str);                                                                                            
    // printf("%d\n",p);
    // printf("%d\n",**p); 
    printf("%p  %p\n",&(*str),&(**str));
    printf("%p\n",*str);
    //printf("%c\n",**(str+1));
    printf("%p\n",(str+1));
    //printf("%p",&(str+1));//会报错
    // printf("%p\n",*(*p+3)); 
    // printf("%c",*(*str+1));
    printf("%c  %p",*(str[0]+4),*str);
    return 0;
}

