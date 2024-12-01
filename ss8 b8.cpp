#include<stdio.h>
int main (){
	int n,m;
	printf ("hay nhap so luong hang: ");
	scanf ("%d",&n); 
	printf ("hay nhap so luong cot: ");
	scanf ("%d",&m);
	 
	int arr[n][m];
	for(int i = 0 ; i < n;i++){
		for (int j = 0 ; j < m ;j++){
		printf("[%d][%d] = ",i,j);
		scanf ("%d",&arr[i][j]);
		}
	}
    for(int i = 0 ; i < n ;i++){
		for (int j = 0 ; j < m ;j++){
		printf("%d ",arr[i][j]);
	     
	}
	  printf ("\n");
  }
	   
	for(int i = 0 ; i < n ;i++){
		printf(" %d ",arr[i][n-i-1]);	
    }
  
	
	
	return 0;
} 
