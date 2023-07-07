#include <stdio.h>
#include <conio.h>

void InputArr(int a[], int n){
	int i;
	for (i=0;i<n;i++){
		printf ("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
}
void OutputArr(int a[], int n){
	int i;
	for (i=0;i<n;i++){
		printf("\nGia tri a[%d]: %d",i,a[i]);
	}
}
int Min(int a[], int n){
	int i,min = a[0];
	for (i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	return min;
}
int Max(int a[], int n){
	int i,max = a[0];
	for (i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
//void AddArr (int a[], int &n){
//	int x,i;
//	printf("\nNhap vao gia tri phan tu muon them: ");	
//	scanf("%d",&x);
//	a[n]=x;
//	n++;
//	printf ("\nMang sao khi da them: ");
//	for(i=0;i<n;i++){
//		printf ("%d ", a[i]);
//	}
//}
void AddArr( int a[], int &n){
	int x,i,y;
	printf ("\nNhap vao vi tri muon them va gia tri: ");
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
void SuaArr(int a[], int n){
	int i,x,b;
	printf ("\nNhap vao vi tri can sua va gia tri can sua: ");
	do{
		scanf("%d%d",&x,&b);
	}
	while (x<0);
	a[x]= b;
	OutputArr(a,n);
}
int PropertiesArr(int a[], int n){
	int i;
	printf ("\nTinh chat cua mang la: \n");
	for(i=0;i<n;i++){
		printf("\na[%d] co kich thuoc: %d ",i,sizeof(a[i]));
	}
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
int TachArr(int a[], int n){
	int b[n],c[n],i;
	int chan =0, le=0;
	for (i=0;i<n;i++){
		if(a[i]%2==0){
			b[chan]=a[i];
			chan++;
		}
		else{
			c[le]=a[i];
			le++;
		}
	}
	printf ("\nMang so chan:");
	for(i=0;i<chan;i++){
		printf (" %d",b[i]);
	}
		printf ("\nMang so le:");
	for(i=0;i<le;i++){
		printf (" %d",c[i]);
	}
}
int Gopmang(int a[], int n){
	int j,i,c;
	printf ("\nNhap vao so phan tu mang moi: ");
	scanf("%d",&c);
	int b[c];
	for(i=0;i<c;i++){
		printf ("b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	int dem = 0,pt=0;
	int m[n+c];
	printf ("\nMang moi duoc tao tu 2 mang :");
	for(i=dem;i<(n);i++){
		m[i]=a[i];
		dem++;
	}
	for(i=dem;i<(n+c);i++){
		m[i]=b[pt];
		pt++;
	}
	for(i=0;i<(n+c);i++){
	printf ("%d ",m[i]);
	}

}
int SoftArr_ascending(int a[], int n){
	int i,j;
 	for( i=0; i< n-1; i++)
    {
        for(j=i+1; j< n; j++)
        if(a[i]>a[j])//neu a[i] > a[j]
        {
            //dung bien temp dung de doi cho a[i] voi a[j]
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    for (i=0;i<n;i++){
    	printf ("\na[%d]: %d",i,a[i]);
	}
}
int SoftArr_descending(int a[], int n){
	int i,j;
 	for( i=0; i< n-1; i++)
    {
        for(j=i+1; j< n; j++)
        if(a[i]<a[j])//neu a[i] > a[j]
        {
            //dung bien temp dung de doi cho a[i] voi a[j]
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    for (i=0;i<n;i++){
    	printf ("\na[%d]: %d",i,a[i]);
	}
}
int main (){
	int i,n,a[n],b;
	printf ("Nhap vao so luong phan tu: ");
	scanf("%d",&n);
	InputArr(a,n);
	OutputArr(a,n);
	AddArr(a,n);
	DeleteArr(a,n);
	SuaArr(a,n);
	printf ("\nGia tri nho nhat trong mang la: %d", Min(a,n));
	printf ("\nGia tri lon nhat trong mang la: %d", Max(a,n));
	printf ("\nNhap vao gia tri can tim: ");
	scanf("%d",&b);
	if(FindArr(a,n,b)==-1){
		printf ("Khong tim thay ");
	}
	else{
		printf ("\nGia tri duoc tim thay a[%d] ",FindArr(a,n,b));
	}
	printf ("\nMang sau khi duoc sap xep theo tang dan: ");
	SoftArr_ascending(a,n);
	printf ("\nMang sau khi duoc sap xep giam dan: ");
	SoftArr_descending(a,n);
	PropertiesArr(a,n);
	TachArr(a,n);
	Gopmang(a,n);
}
