#include <stdio.h>
 void swap(int* x,int* y){
int* temp;
temp=x;
x=y;
y=temp;
printf("%d ,%d",*x,*y);}
void main(){
	int a=2,b=3;
	swap(&a,&b);

} 
