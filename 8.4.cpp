#include<stdio.h>
int main(){
int i,j,max=0;
int arr[2][3]={{1,9,8},{5,6,11}};
 for( i=0 ; i<=1 ; i++){
    	for( j=0 ; j<=2 ; j++){
    		if(max<arr[i][j]){
    			max=arr[i][j];
			}
		}
	}
	printf("so lon nhat la : %d",max);
	
	return 0;
}
    		

