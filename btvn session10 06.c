#include <stdio.h>
int main(){
	int arr[8]={18,3,1,8,6,12,24,2};
	int item;
	int length=sizeof(arr)/sizeof(arr[0]);
	int count=-1;
	printf("moi ban nhap gia tri can tim kiem:");
	scanf("%d",&item);
	for(int i=0;i<length;i++){
		if(arr[i]==item){
			printf("phan tu %d co vi tri index la %d\n",item,i);
			count=i;
		}
	}
	if(count==-1){
		printf("khong tim thay phan tu %d trong mang",item);
	}	
	return 0;
}

