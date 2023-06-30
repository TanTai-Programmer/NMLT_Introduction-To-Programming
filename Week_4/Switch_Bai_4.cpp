#include <stdio.h>
#include <conio.h>


int main (){
	int m,x,y;
	printf ("Nhap vao mot nam bat ky: ");
	scanf("%d",&y);
	printf ("Nhap vao mot thang bat ky: ");
	scanf("%d",&m);
	if(m>12 || m<0){
		printf ("Nhap sai!, Nhap lai: ");
		scanf("%d",&x);
	}
	if (y%4==0 &&y%100!=0 || y%400==0){
		switch (m){
			case 2: {
				printf ("29");
				break;
			}
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:{
				printf ("31");
				break;
			}
			case 4:
			case 6:
			case 9:
			case 11:{
				printf ("30");
				break;
			}
		}
	}
	else{
			switch (m){
			case 2: {
				printf ("28");
				break;
			}
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:{
				printf ("31");
				break;
			}
			case 4:
			case 6:
			case 9:
			case 11:{
				printf ("30");
				break;
			}
		}
	}
}

