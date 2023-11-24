#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int numbers[n];
	printf("Nhap gia tri cac phan tu: \n");
	for(int i=0;i<n;i++){
		printf("numbers[%d]= ",i);
		scanf("%d", &numbers[i]);
	}
}
