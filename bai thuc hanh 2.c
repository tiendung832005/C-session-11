#include<stdio.h>
int main(){
	//1. Nhap so phan tu va gia tri cac phan tu
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int numbers[n];
	printf("Nhap gia tri cac phan tu va mang: \n");
	for(int i=0;i<n;i++){
		printf("numbers[%d]=", i);
		scanf("%d", &numbers[i]);
	}
	//2. Lua chon sap xep mang giam dan
	for(int i =0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(numbers[i]<numbers[j]){
				int temp = numbers [i];
				numbers[i] = numbers[j];
				numbers[j]=temp;
				
			}
		}
	}
	//3.In ra ket qua
	printf("Mang sau khi da sap xep giam dan la: \n");
	for (int i=0;i<n;i++){
		printf("%d\t", numbers[i]);
	}
}
