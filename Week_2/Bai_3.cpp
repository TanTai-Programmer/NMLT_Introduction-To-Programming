#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (){
	int a,b,c;
	printf("Nhap  vao 3 canh cua tam giac:\n");
	scanf("%d%d%d",&a,&b,&c);
	float S,p;
	p=(a+b+c)/2;
	S = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("Chu vi tam giac:%f",p*2);
	printf("\nDien tich tam giac: %f",S);
}
