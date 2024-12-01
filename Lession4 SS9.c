#include<stdio.h>
int main(){
	int pick;
	int a = 4;
	int arr[a];
	int index, value;
	
	
	do{
		
	printf("           MENU\n\n1.Nhap vao mang\n2.Hien thi mang\n3.Them phan tu\n4.Sua phan tu\n5.Xoa phan tu\n6.Thoat\n");
	printf("Lua chon chuc nang ");
	scanf("%d",&pick);
	if(pick==1){ 	
		printf("Nhap cac gia tri phan tu vao mang\n");
		for(int i = 0; i<4; i++){
			printf("Nhap gia tri cho phan tu %d ", i + 1);
			scanf("%d", &arr[i]);
		}
	}else if(pick==2){
		for(int i = 0; i<4; i++){
		
		printf("%d\n", arr[i]);
	}
	}else if(pick==3){
		printf("Nhap gia tri muon them vao mang");
		scanf("%d", &value);
		printf("Nhap vi tri muon them vao mang");
		scanf("%d", &index);
		while(index < 0 || index > 4 + 1){
	
	printf("Khong hop le");
	scanf("%d", &index);
}
	for(int i = 4; i>=index;  i--){
		arr[i]=arr[i-1];
	}
	arr[index-1]=value;
	a++; 
	for(int i = 0; i<4; i++){
		printf("%d\n", arr[i]);
	}
		
	}else if(pick==4){
		printf("Nhap gia tri can sua ");
	scanf("%d", &value);
	printf("Nhap vi tri can sua ");
	scanf("%d", &index);
	arr[index-1] = value;
	for(int i = 0; i < 4; i++){
		printf("%d\n", arr[i]);
	}
	}else if(pick==5){
		printf("Nhap vi tri xoa khoi mang ");
	scanf("%d", &index);
	while(index < 0 || index > 4 + 1){
	
	printf("Khong hop le");
	scanf("%d", &index);
}
	for(int i = index-1; i<4;  i++){
		arr[i]=arr[i+1];
	}

	a--; 
	for(int i = 0; i<4; i++){
		printf("%d\n", arr[i]);
	}
	}else if(pick==6){
		printf("BYE!!!");
	}else{
		printf("Khong hop le");
	}
			
}while(pick!=6);
return 0;
}