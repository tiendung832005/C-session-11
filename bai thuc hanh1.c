#include<stdio.h>
int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	int numbers[n];
	printf("Nhap gia tri cua cac phan tu trong mang: \n");
	for (int i=0;i<n;i++){
		printf("numbers[%d]= ", i);
		scanf("%d", &numbers[i]);
	}
	//chen va sap xep mang tang dan
	for(int i =0;i<n+1;i++){
		for(int j=i-1;j<n;j++){
			if(numbers[i]<numbers[j]){
				int temp = numbers [i];
				numbers[i] = numbers[j];
				numbers[j]=temp;
		    }
		}
		
	}
	//3. In mang sau khi da sap xep
	printf("Mang sau khi da sap xep tang dan:\n");
	for (int i=0;i<n;i++){
		printf("%d\t", numbers[i]);
	}

}
