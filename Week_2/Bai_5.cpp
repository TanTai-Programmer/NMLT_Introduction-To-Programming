#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (){
	int a,b;
	printf("Nhap vao 2 so nguyen a va b co du 3 chu so: \n");
	scanf("%d%d",&a,&b);
	printf("  %d\n",a);
	printf("x %d",b);
	printf ("\n--------");
	int tram,chuc,dv;
	dv = b % 10;
	chuc = b % 100 / 10;
	tram = b / 100;
	printf ("\n%5d\n", a * dv);
	printf ("%4d\n", a * chuc);
	printf ("%3d\n", a * tram);
	printf ("%5s\n", "-------");
	printf ("%4ld\n", long (a) * b);
}
