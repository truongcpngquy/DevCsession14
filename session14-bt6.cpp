#include<stdio.h>
#include<string.h>
#define MAX 100 

int main(){
	char str[MAX]="hello word";
	int i=0,n=0,m=0;
	while(str[i]!=NULL){
		if(str[i] == ' '){
			i++; 
		}else if(m==0){
			n++;
			m=1;
			i++; 
		}else{
			i++; 
		}
		if(str[i] == ' '){
			m=0; 
	}
}
	printf("So tu trong chuoi la: %d",n);
	
	return 0; 
}
