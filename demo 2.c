#include<stdio.h>
int main(){
	int numbers[] = {5,3,4,1,2,8,7};
	int size= sizeof(numbers)/sizeof(int);
	for (int j=0;j<size;j++){
		
	}
	for(int i=0;i<size-1;i++){
		if(numbers[i] > numbers[i+1]){
			int temp = numbers[i];
			numbers[i] = numbers[i+1];
			numbers[i+1] = temp;
		}
	}
	for (int i=0;i<size;i++){
		printf("numbers[%d]=%d\n",i, numbers[i]);
	}
}
