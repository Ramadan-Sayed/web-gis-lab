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
void deadline_challenge(){
    int allotted_time, taken_time;
    printf("Please, enter the number of days allotted for a project: ");
    scanf("%d",&allotted_time);

    printf("Please, enter the number of days taken to complete the project: ");
    scanf("%d",&taken_time);

    if(taken_time <= allotted_time)
        printf("Congratulations! You have met the deadline\n");
    else    
        printf("You have missed the deadline, Please try to complete tasks on time.\n");
}


int main(){
    deadline_challenge();
    main();


    return 0;
}