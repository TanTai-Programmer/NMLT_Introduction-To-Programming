#include <stdio.h>

int main(){
	float DTB ;
	printf ("Nhap vao diem trung binh: ");
	scanf("%f",&DTB);
	if(DTB >10 || DTB <0){
		printf ("Nhap sai");
	}
	else{
		if (DTB <5){
			printf ("Yeu");
		}
		else if(DTB >= 5 && DTB <6){
			printf ("Trung Binh");
		}
		else if (DTB >=6 && DTB <7){
			printf ("Trung Binh Kha");
		}
		else if (DTB >=7 && DTB <8){
			printf ("Kha");
		}
		else if(DTB >=8 && DTB<9){
			printf ("Gioi");
		}
		else{
			printf ("Xuat Sac");
		}
	}
	
}
