#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void InputArr(int  a[], int n)
{
	int i;
	srand(time(NULL));
	for(i=0;i<n;i++){
		a[i]=-50 +rand()%101;
		printf("\nNhap so phan tu mang a[%d]: %d",i,a[i]);
	}
}
void OutputArr (int a[], int n){
	int i;
	for(i=0;i<n;i++){
		printf ("\na[%d]: %d",i,a[i]);
	}
}
int CheckSNT(int a){
	int i;
	if(a<2){
		return 0;
	}
	else{
		for(i=2;i<=a/2;i++){
			if(a%i==0)
				return 0;
		}
		return 1;
	}
}
void SNT(int a[], int n){
	printf ("\n Cac so nguyen to trong mang la: \n");
	int i;
	for (i=0;i<n;i++){
		if(CheckSNT(a[i])==1){
			printf ("%5d",a[i]);
		}
	}
}
void Inkhoang( int a[], int n){
	int i,x,y;
	printf ("\nNhap vao khoang [a-b]: ");
	scanf("%d%d",&x,&y);
	for (i=0;i<n;i++){
		if(a[i]>=x&&a[i]<=y){
			printf("\na[%d]: %d",i,a[i]);
		}
	}
}
void InPt(int a[], int n){
	int i,x,y;
	printf ("\nNhap vao vi tri x va y: ");
	scanf("%d%d",&x,&y);
	for(i=0;i<n;i++){
		if(i>=x&&i<=y){
			printf ("\na[%d]: %d",i,a[i]);
		}
	}
}
void AVGArr(int a[], int n){
	int i,S=0;
	for(i=0;i<n;i++){
			S+=a[i];
	}
	printf ("\nGia tri trung binh cua mang: %f",(float)S/n);
}
void DemPt( int a[], int n){
	int i,dv,dem=0;
	for (i=0;i<n;i++){
		dv=abs(a[i])%10;
		if(a[i]%4==0&&dv==6){
			dem++;
		}
	}
	printf ("\nSo phan tu thoa man chia het cho 4 va tan cung la 6 la: %d",dem);
}
void ThayPtle(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			a[i]=a[i]*2;
		}
	}
	OutputArr(a,n);
}
void AddArr( int a[], int &n){
	int x,i,y;
	printf ("\nNhap vao vi tri muon them P va gia tri X: ");
	scanf("%d%d",&x,&y);
	for(i=n;i>x;i--){
		a[i]=a[i-1];
	}
	a[x]= y;
	n++;
	OutputArr(a,n);
}
void DeleteArr(int a[], int &n){
	int i,x;
	printf ("\nNhap vao vi tri can xoa");
	do{
		scanf("%d",&x);
	}
	while(x<0);
	for (i=x;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
	OutputArr(a,n);
}

int FindArr(int a[], int n, int b){
	int i;
	for (i=0;i<n;i++){
		if(a[i]==b){
			return i;
		}
	}
	return -1;
}
void CheckFind(int a[], int n){
	int b;
	printf("\nNhap vao gia tri can tim: ");
	scanf("%d",&b);
	if(FindArr(a,n,b)==-1){
		printf("\nKhong tim thay gia tri trong mang");
	}
	else{
		printf ("\nTim thay gia tri tai a[%d]",FindArr(a,n,b));
	}
}
int main (){
	int n,a[n];
	printf ("\nNhap vao so phan tu cua mang: ");
	scanf("%d",&n);
	InputArr(a,n);
	OutputArr(a,n);
	SNT(a,n);
	Inkhoang(a,n);
	InPt(a,n);
	AVGArr(a,n);
	DemPt(a,n);
	ThayPtle(a,n);
	AddArr(a,n);
	DeleteArr(a,n);
	CheckFind(a,n);

}
