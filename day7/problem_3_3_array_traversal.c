#include <stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    

	printf("후위 연산으로 배열 순회:\n");
	/**
	arr[0] = 10
	arr[1] = 20	
	arr[2] = 30
	arr[3] = 40
	arr[4] = 50
	arr[5] = error 
	 */

	for(int i =0; i < 5; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	} 


	printf("\n\n전위 연산으로 배열 거꾸로 순회:\n");
	/**
	arr[4] = 50
	arr[3] = 40
	arr[2] = 30
	arr[1] = 20	
	arr[0] = 10
	i = -1
	i = -2
	i = -3
	 */
	for(int i = 4; i >=0; --i){
		printf("arr[%d] = %d\n", i, arr[i]);
	} 

    return 0;
}