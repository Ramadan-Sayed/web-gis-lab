#include <iostream>
using namespace std;

void square_star(){
    int side;
    printf("Enter a side length");
    scanf("%d",&side);
    for(int i=0; i<side; i++){
        for(int j=0; j<side; j++)
            printf("* ");
        printf("\n");
    }
}
void hollow_square_star(){
    int side;
    printf("Enter a side of square: ");
    scanf("%d",&side);
    for(int i=0; i<side; i++){
        for(int j=0; j<side; j++)
            if(i==0 || i==side-1 || j==0 || j==side)
                printf("* ");
            else   
                printf("  ");
        printf("\n");
    }
}


int main(){
    square_star();

    return 0;
}