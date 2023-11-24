#include<stdio.h>
int main(){
	int numbers[] = {5,3,4,1,2,8,7};
	int result = 2;
	int size=sizeof(numbers)/sizeof(int);
	int findIndices[10]={};
	for(int i=0;i<size;i++){
		if(numbers[i] == result){
			printf("tim thay result nam trong numbers tai vi tri index= %d\n",i);
		} 
	}
}
