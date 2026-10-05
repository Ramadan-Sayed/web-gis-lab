#include <iostream>
#include <math.h>
using namespace std;


void right_rhombus_star(){
    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++)
            printf("  ");
        for(int j=0; j<n; j++)
            printf("* ");
        printf("\n");
    }
}
void left_rhombus_star(){
    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++)
            printf("  ");
        for(int j=0; j<n; j++)
            printf("* ");
        printf("\n");
    }
}
void rhombus_star(){
    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++)
            printf("  ");
        for(int j=0; j<n; j++)
            printf("* ");
        printf("\n");
    }
     for(int i=0; i<n; i++){
        for(int j=0; j<i; j++)
            printf("  ");
        for(int j=0; j<n; j++)
            printf("* ");
        printf("\n");
    }
}




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

void rectangle_star(){
    int length, width;
    printf("Please, enter length and width of rectangle: ");
    scanf("%d%d", &length, &width);
    for(int i=0; i<width; i++){
        for(int j=0; j<length; j++)
            printf("* ");
        printf("\n");
    }
}
void hollow_rectangle_star(){
    int length, width;
    printf("Please, enter length and width of rectangle: ");
    scanf("%d%d", &length, &width);
    for(int i=0; i<width; i++){
        for(int j=0; j<length; j++)
            if(i==0 || i==width-1 || j==0 || j==length-1)
                printf("* ");
            else    
                printf("  ");
        printf("\n");
    }
}

void right_triangle_star(){
    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++) 
            printf("* ");
        printf("\n");
    }
}
void merrored_right_triangle_star(){
    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++) 
            if(j<n-i-1)
                printf("  ");
            else
                printf("* ");
        printf("\n");
    }
}

void inverted_right_triangle_star(){
    int n; 
    printf("Please, enter a number: ");
    scanf("%d",&n);
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i; j++)
            printf("* ");
        printf("\n");
    }
    /*
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++)
            printf("* ");
        printf("\n");
    }
    */
}
void inverted_triangle_star(){
    int n; 
    printf("Please, enter a number: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            if(j<i) 
                printf("  ");
            else
                printf("* ");
        printf("\n");
    }
}

void exponential_increasing_star(){
    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0; j<pow(2,i); j++)
            printf("* ");
        printf("\n");
    }
}
void merrored_exponential_increasing_star(){
    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<pow(2,i); j++)
            printf("* ");
        printf("\n");
    }
}


int main(){
    rhombus_star();

    return 0;
}