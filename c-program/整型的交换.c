#include <stdio.h>
void swap(int x,int y){
int temp;
temp=x;
x=y;
y=temp;
}
void main(){
	int x,y; 
swap(2,3);
printf("%d ,%d",x,y);
}
