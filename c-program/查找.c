#include <stdio.h> 
int *
find_int(int key,int array[],int array_len) 
{
	int i;
	for(i=0;i<array_len;i++)
	
		if(array[i]==key)
	
		return &array[i];
	

	return NULL;

}
void  main(){
	int x[]={1,4,3,78,9};
	int i,a=4,b=5;
	find_int(a, x,b);

}
