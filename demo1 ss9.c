#include<stdio.h>
int main(){
//	int numbers[] = {4,3,1,5,2};
//	int size= sizeof(numbers)/sizeof(int);
//	for (int i =1;i<size;i++){
//		printf("numbers[%d]=%d\n",i, numbers[i]);
//		int j = i-1;
//		int current=numbers[i];
//		while(j>=0 && current < numbers[j]){
//			printf("numbers[%d]=%d -- numbers[%d]=%d\n", i, numbers[i], j, numbers[j]);
//			
//			j--;
//		}
//		numbers[j+1]= current;
//		printf("*******************\n");
//		
//	}
//	for (int i = 0;i<size;i++){
//		printf("numbers[%d]=%d\n",i , numbers[i]);
//	}
     //B1: Duyet qua toan bo cac phan tu co trong mang (i)
     //B2: Tai moi mot lan duyet, coi phan tu do (numbers[1]) la min
     //B3: Lan luot so sanh min do voi cac phan tu con lai
     //B4: Neu min< bat ky phan tu nao con lai trong mang
     // -> Cap nhat lai gia tri cho bien min = phan tu do
     //B5: Sau khi ket thuc so sanh, neu gia numbers[i] ma khac min moi 
     // -> Tien hanh doi cho 2 phan tu nay
     
     int  numbers[]= {4,3,1,5,2};
     int size= sizeof(numbers)/sizeof(int);
     for (int i=0;i<size;i++){
     	
     	int min = numbers[i];
     	for(int j=i+1;j<size;j++){
     		if(numbers[min]> numbers[j]){
     			min = j;
			 }
     		
		 }
		 if(numbers[min] != numbers[i]){
		 	int temp = numbers[min];
		 	numbers[min]= numbers[i];
		 	numbers[i] = temp;
		 	
		 }
		 printf("*************\n");
	 }
	 for(int i=0;i<size;i++){
	 	printf("numbers[%d]= %d\n",i, numbers[i]);
	 }
	}

