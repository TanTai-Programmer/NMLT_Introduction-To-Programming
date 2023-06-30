#include <stdio.h>
#include <conio.h>
#define ENTER 10

int main (){
	int noDigits = 0, noLeter = 0, noOther=0;
	char c =0;
	printf ("Enter a string: ");
	while (c!=ENTER){
		fflush(stdin);
		scanf("%c",&c);
		if (c >= '0' && c<='9'){
			noDigits++;
		}
		else if((c>='a' && c<='z') || (c>='A' && c<='Z')){
			noLeter++;
		}
		else{
			noOther++;
		}
	}
printf("So luong chu: %d\nSo luong so: %d\nSo luong ky tu khac: %d\n",noDigits,noLeter,noOther);
}
