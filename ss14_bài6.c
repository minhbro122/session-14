#include<stdio.h>

int main() {
	char str[] ="fh455!@ff";
	int countCharacterText=0;
	int length = strlen(str);
	for(int i=0; i<length; i++) {
		if(str[i]>='a'&&str[i]<='z') {
			countCharacterText++;
			 
		}
		if(str[i]='A'&&str[i]<='Z') {
			countCharacterText++;
			
		}
	}
	printf("so ki tu la chu cai la %d :",countCharacterText); 
	
	return 0; 
}
