#include <stdio.h>


int main (){
	int SL, KQ;
	printf ("Nhap vao so lua dia DVD: ");
	scanf("%d",&SL);
	KQ=SL*5000;
	if(SL>10){
		KQ =KQ -KQ*0.1;
	}
	printf ("So tien can tra la: %d",KQ);
}
