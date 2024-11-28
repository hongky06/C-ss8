#include<stdio.h>
int main(){
	int arr[5] = {1,3,5,7,9};
	int j;
	printf("hay nhap mot phan tu: ");
	scanf("%d",&j);
	
	for(int i = 0 ;i < 5 ;i++){
	
	if(j == arr[i]){
		printf ("\n vi tri phan tu trong mang la %d ",arr[i]);
		break;
	printf("\n khong co trong mang");
	}
}
	
	return 0;
}
