#include<stdio.h>
int main(){
	int arr[100];
	int a, value, index;
	printf("Nhap so luong phan tu cua mang ");
	scanf("%d", &a);
	

	
	for(int i = 0;  i<a; i++){
		printf("Nhap gia tri cho phan tu thu %d ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("Nhap gia tri muon them vao mang ");
	scanf("%d", &value);
	printf("Nhap vi tri muon them vao mang ");
	scanf("%d", &index);
	while(index < 0 || index > a + 1){
	
	printf("Khong hop le");
	scanf("%d", &index);
}
	for(int i = a; i>=index;  i--){
		arr[i]=arr[i-1];
	}
	arr[index-1]=value;
	a++; 
	for(int i = 0; i<a; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
	
	
}