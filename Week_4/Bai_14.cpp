#include <stdio.h>

int main (){
	float diem,thangdiem;
	printf("Nhap vao diem thi: ");
	scanf("%f",&diem);
	if (diem >10 || diem <0){
		printf ("Diem khong hop le!");
	}
	else{
		thangdiem = (diem/10)*4  ;
		printf ("%.2f\n",thangdiem);
		if (thangdiem == 4){
			printf ("A");
		}
		else if(thangdiem >=3.5 && thangdiem<4){
			printf ("B+");
		}
		else if(thangdiem >=3 && thangdiem <3.5){
			printf ("B");
		}
		else if(thangdiem>=2.5 && thangdiem <3){
			printf ("C+");
		}
		else if(thangdiem >=2 && thangdiem <2.5){
			printf ("C");
		}
		else if(thangdiem >=1.5 && thangdiem <2){
			printf ("D+");
		}
		else if (thangdiem >=1 && thangdiem <1.5){
			printf ("D");
		}
		else printf ("F");
	}
	
}
