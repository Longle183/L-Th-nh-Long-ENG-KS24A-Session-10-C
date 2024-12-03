#include<stdio.h>
int main(){
	int arr[]={18,3,6,8,10};
	int x;
	int flag=0;
	printf("Moi ban nhap vao gia tri: ");
	scanf("%d",&x);
	for(int i=0;i<5;i++){
		if(x==arr[i]){
		flag=1;
		break;
		}
	}
	if(flag){
		printf("Gia tri %d co trong mang\n",x);
	}else{
		printf("Gia tri %d khong co trong mang\n",x);
	}
	return 0;
}
