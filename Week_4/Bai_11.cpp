#include <stdio.h>

int main (){
	int kw;
	float tien, tien1, tien2, tien3, khung1, khung2, khung3, gia;
	printf ("Nhap vao so dien cua ho gia dinh: ");
	scanf("%d",&kw);
	if (kw <=100){
		tien = kw * 950;
		gia = tien;
	}	
	else{
		if(kw <150){
			khung1= kw-100;
			tien =100*950 + khung1*1250;
			gia = tien;
		}
		else{
			if(kw<200){
				khung2= kw -150;
				tien = 100*950 + 50*1250 + khung2*1350;
				gia = tien;
			}
			else{
				khung3 = kw-200;
				tien = 100*950 + 50*1250+ 50*1350 + khung3*1550;
				gia = tien;
			}
		}
	}
	printf (" Gia tien la: %.0f", gia);
}
