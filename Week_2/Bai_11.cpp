#include <stdio.h>
#include <conio.h>
#include <math.h>

int main (){
	unsigned int N;
	printf("Nhap vao so tien nguyen N dong: ");
	scanf("%u",&N);
	int chuc,le;
	chuc = N/10;
	le=N%10;
	int nam, lenam;
	nam = le/5;
	lenam = le%5;
	int hai ,lehai;
	hai = lenam /2;
	lehai = lenam%2;
	int mot, lemot;
	mot = lehai/1;
	lemot=lehai%1;
	printf("N =%u d = %d to 10d + %d to 5d + %d to 2d + %d to 1d",N,chuc,nam, hai, mot);
}
