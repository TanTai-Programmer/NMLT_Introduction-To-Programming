#include <stdio.h>
#include <conio.h>
int main (){
	int t1,t2,m1,m2;
	printf("Enter first fraction:\n");
	printf("Numerator 1: ");
	scanf("%d",&t1);
	printf("Denominator 1: ");
	scanf("%d",&m1);
	printf("Enter second fraction:\n");
	printf("Numerator 2: ");
	scanf("%d",&t2);
	printf("Denominator 2: ");
	scanf("%d",&m2);
	float TuSo = (m1*t2)+(m2*t1);
	float Ms = m1*m2;
	printf("---------------------------------");
	printf("\nFirst Fraction: %d/%d",t1,m1);
	printf("\nSecond Fraction: %d/%d",t2,m2);
	printf("\nThe Sum is : %.0f/%.0f",TuSo, Ms);
}
