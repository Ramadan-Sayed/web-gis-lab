#include <iostream>
#include <math.h>
using namespace std;

void right_rhombus_star()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            printf("  ");
        for (int j = 0; j < n; j++)
            printf("* ");
        printf("\n");
    }
}
void left_rhombus_star()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
            printf("  ");
        for (int j = 0; j < n; j++)
            printf("* ");
        printf("\n");
    }
}
void rhombus_star()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
            printf("  ");
        for (int j = 0; j < n; j++)
            printf("* ");
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            printf("  ");
        for (int j = 0; j < n; j++)
            printf("* ");
        printf("\n");
    }
}

void square_star()
{
    int side;
    printf("Enter a side length");
    scanf("%d", &side);
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
            printf("* ");
        printf("\n");
    }
}
void hollow_square_star()
{
    int side;
    printf("Enter a side of square: ");
    scanf("%d", &side);
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
            if (i == 0 || i == side - 1 || j == 0 || j == side)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
}
void binary_square(){
    int n, a=1;
    printf("Please, enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("%d ", !a);
            else
                printf("%d ", a);
        printf("\n");
    }
}
void binary_side_square(){
    int n, a=1;
    printf("Please, enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n; j++)
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
                printf("%d ", a);
            else
                printf("%d ", !a);
        printf("\n");
    }
}

void rectangle_star()
{
    int length, width;
    printf("Please, enter length and width of rectangle: ");
    scanf("%d%d", &length, &width);
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
            printf("* ");
        printf("\n");
    }
}
void hollow_rectangle_star()
{
    int length, width;
    printf("Please, enter length and width of rectangle: ");
    scanf("%d%d", &length, &width);
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
            if (i == 0 || i == width - 1 || j == 0 || j == length - 1)
                printf("* ");
            else
                printf("  ");
        printf("\n");
    }
}
void binary_rectangle(){
    int length, width, a=1;
    printf("Please, enter length and width of rectangle: ");
    scanf("%d%d", &length, &width);
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
            if (i == 0 || i == width - 1 || j == 0 || j == length - 1)
                printf("%d ", !a);
            else
                printf("%d ", a);
        printf("\n");
    }
}
void binary_side_rectangle(){
    int length, width, a=1;
    printf("Please, enter length and width of rectangle: ");
    scanf("%d%d", &length, &width);
    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++)
            if (i == 0 || i == width - 1 || j == 0 || j == length - 1)
                printf("%d ", a);
            else
                printf("%d ", !a);
        printf("\n");
    }
}

void right_triangle_star()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
            printf("* ");
        printf("\n");
    }
}
void merrored_right_triangle_star()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (j < n - i - 1)
                printf("  ");
            else
                printf("* ");
        printf("\n");
    }
}

void inverted_right_triangle_star()
{
    int n;
    printf("Please, enter a number: ");
    scanf("%d", &n);
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i; j++)
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
void inverted_triangle_star()
{
    int n;
    printf("Please, enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (j < i)
                printf("  ");
            else
                printf("* ");
        printf("\n");
    }
}

void exponential_increasing_star()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < pow(2, i); j++)
            printf("* ");
        printf("\n");
    }
}
void merrored_exponential_increasing_star()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < pow(2, i); j++)
            printf("* ");
        printf("\n");
    }
}

void pyramid_star()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
            printf("  ");
        for (int j = 0; j < 2 * i + 1; j++)
            printf("* ");

        printf("\n");
    }
}
void hollow_pyramid_star()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 1; j <= n - i - 1; j++)
            printf("  ");
        for (int j = 0; j < 2 * i + 1; j++)
            if (j == 0 || j == 2 * i)
                printf("* ");
            else
                printf("  ");

        printf("\n");
    }
    for (int i = 0; i < 2 * n - 1; i++)
        printf("* ");
}

void inverted_pyramid_star()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= n - i - 1; j++)
            printf("  ");
        for (int j = 0; j < 2 * i + 1; j++)
            printf("* ");

        printf("\n");
    }
}
void inverted_hollow_pyramid_star()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i < 2 * n - 1; i++)
        printf("* ");
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 1; j <= n - i - 1; j++)
            printf("  ");
        for (int j = 0; j < 2 * i + 1; j++)
            if (j == 0 || j == 2 * i)
                printf("* ");
            else
                printf("  ");

        printf("\n");
    }
}

void diamond_star()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
            printf("  ");
        for (int j = 0; j < 2 * i + 1; j++)
            printf("* ");

        printf("\n");
    }

    for (int i = n / 2; i >= 0; i--)
    {
        for (int j = 0; j <= n - i - 1; j++)
            printf("  ");
        for (int j = 0; j < 2 * i + 1; j++)
            printf("* ");

        printf("\n");
    }
}
void hollow_diamond_star()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 1; j <= n - i - 1; j++)
            printf("  ");
        for (int j = 0; j < 2 * i + 1; j++)
            if (j == 0 || j == 2 * i)
                printf("* ");
            else
                printf("  ");

        printf("\n");
    }

    for (int i = n / 2; i >= 0; i--)
    {
        for (int j = 1; j <= n - i - 1; j++)
            printf("  ");
        for (int j = 0; j < 2 * i + 1; j++)
            if (j == 0 || j == 2 * i)
                printf("* ");
            else
                printf("  ");

        printf("\n");
    }
}

