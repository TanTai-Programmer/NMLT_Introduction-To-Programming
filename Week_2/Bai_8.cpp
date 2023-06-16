#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <ctype.h>
int main (){
	char a,b;
	printf("a) Nhap vao ky tu in thuong : ");
	scanf("%c",&a);
	printf("Ky tu in hoa la: %c",toupper(a));
	fflush(stdin);  //Xoa bo nho dem 
	printf("\n\nb)Nhap vao ky tu in HOA: ");
	scanf("%c",&b);
	printf("\nKy tu in thuong la: %c",tolower(b));
}
