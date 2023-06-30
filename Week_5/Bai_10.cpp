#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
int main (){
	char c,C;
	int SLna=0,SLpa=0,SLphim=0;
	printf("Nhap vao ky tu: \n");
	do{
		scanf("%c",&c);
		C = toupper(c);
		if(C>='A'&& C<='Z'){
			switch(C){
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':{
					SLna++;	
					SLphim++;	
					break;
				default:{
					SLpa++;
					SLphim++;	
					break;
				} 
				}
			}
		}
		else{
			SLphim++;
		}
	}
	while(C!='\n');
	printf ("So luong nguyen am la: %d\nSo luong phu am la: %d\nSo luong phim la: %d",SLna,SLpa,SLphim-1);
}