void natural_number_triangle(){
    int n, a=1; 
    printf("Enter a number: ");
    scanf("%d",&n);


    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++)
            printf("%d ",a++);
        printf("\n");
    }
}
void inverted_natural_number_triangle(){
    int n, a=1; 
    printf("Enter a number: ");
    scanf("%d",&n);


    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i; j++)
            printf("%d ",a++);
        printf("\n");
    }
}

void same_number_row(){
    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++)
            printf("%d ", i+1);
        printf("\n");
    }
}
void inverted_same_number_row(){
    int n; 
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i; j++)
            printf("%d ", i+1);
        printf("\n");
    }
}

void multiplication_table_triangle(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++)
            printf("%d ",i*j);
        printf("\n");
    }
}
void inverted_multiplication_table_triangle(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i; j++)
            printf("%d ",i*j);
        printf("\n");
    }
}

void binary_number_triangle()
{
    int n, a=1, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            printf("%d ", a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void inverted_binary_number_triangle(){
    int n, a=1, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i=n-1; i>=0; i--){
        for(int j=0; j<=i; j++){
            printf("%d ", a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void binary_number_rectangle(){
    int length, width, a=1, i;
    printf("Please, enter length and width of rectangle: ");
    scanf("%d%d", &length, &width);

    for (int i = 0; i < width; i++){
        for (int j = 0; j < length; j++){
            printf("%d ", a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void inverted_binary_number_rectangle(){
    int length, width, a=1, i;
    printf("Please, enter length and width of rectangle: ");
    scanf("%d%d", &length, &width);

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < length; j++){
            printf("%d ", !a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void binary_number_square(){
    int n, a=1, i;
    printf("Please, enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++){
            printf("%d ", !a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void inverted_binary_number_square(){
    int n, a=1, i;
    printf("Please, enter a number: ");
    scanf("%d", &n);

    for (int i = n-1; i>=0; i--)
    {
        for (int j = 0; j < n; j++){
            printf("%d ", a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}


void palindrome_triangle(){
    int n, a=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=0; i<2*n; i+=2){
        for(int j=0; j<=i; j++){
            printf("%c ", 'A'+a);
            a += j<i/2? 1: -1;
        }
        a=0;
        printf("\n");
    }
}
void inverted_palindrome_triangle(){
    int n, a=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=2*n-2; i>=0; i-=2){
        for(int j=0; j<=i; j++){
            printf("%c ", 'A'+a);
            a += j<i/2? 1: -1;
        }
        a=0;
        printf("\n");
    }
}

bool is_prime(int n){
    if(n<=1)
        return false;
    for(int i=2; i*i<=n; i++)
        if(n%i==0)
            return false;
    return true;
}
void prime_number_triangle(){
    int n, x=2;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0; j<=i;){
            if(is_prime(x)){
                printf("%d ", x);
                 j++;
            }
            x++;
        }
        printf("\n");
    }
}
void prime_number_rectangle(){
    int width, length, x=2;
    printf("Enter a Width and Length: ");
    scanf("%d%d",&width, &length);

    for(int i=0; i<width; i++){
        for(int j=0; j<length;){
            if(is_prime(x)){
                if(x<=9)
                    printf("%d%d    ", 0, x);
                else
                    printf("%d    ", x);
                 j++;
            }
            x++;
        }
        printf("\n");
    }
}
void prime_number_square(){
    int n, x=2;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int j=0; j<n;){
            if(is_prime(x)){
                if(x<=9)
                    printf("%d%d    ", 0, x);
                else
                    printf("%d    ", x);
                j++;
            }
            x++;
        }
        printf("\n");
    }
}
void prime_number_right_rhombus(){
    int n, x=2;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++)
            printf("  ");
        for(int j=0; j<n;){
            if(is_prime(x)){
                if(x<=9)
                    printf("%d%d    ", 0, x);
                else
                    printf("%d    ", x);
                j++;
            }
            x++;
        }
        printf("\n");
    }
}
void prime_number_left_rhombus(){
    int n, x=2;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n-1; i>=0; i--){
        for (int j = 0; j < i; j++)
            printf("  ");
        for(int j=0; j<n;){
            if(is_prime(x)){
                if(x<=9)
                    printf("%d%d    ", 0, x);
                else
                    printf("%d    ", x);
                j++;
            }
            x++;
        }
        printf("\n");
    }
}



int main()
{
    prime_number_right_rhombus();
    printf("\n");
    prime_number_left_rhombus();
    // main();

    return 0;
}