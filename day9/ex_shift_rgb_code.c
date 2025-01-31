#include <stdio.h>

int main(){
    unsigned int color = 0xFFAABBCC; 
	// -2,147,483,648 ~ 2,147,483,647 => 0 ~ 4,294,967,295
    unsigned char alpha = (color >> 24) & 0xFF; // -128~127 => 0 ~ 255
    unsigned char red = (color >> 16) & 0xFF;
    unsigned char green = (color >> 8) & 0xFF;
    unsigned char blue = color &0xFF;

    printf("Alpha 값: 0x%X\n", alpha);
	printf("Red 값: 0x%X\n", red);
    printf("Green 값: 0x%X\n", green);
    printf("Blue 값: 0x%X\n", blue);
     
    return 0;
}