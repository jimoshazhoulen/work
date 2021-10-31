#include <string.h>
#include <stdio.h>
int
lookup_keyword(char const * const desired_word,char const *keyword_table[],int const size){
	char const **kwp;
	for(kwp=keyword_table;kwp<keyword_table+size;kwp++)
	if(strcmp(desired_word,*kwp)==0) 
	  return kwp-keyword_table;
    return -1;
} 
int  main(){
	char const *abc[]={
	"do",
	"for",
	"if",
	"register",
     "return",
     "switch",
     "while"
	};
int a=(sizeof(abc)/sizeof(abc[0]));
	char const*const p="switch";
	lookup_keyword(p,abc,a);
	
}
