#include<stdio.h>
int main(){
	//1. cho nguoi dung nhap du lieu vao
	int n;
	printf("Nhap du lieu cua mang: ");
	scanf("%d", &n);
	int numbers[n];
	printf("Nhap cac gia tri cua phan tu: \n");
	for (int i=0;i<n;i++){
		printf("numbers[%d]=",i);
		scanf("%d", &numbers[i]);
	}
	//2. Lua chon sap xep mang giam dan
	for(int i=0;i<n-1;i++)
}
