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
	
	printf("Nhap vi tri xoa khoi mang ");
	scanf("%d", &index);
	while(index < 0 || index > a + 1){
	
	printf("Khong hop le");
	scanf("%d", &index);
}
	for(int i = index-1; i<a;  i++){
		arr[i]=arr[i+1];
	}

	a--; 
	for(int i = 0; i<a; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}