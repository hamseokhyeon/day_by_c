#include <stdio.h>
#include <stdbool.h>

int main(){
    bool is_student = false;
    printf("학생인가요? %s\n", is_student ? "네" : "아니요");

	if(is_student){
		printf("네.\n");
	}else{
		printf("아니요.\n");
	}


    return 0;

}