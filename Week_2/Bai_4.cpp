#include <stdio.h>
#include <conio.h>
#include <math.h>

int main ()
{
	int a,b;
	printf("Nhap vao 2 so nguyen a va b :\n");
	scanf("%d%d",&a,&b);
	int c;
	c=a;
	a=b;
	b=c;
	printf("2 So sau khi hoan doi a: %d ; b:%d",a,b);
}
