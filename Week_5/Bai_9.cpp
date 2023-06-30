#include <stdio.h>
#include <conio.h>
#define ENTER 10
int main(){
	int SLso=0, SLchu=0,Slkhac=0;
	char c;
	printf ("Enter a string: ");
	do{
		scanf("%c",&c);
		if(c>='0'&& c<='9'){
			SLso++;
		}
		else if((c>='a' && c<='z') || (c>='A' && c<='Z')){
			SLchu++;
		}
		else{
			Slkhac++;
		}
	}
	while (c!=ENTER);
	printf("So luong chu: %d\nSo luong so: %d\nSo luong ky tu khac: %d\n",SLchu,SLso,Slkhac);
}
