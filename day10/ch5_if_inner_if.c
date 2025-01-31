#include <stdio.h>

int main(){
    int age = 18;
    int has_license = 0;

    if (age >= 18){
        if (has_license) {
            printf("운전 가능\n");
        } else {
            printf("운전면허가 필요\n");
        }
     
    } else {
        printf("미성년자, 운전 불가\n");
    }


	if (age >= 18 && has_license) {
        printf("운전 가능\n");
    } else if (age >= 18 && !has_license) {
        printf("운전면허가 필요\n");
    } else {
        printf("미성년자, 운전 불가\n");
    }
	



      
    return 0;
}