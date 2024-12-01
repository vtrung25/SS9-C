#include<stdio.h>
int main(){
	int arr[6]={2,5,1,8,9,7};
	int index,value;
	printf("Nhap gia tri can sua ");
	scanf("%d", &value);
	printf("Nhap vi tri can sua ");
	scanf("%d", &index);
	arr[index-1] = value;
	for(int i = 0; i < 6; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
	
}