#include <stdio.h>
#include <conio.h>

 int main (){
 	char a;
 	printf ("Nhap vao ky tu bat ky:");
 	scanf("%c",&a);
 	printf("a) Ky tu %c co ma %d",a,a);
 	printf ("\nNhap vao so nguyen (1->255): ");
 	int b;
 	scanf("%d",&b);
 	printf("\nKy tu co ma ASCII tuong ung:%c",b);
 }
