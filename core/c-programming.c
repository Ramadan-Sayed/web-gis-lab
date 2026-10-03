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
    printf("%o\n", decimal);
    printf("%x   %X\n", decimal, decimal);
    
}
void convert_decimals(){
    int decimal, binary=0, y=1, remainder;
    printf("Enter a decimal number: ");
    scanf("%d",&decimal);
    for(int i=0; decimal; i++){
       binary += (decimal%2)*y;
       decimal /= 2;
       y *= 10;
    }
    printf("%d\n",binary);
}



int main(){
    convert_decimals();
    main();


    return 0;
}