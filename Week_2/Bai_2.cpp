#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	float cv1,cv2;
	printf ("Nhap vao 2 canh vuong: \n");
	scanf("%f%f",&cv1,&cv2);
	float S;
	S= (cv1*cv2)/2;
	printf ("\nDien tich cua tam giac vuong la: %f",S);
	float CHuyen;
	CHuyen = sqrt(pow(cv1,2) + pow(cv2,2));
	printf("\nCanh huyen: %f",CHuyen);
}
