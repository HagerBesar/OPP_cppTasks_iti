#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fun(char *str,char ch){
	int i=0,j;
	while(str[i]!='\0'){
		if(str[i]==ch){
			for(j=i;j<strlen(str);j++){
				str[j]=str[j+1];
			}
			
		}else{i++;
		}
	}
}
int main(){
	char s[]="haggerg";
	fun(s,'g');
	int j=0;
	for(j=0;j<strlen(s);j++){
		printf("%c",s[j]);
	}
	
}
