#include <stdio.h>

int main (){
	int m, y;
	printf ("Nhap vao nam: ");
	scanf("%d",&y);
	printf("Nhap vao thang: ");
	scanf("%d",&m);
	if(y%4 == 0 && y %100 !=0 || y%400==0){
		if(m>12 || m<1){
			printf("Sai dinh dang thang");
		}
		else{				
			if(m ==1 ||m==3|| m==5 || m==7 || m==8 || m==10 ||m ==12){
				printf("31 ngay");
			}
			else if(m==2){
				printf("29 ngay");
				
			}
			else{
				printf("30 ngay");
			}
		}
	}
	else{
		if(m>12 || m<1){
			printf("Sai dinh dang thang");
		}
		else{				
			if(m ==1 ||m==3|| m==5 || m==7 || m==8 || m==10 ||m ==12){
				printf("31 ngay");
			}
			else if(m==2){
				printf("28 ngay");
			}
			else{
				printf("30 ngay");
			}
		}
	}
}
