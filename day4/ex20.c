#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
	//time(NULL) ???
    int random_number = rand() % 100 + 1;
	// rand() ???

    printf("생성된 난수: %d\n", random_number);
    
	return 0;
}