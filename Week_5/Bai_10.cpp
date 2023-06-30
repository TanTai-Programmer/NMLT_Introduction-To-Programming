#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
int main (){
	char c,C;
	int SLna=0,SLpa=0,SLphim=0;
	printf("Nhap vao ky tu: \n");
	do{
		fflush(stdin);
		scanf("%c",&c);
		if(	toupper(c)>='A'&& 	toupper(c)<='Z'){
			switch(toupper(c))
			{
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
		else if (c!=10){
			SLphim++;
		}
	}
	while(c!='\n');
	printf ("So luong nguyen am la: %d\nSo luong phu am la: %d\nSo luong phim la: %d",SLna,SLpa,SLphim);
}
