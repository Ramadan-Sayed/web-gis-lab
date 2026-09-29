#include <iostream>
using namespace std;

void square_star(){
    int len;
    printf("Enter a side length");
    scanf("%d",&len);
    for(int i=0; i<len; i++){
        for(int j=0; j<len; j++)
            printf("* ");
        printf("\n");
    }
}


int main(){
    square_star();

    return 0;
}