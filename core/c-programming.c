#include <stdio.h>


void binary_program(){
    int binary, decimal=0, y=1;
    printf("Enter a binary number: ");
    scanf("%d",&binary);
    printf("%d\n", binary);
    while(binary != 0){
        decimal += (binary%10)*y;
        binary /= 10;
        y *= 2;
    }
    printf("%d\n", decimal);
    
}


int main(){
    binary_program();



    return 0;
}