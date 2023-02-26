#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int outMenu=0;
//1. tim 1 phan tu co trong mang hay khong
int tim(int *a, int n, int k); //thay vi viet tat int *a thi viet int a[]
//2. tinh tong cac phan tu trong mang sau do tinh tb
int tong(int *a, int n);
//3. tim gia tri lon nhat nho nhat trong mang
void minMax(int *a, int n);
void nhapMang(int *a, int n);



void nhapMang(int *a,int n){
	int i;
	for ( i=0;i<n;i++){
	printf("\n nhap phan tu cua a[%d]= ",i);
	scanf ("%d",&a[i]);
	}
}	
int tim(int *a, int n, int k){
	int i; 
	for (i=0; i <n; i++)
	    if(a[i]==k)
	        return 1;
	    return 0;
}
	
int tong(int *a, int n){
	int i, sum = 0;
	for (i=0; i<n; i++)
	sum = sum + a[i];
	printf("/n Tong cac phan tu co trong mang la: %d");
	return sum;
	printf(" trung binh cua cac phan tu co trong mang la: %f", (float) sum/n );
	return 0;
}
//run menu
void runMenu() {
	while(outMenu == 0) {
		int options = printMenu();
		int option = getOption(options);
		performAction(option);
	}
}
int printMenu() {
	printf("\n DE170254 - NGUYEN LE VIET HUY");
	printf("\n -------------SE170D10---------------");
	printf("\n1. tim phan tu co trong mang  ");
	printf("\n2. tinh tong va TB cac phan tu co trong mang.");
	printf("\n3. tinh gia tri min, max.");
	printf("\n4. thoat");
	return 4;
}
int getOption(int options) {
	printf("\nNhap lua chon cua ban? (1 - %d) :", options);
	int option = 0;
	scanf("%d", &option);
	printf("\nLUA CHON CUA BAN LA: %d", option);
	return option; 
}int performAction(int option) {
	switch (option) {
		case 1:
			printf("\n cac phan tu co trong mang la: %d",tim());
			break;
		case 2: 
			printf("tong va trung binh cac so co trong mang la: %f",tong());
			break;
		case 3: 
			break;
		case 4:
			outMenu = 1;
			printf("\nCam on da sai chuong trinh cua toi!");
			return 0;
		default:
			printf("\nMot loi sai khong xac dinh");
			return 0;
	}
}
//main function just running menu function
int main() {
	runMenu();	
}



