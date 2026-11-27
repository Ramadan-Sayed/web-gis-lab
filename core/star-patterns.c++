#include <iostream>
#include <cmath>
#include <cstdlib>
#define M_PI 3.14159265358979323846
using namespace std;

void circle_star(){
    int radius;
    double x, y, dist;
    printf("Enter circle radius: ");
    scanf("%d", &radius);

    for(int i=0; i<=2*radius; i++){
        for(int j=0; j<=2*radius; j++){
            x = i-radius;
            y = j-radius;
            dist = sqrt(x*x*2.0 + y*y);
            if(dist >= radius-0.35 && dist <= radius+0.35)
                printf("* ");
            else 
                printf("  ");
        }
        printf("\n");
    }
}
void inside_circle_star(){
    int radius;
    double x, y, dist;
    printf("Enter circle radius: ");
    scanf("%d", &radius);

    for(int i=0; i<=2*radius; i++){
        for(int j=0; j<=2*radius; j++){
            x = i-radius;
            y = j-radius;
            dist = sqrt(x*x*2.0 + y*y);
            if(dist <= radius+0.35)
                printf("* ");
            else 
                printf("  ");
        }
        printf("\n");
    }
}
void concentric_circles_star(){
    int radius, step = 3;
    double x, y, dist;
    printf("Enter outer radius: ");
    scanf("%d", &radius);

    for(int i = 0; i <= 2 * radius; i++){
        for(int j = 0; j <= 2 * radius; j++){
            x = i - radius;
            y = j - radius;
            dist = sqrt(x * x * 2.0 + y * y);

            // رسم حلقات متداخلة على مسافات منتظمة من المركز
            int ring = (int)round(dist);
            if(ring > 0 && ring <= radius && ring % step == 0 && fabs(dist - ring) <= 0.35){
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void circle_compass_grid(){
    int radius;
    printf("Enter circle radius: ");
    scanf("%d", &radius);

    for(int i = 0; i <= 2 * radius; i++){
        for(int j = 0; j <= 2 * radius; j++){
            double x = i - radius;
            double y = j - radius;
            double dist = sqrt(x * x * 2.0 + y * y);

            int is_center = (i == radius && j == radius);
            int is_circle = (fabs(dist - radius) <= 0.35);
            int is_axis   = (i == radius || j == radius);
            int is_diag   = (i == j || (i + j) == 2 * radius);

            if(is_center){
                printf("+  ");
            }
            else if(is_circle){
                printf("*  ");
            }
            else if(is_axis){
                printf("|  ");
            }
            else if(is_diag){
                printf("#  ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
}

void upper_arc_star(){
    int radius;
    double x, y, dist;
    printf("Enter radius: ");
    scanf("%d", &radius);

    for(int i = 0; i <= 2 * radius; i++){
        char row_buf[256] = "";
        int pos = 0;
        int row_has_output = 0;

        for(int j = 0; j <= 2 * radius; j++){
            x = i - radius;
            y = j - radius;
            dist = sqrt(x * x * 2.0 + y * y);

            if(x <= 0 && fabs(dist - radius) <= 0.35){
                pos += sprintf(row_buf + pos, "*  ");
                row_has_output = 1;
            }
            else{
                pos += sprintf(row_buf + pos, "   ");
            }
        }

        if(row_has_output){
            printf("%s\n", row_buf);
        }
    }
}

void right_rhombus_star(){
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
void left_rhombus_star(){
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
void rhombus_star(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--){
        for (int j = 0; j < i; j++)
            printf("  ");
        for (int j = 0; j < n; j++)
            printf("* ");
        printf("\n");
    }
    for (int i = 0; i < n; i++){
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
            if (i == 0 || i == side - 1 || j == 0 || j == side-1)
                printf("*  ");
            else
                printf("   ");
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

void binary_number_triangle(){
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
void binary_hollow_rectangle(){
    int width, length, a=1;
    start:
    printf("Enter a Width and Length (length should be Odd number): ");
    scanf("%d%d", &width, &length);
    if(length%2==0)
        goto start;

    for(int i = 0; i < width; i++){ 
        for(int j = 0; j < length; j++){
            if (i == 0 || i == width - 1 || j == 0 || j == length - 1)
                printf("%d ", a);
            else
                printf("  ");
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
void binary_hollow_square(){
    int side, a=1;
    printf("Enter a side of square: ");
    scanf("%d", &side);
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++){
            
            if (i == 0 || i == side - 1 || j == 0 || j == side-1)
                printf("%d  ", a);
            else
                printf("   ");
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void binary_pyramid(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        int a =1;
        for (int j = 0; j <= n - i - 1; j++)
            printf("   ");
        for(int j=0; j<=2*i; j++){
            printf("%d  ", a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void reverse_binary_pyramid(){
    int n, a=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= n - i - 1; j++)
            printf("   ");
        for(int j=0; j<=2*i; j++){
            printf("%d  ", a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void binary_right_rhombus(){
    int n, a=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            printf("  ");
        for (int j = 0; j < n; j++){
            printf("%d  ", a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void binary_left_rhombus(){
    int n, a=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--){
        for (int j = 0; j < i; j++)
            printf("  ");
        for (int j = 0; j < n; j++){
            printf("%d  ", a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void binary_rhombus(){
    int n, a=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            printf("  ");
        for (int j = 0; j < n; j++){
            printf("%d  ", a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
    for (int i = n - 1; i >= 0; i--){
        for (int j = 0; j < i; j++)
            printf("  ");
        for (int j = 0; j < n; j++){
            printf("%d  ", a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void binary_plus_sign(){
    int n, a=1;
    start:
    printf("Enter a number (this number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if ( i==n/2 || j==n/2){
                printf("%d  ", a);
                a = !a;
            }
            else
                printf("   ");
        }
        a = i%2;
        printf("\n");
    }
}
void binary_main_diagonal_square(){
    int n, a=1;
    start:
    printf("Enter a number of square side (number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i == 0 || i == n-1  || j == i){
                printf("%d  ", a);
                a = !a;
            }
            else
                printf("   ");
        }
        a = i%2;
        printf("\n");
    }
}
void binary_anti_diagonal_square(){
    int n, a=1;
    start:
    printf("Enter a number of square side (number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i == 0 || i == n-1  || j == n-i-1){
                printf("%d  ", a);
                a = !a;
            }
            else
                printf("   ");
        }
        a = i%2;
        printf("\n");
    }
}
void binary_both_diagonal_square(){
    int n, a=1;
    start:
    printf("Enter a number of square side (number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i == 0 || i == n-1 || j == i || j == n-i-1){
                printf("%d  ", a);
                a = !a;
            }
            else
                printf("   ");
        }
        a = i%2;
        printf("\n");
    }
}
void binary_complex_cross(){
    int n, a=1;
    start:
    printf("Enter a number (this number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if ( j == i || j==n-i-1 || i==n/2 || j==n/2){
                printf("%d  ", a);
                a = !a;
            }
            else
                printf("   ");
        }
        a = i%2;
        printf("\n");
    }
}
void binary_square_with_diagonals(){
    int n, a=1;
    start:
    printf("Enter a number (this number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if ( i==0 || j==0 || j==n-1 || i==n-1 || j == i || j==n-i-1 ){
                printf("%d  ", a);
                a = !a;
            }
            else
                printf("   ");
        }
        a = i%2;
        printf("\n");
    }
}
void binary_square_with_plus(){
    int n, a=1;
    start:
    printf("Enter a number (this number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if ( i==0 || j==0 || j==n-1 || i==n-1 || i==n/2 || j==n/2 ){
                printf("%d  ", a);
                a = !a;
            }
            else
                printf("   ");
        }
        a = i%2;
        printf("\n");
    }
}
void binary_diagonals_with_plus(){
    int n, a=1;
    start:
    printf("Enter a number (this number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if ( j == i || j==n-i-1 || i==n/2 || j==n/2 ){
                printf("%d  ", a);
                a = !a;
            }
            else
                printf("   ");
        }
        a = i%2;
        printf("\n");
    }
}
void binary_diamond(){
    int n, a=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= n - i - 1; j++)
            printf("   ");
        for(int j=0; j<=2*i; j++){
                printf("%d  ", a);
                a = !a;
        }
        a = i%2;
        printf("\n");
    }
    for (int i=n-2; i>=0; i--){
        for (int j = 0; j <= n - i - 1; j++)
            printf("   ");
        for(int j=0; j<=2*i; j++){
                printf("%d  ", a);
                a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void binary_hollow_diamond(){
    int n, a=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        for (int j = 0; j <= n - i - 1; j++)
            printf("    ");
        for(int j=0; j<=2*i; j++){
            if(j==0 || j==2*i)
                printf("%d  ", a);
            else 
                printf("    ");
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
    for (int i=n-2; i>=0; i--){
        for (int j = 0; j <= n - i - 1; j++)
            printf("    ");
        for(int j=0; j<=2*i; j++){
            if(j==0 || j==2*i)
                printf("%d  ", a);
            else 
                printf("    ");
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void binary_number_exponential_increasing(){
    int n, a=1, row_length;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        row_length = (int)pow(2, i);
        for (int j=0; j<row_length; j++){
            printf("%d ", a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void binary_inverted_number_exponential_increasing(){
    int n, a=1;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n-1; i>=0; i--)
    {
        for (int j = 0; j < pow(2, i); j++){
            printf("%d ", a);
            a = !a;
        }
        a = i%2;
        printf("\n");
    }
}
void binary_circle(){
    int radius, a=1;
    double x, y, dist;
    printf("Enter circle radius: ");
    scanf("%d", &radius);

    for(int i=0; i<=2*radius; i++){
        for(int j=0; j<=2*radius; j++){
            x = i-radius;
            y = j-radius;
            dist = sqrt(x*x*2.0 + y*y);
            if(dist >= radius-0.35 && dist <= radius+0.35){
                printf("%d  ", a);
                a = !a;
            }
            else 
                printf("   ");
        }
        a = i%2;
        printf("\n");
    }
}
void binary_inside_circle(){
    int radius, a=1;
    double x, y, dist;
    printf("Enter circle radius: ");
    scanf("%d", &radius);

    for(int i = 0; i <= 2 * radius; i++){
        for(int j = 0; j <= 2 * radius; j++){
            x = i - radius;
            y = j - radius;
            dist = sqrt(x * x * 2.0 + y * y);

            if(dist <= radius + 0.35){
                printf("%d  ", a);
                a = !a;
            }
            else {
                printf("   ");
            }
        }
        a = i % 2;
        printf("\n");
    }
}
void binary_concentric_circles(){
    int radius, step = 3, a=1;
    double x, y, dist;
    printf("Enter outer radius: ");
    scanf("%d", &radius);

    for(int i = 0; i <= 2 * radius; i++){
        for(int j = 0; j <= 2 * radius; j++){
            x = i - radius;
            y = j - radius;
            dist = sqrt(x * x * 2.0 + y * y);

            // رسم حلقات متداخلة على مسافات منتظمة من المركز
            int ring = (int)round(dist);
            if(ring > 0 && ring <= radius && ring % step == 0 && fabs(dist - ring) <= 0.35){
                printf("%d  ", a);
                a = !a;
            }
            else {
                printf("   ");
            }
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
void palindrome_rectangle(){
    int width, length;
    start:
    printf("Enter a Width and Length (length should be Odd number): ");
    scanf("%d%d", &width, &length);
    if(length%2==0)
        goto start;

    for(int i = 0; i < width; i++){
        int a = 0; 
        int middle = length / 2; 
        for(int j = 0; j < length; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            printf("%c ", 'A' + a);
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_hollow_rectangle(){
    int width, length;
    start:
    printf("Enter a Width and Length (length should be Odd number): ");
    scanf("%d%d", &width, &length);
    if(length%2==0)
        goto start;

    for(int i = 0; i < width; i++){
        int a = 0; 
        int middle = length / 2; 
        for(int j = 0; j < length; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            if (i == 0 || i == width - 1 || j == 0 || j == length - 1)
                printf("%c ", 'A' + a);
            else
                printf("  ");
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
}
void symmetric_palindrome_matrix(){
    int width, length;
    start:
    printf("Enter Width and Length (both must be Odd numbers): ");
    scanf("%d%d", &width, &length);
    if(width % 2 == 0 || length % 2 == 0)
        goto start;

    int center_i = width / 2;
    int center_j = length / 2;
    for(int i = 0; i < width; i++){
        int dist_i = (i <= center_i) ? i : (width - 1 - i);
        for(int j = 0; j < length; j++){
            int dist_j = (j <= center_j) ? j : (length - 1 - j);
            int val = dist_i < dist_j ? dist_i : dist_j;
            val = val < 0 ? 0 : (val > 25 ? 25 : val);
            printf("%c ", 'A' + val);
        }
        printf("\n");
    }
}
void palindrome_square(){
    int n;
    start:
    printf("Enter a number of square side (number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        int a = 0; 
        int middle = n / 2; 
        for(int j = 0; j < n; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            printf("%c  ", 'A' + a);
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_hollow_square(){
    int n;
    start:
    printf("Enter a number of square side (number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        int a = 0; 
        int middle = n / 2; 
        for(int j = 0; j < n; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            if (i == 0 || i == n-1  || j == 0 || j == n-1)
                printf("%c  ", 'A' + a);
            else
                printf("   ");
            
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_anti_diagonal_square(){
    int n;
    start:
    printf("Enter a number of square side (number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        int a = 0; 
        int middle = n / 2; 
        for(int j = 0; j < n; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            if (i == 0 || i == n-1  || j == n-i-1)
                printf("%c  ", 'A' + a);
            else
                printf("   ");
            
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_main_diagonal_square(){
    int n;
    start:
    printf("Enter a number of square side (number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        int a = 0; 
        int middle = n / 2; 
        for(int j = 0; j < n; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            if (i == 0 || i == n-1  || j == i)
                printf("%c  ", 'A' + a);
            else
                printf("   ");
            
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_both_diagonal_square(){
    int n;
    start:
    printf("Enter a number of square side (number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        int a = 0; 
        int middle = n / 2; 
        for(int j = 0; j < n; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            if (i == 0 || i == n-1  || j == i || j==n-i-1)
                printf("%c  ", 'A' + a);
            else
                printf("   ");
            
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_both_diagonal(){
    int n;
    start:
    printf("Enter a number (this number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        int a = 0; 
        int middle = n / 2; 
        for(int j = 0; j < n; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            if (j == i || j==n-i-1)
                printf("%c  ", 'A' + a);
            else
                printf("   ");
            
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_plus_sign(){
    int n;
    start:
    printf("Enter a number (this number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        int a = 0; 
        int middle = n / 2; 
        for(int j = 0; j < n; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            if ( i==n/2 || j==n/2)
                printf("%c  ", 'A' + a);
            else
                printf("   ");
            
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_complex_cross(){
    int n;
    start:
    printf("Enter a number (this number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        int a = 0; 
        int middle = n / 2; 
        for(int j = 0; j < n; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            if ( j == i || j==n-i-1 || i==n/2 || j==n/2)
                printf("%c  ", 'A' + a);
            else
                printf("   ");
            
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_pyramid(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        int a = 0; 
        for (int j = 0; j <= n - i - 1; j++)
            printf("   ");
        for(int j=0; j<=2*i; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            printf("%c  ", 'A' + a);
            a += j<i? 1: -1;
        }
        printf("\n");
    }
}
void inverted_palindrome_pyramid(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i=n-1; i>=0; i--){
        int a = 0; 
        for (int j = 0; j <= n - i - 1; j++)
            printf("   ");
        for(int j=0; j<=2*i; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            printf("%c  ", 'A' + a);
            a += j<i? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_diamond(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        int a = 0; 
        for (int j = 0; j <= n - i - 1; j++)
            printf("   ");
        for(int j=0; j<=2*i; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            printf("%c  ", 'A' + a);
            a += j<i? 1: -1;
        }
        printf("\n");
    }
    for (int i=n-1; i>=0; i--){
        int a = 0; 
        for (int j = 0; j <= n - i - 1; j++)
            printf("   ");
        for(int j=0; j<=2*i; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            printf("%c  ", 'A' + a);
            a += j<i? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_hollow_diamond(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        int a = 0; 
        for (int j = 0; j <= n - i - 1; j++)
            printf("    ");
        for(int j=0; j<=2*i; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            if(j==0 || j==2*i)
                printf("%c  ", 'A' + a);
            else 
                printf("    ");
            a += j<i? 1: -1;
        }
        printf("\n");
    }
    for (int i=n-1; i>=0; i--){
        int a = 0; 
        for (int j = 0; j <= n - i - 1; j++)
            printf("    ");
        for(int j=0; j<=2*i; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            if(j==0 || j==2*i)
                printf("%c  ", 'A' + a);
            else 
                printf("    ");
            a += j<i? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_number_exponential_increasing(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        int a=0;
        int row_length = (int)pow(2, i);
        int middle = row_length / 2;
        for (int j=0; j<row_length; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            printf("%c  ", 'A' + a);
            a += (j < middle) ? 1 : -1;
        }
        printf("\n");
    }
}
void palindrome_left_rhombus(){
    int n, a, middle;
    start:
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++)
            printf("  ");
        a =0;
        middle = n / 2; 
        for(int j = 0; j < n; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            printf("%c  ", 'A' + a);
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_right_rhombus(){
    int n, a, middle;
    start:
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for (int i = n-1; i>=0; i--){
        for (int j = 0; j < i; j++)
            printf("  ");
        a =0;
        middle = n / 2; 
        for (int j = 0; j < n; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            printf("%c  ", 'A' + a);
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_rhombus(){
    int n, a, middle;
    start:
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++)
            printf("  ");
        a =0;
        middle = n / 2; 
        for(int j = 0; j < n; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            printf("%c  ", 'A' + a);
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
    
    for (int i = n-1; i>=0; i--){
        for (int j = 0; j < i; j++)
            printf("  ");
        a =0;
        middle = n / 2; 
        for (int j = 0; j < n; j++){
            a = a<0 ? 0: (a>25 ? 25 : a);
            printf("%c  ", 'A' + a);
            a += j<middle? 1: -1;
        }
        printf("\n");
    }
}
void palindrome_circle(){
    int radius;
    double x, y, dist;
    printf("Enter circle radius: ");
    scanf("%d", &radius);

    for(int i = 0; i <= 2 * radius; i++){
        for(int j = 0; j <= 2 * radius; j++){
            x = i - radius;
            y = j - radius;
            dist = sqrt(x * x * 2.0 + y * y);

            if(dist >= radius - 0.35 && dist <= radius + 0.35){
                // المسافة من المنتصف الأفقي تضمن التناظر يميناً ويساراً
                int offset = radius - abs(j - radius);
                if(offset < 0) offset = 0;
                if(offset > 25) offset = 25;

                printf("%c  ", 'A' + offset);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void palindrome_inside_circle(){
    int radius;
    double x, y, dist;
    printf("Enter circle radius: ");
    scanf("%d", &radius);

    for(int i = 0; i <= 2 * radius; i++){
        for(int j = 0; j <= 2 * radius; j++){
            x = i - radius;
            y = j - radius;
            dist = sqrt(x * x * 2.0 + y * y);

            if(dist <= radius + 0.35){
                // تناظر متماثل حول المنتصف الأفقي (j == radius)
                int offset = radius - abs(j - radius);
                if(offset < 0) offset = 0;
                if(offset > 25) offset = 25;

                printf("%c  ", 'A' + offset);
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void palindrome_concentric_circles(){
    int radius, step = 3;
    double x, y, dist;
    printf("Enter outer radius: ");
    scanf("%d", &radius);

    for(int i = 0; i <= 2 * radius; i++){
        for(int j = 0; j <= 2 * radius; j++){
            x = i - radius;
            y = j - radius;
            dist = sqrt(x * x * 2.0 + y * y);

            // رسم حلقات متداخلة على مسافات منتظمة من المركز
            int ring = (int)round(dist);
            if(ring > 0 && ring <= radius && ring % step == 0 && fabs(dist - ring) <= 0.35){
                // تناظر متماثل حول المنتصف الأفقي (j == radius)
                int offset = radius - abs(j - radius);
                if(offset < 0) offset = 0;
                if(offset > 25) offset = 25;

                printf("%c  ", 'A' + offset);
            }
            else {
                printf("   ");
            }
        }
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
void prime_number_rhombus(){
    int n, x=2;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--){
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
void inverted_prime_number_rhombus(){
    int n, x=2;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--){
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
            x--;
        }
        printf("\n");
    }
}
void prime_number_pyramid(){
    int n, x=2;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
            printf("  ");
        for(int j=0; j<=i;){
            if(is_prime(x)){
                printf("%d  ", x);
                j++;
            }
            x++;
        }

        printf("\n");
    }
}
void inverted_prime_number_pyramid(){
    int n, x=2;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n-1; i>=0; i--){
        for (int j = 0; j <= n - i - 1; j++)
            printf("  ");
        for(int j=0; j<=i;){
            if(is_prime(x)){
                printf("%d  ", x);
                j++;
            }
            x++;
        }

        printf("\n");
    }
}
void prime_number_diamond(){
    int n, x=2;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n / 2; i++){
        for (int j = 0; j <= n - i - 1; j++)
            printf("  ");
        for(int j=0; j<=i;){
            if(is_prime(x)){
                printf("%d  ", x);
                j++;
            }
            x++;
        }
        printf("\n");
    }

    for (int i = n / 2; i >= 0; i--){
        for (int j = 0; j <= n - i - 1; j++)
            printf("  ");
        for(int j=0; j<=i;){
            if(is_prime(x)){
                printf("%d  ", x);
                j++;
            }
            x++;
        }
        printf("\n");
    }
}
void prime_number_hollow_diamond(){
    int n, x = 2;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < (n / 2) - i; j++)
            printf("  ");
        for (int j = 0; j <= 2 * i; j++) {
            if (j == 0 || j == 2 * i) {
                while (!is_prime(x)) {
                    x++;
                }
                if(x<=9)
                    printf("0%d ", x);
                else
                    printf("%d ", x);
                x++;
            } else {
                printf("    "); 
            }
        }
        printf("\n");
    }

    for (int i = n / 2; i >= 0; i--) {
        for (int j = 0; j < (n / 2) - i; j++)
            printf("  ");

        for (int j = 0; j <= 2 * i; j++) {
            if (j == 0 || j == 2 * i) {
                while (!is_prime(x)) {
                    x++;
                }
                if(x<=9)
                    printf("0%d ", x);
                else
                    printf("%d ", x);
                x++;
            } 
            else {
                printf("    "); 
            }
        }
        printf("\n");
    }
}
void prime_number_exponential_increasing(){
    int n, x=2;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < pow(2, i); j++){
            while (!is_prime(x)) 
                    x++;
            printf("%d  ", x);
            x++;
        }
        printf("\n");
    }
}
void inverted_prime_number_exponential_increasing(){
    int n, x=2;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n-1; i>=0; i--)
    {
        for (int j = 0; j < pow(2, i); j++){
            while (!is_prime(x)) 
                    x++;
            printf("%d  ", x);
            x++;
        }
        printf("\n");
    }
}
void prime_main_diagonal_square(){
    int n, x=2;
    start:
    printf("Enter a number of square side (number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i == 0 || i == n-1  || j == i){
                while (!is_prime(x)) 
                        x++;
                printf("%d  ", x);
                x++;
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}
void prime_anti_diagonal_square(){
    int n, x=2;
    start:
    printf("Enter a number of square side (number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i == 0 || i == n-1  || j == n-i-1){
                while (!is_prime(x)) 
                        x++;
                printf("%d  ", x);
                x++;
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}
void prime_both_diagonal_square(){
    int n, x=2;
    start:
    printf("Enter a number of square side (number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (i == 0 || i == n-1 || j == i || j == n-i-1){
                while (!is_prime(x)) 
                        x++;
                printf("%d  ", x);
                x++;
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}
void prime_both_diagonals(){
    int n, x=2;
    start:
    printf("Enter a number (this number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if ( j == i || j==n-i-1 ){
                while (!is_prime(x)) 
                    x++;
                printf("%d  ", x);
                x++;
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}
void prime_plus_sign(){
    int n, x=2;
    start:
    printf("Enter a number (this number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if ( i==n/2 || j==n/2){
                while (!is_prime(x)) 
                    x++;
                printf("%d  ", x);
                x++;
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}
void prime_diagonals_with_plus(){
    int n, x=2;
    start:
    printf("Enter a number (this number should be Odd number): ");
    scanf("%d", &n);
    if(n%2==0)
        goto start;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if ( j == i || j==n-i-1 || i==n/2 || j==n/2 ){
                while (!is_prime(x)) 
                    x++;
                printf("%d  ", x);
                x++;
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}
void prime_circle(){
    int radius, a=2;
    double x, y, dist;
    printf("Enter circle radius: ");
    scanf("%d", &radius);

    for(int i=0; i<=2*radius; i++){
        for(int j=0; j<=2*radius; j++){
            x = i-radius;
            y = j-radius;
            dist = sqrt(x*x*2.0 + y*y);
            if(dist >= radius-0.35 && dist <= radius+0.35){
                while (!is_prime(a)) 
                        a++;
                printf("%d  ", a);
                a++;
            }
            else 
                printf("  ");
        }
        printf("\n");
    }
}
void prime_inside_circle(){
    int radius, a=2;
    double x, y, dist;
    printf("Enter circle radius: ");
    scanf("%d", &radius);

    for(int i=0; i<=2*radius; i++){
        for(int j=0; j<=2*radius; j++){
            x = i-radius;
            y = j-radius;
            dist = sqrt(x*x*2.0 + y*y);
            if(dist <= radius+0.35){
                while (!is_prime(a)) 
                        a++;
                printf("%d  ", a);
                a++;
            }
            else 
                printf("  ");
        }
        printf("\n");
    }
}
void prime_concentric_circles(){
    int radius, step = 3, a=2;
    double x, y, dist;
    printf("Enter outer radius: ");
    scanf("%d", &radius);

    for(int i = 0; i <= 2 * radius; i++){
        for(int j = 0; j <= 2 * radius; j++){
            x = i - radius;
            y = j - radius;
            dist = sqrt(x * x * 2.0 + y * y);

            // رسم حلقات متداخلة على مسافات منتظمة من المركز
            int ring = (int)round(dist);
            if(ring > 0 && ring <= radius && ring % step == 0 && fabs(dist - ring) <= 0.35){
                while (!is_prime(a)) 
                        a++;
                printf("%d  ", a);
                a++;
            }
            else {
                printf("   ");
            }
        }
        printf("\n");
    }
}
void upper_arc_prime(){
    int radius, prime_val = 2;
    double x, y, dist;
    printf("Enter radius: ");
    scanf("%d", &radius);

    for(int i = 0; i <= 2 * radius; i++){
        int row_has_output = 0;

        for(int j = 0; j <= 2 * radius; j++){
            x = i - radius;
            y = j - radius;
            dist = sqrt(x * x * 2.0 + y * y);

            if(x <= 0 && fabs(dist - radius) <= 0.35){
                while(!is_prime(prime_val)){
                    prime_val++;
                }
                printf("%-3d", prime_val);
                prime_val++;
                row_has_output = 1;
            }
            else{
                printf("   ");
            }
        }

        if(row_has_output){
            printf("\n");
        }
    }
}
void hybrid_circle_compass_grid(){
    int radius;
    printf("Enter circle radius: ");
    scanf("%d", &radius);

    int prime_val = 2;
    int bin_val = 1;

    for(int i = 0; i <= 2 * radius; i++){
        for(int j = 0; j <= 2 * radius; j++){
            double x = i - radius;
            double y = j - radius;
            double dist = sqrt(x * x * 2.0 + y * y);

            int is_center = (i == radius && j == radius);
            int is_circle = (fabs(dist - radius) <= 0.35);
            int is_axis   = (i == radius || j == radius);
            int is_diag   = (i == j || (i + j) == 2 * radius);

            if(is_center){
                printf("+  ");
            }
            else if(is_circle){
                while(!is_prime(prime_val)){
                    prime_val++;
                }
                printf("%d  ", prime_val);
                prime_val++;
            }
            else if(is_axis){
                int dist_from_center = (i == radius) ? abs(j - radius) : abs(i - radius);
                int offset = radius - dist_from_center;
                if(offset < 0) offset = 0;
                if(offset > 25) offset = 25;

                printf("%c  ", 'A' + offset);
            }
            else if(is_diag){
                printf("%d  ", bin_val);
                bin_val = !bin_val;
            }
            else{
                printf("   ");
            }
        }
        bin_val = i % 2;
        printf("\n");
    }
}

static int next_prime_from(int *p) {
    while (1) {
        int val = *p;
        (*p)++;
        if (val < 2) continue;
        int prime = 1;
        for (int d = 2; d * d <= val; d++) {
            if (val % d == 0) {
                prime = 0;
                break;
            }
        }
        if (prime) return val;
    }
}
// type: 1 = star (*), 2 = binary (0/1), 3 = prime, 4 = palindrome ('A'..)
// is_cosine: 0 = sine, 1 = cosine
void wave_pattern_core(int is_cosine, int type, int amplitude, int cycles, double step_scale) {
    int width = (int)(cycles * 2.0 * M_PI / step_scale);
    if (width < 10) width = 40;

    int prime_val = 2;
    int bin_val = 1;

    for (int i = 0; i <= 2 * amplitude; i++) {
        for (int j = 0; j <= width; j++) {
            double angle = j * step_scale;
            double trig_val = is_cosine ? cos(angle) : sin(angle);
            double wave_row = amplitude - trig_val * amplitude;

            if (fabs((double)i - wave_row) <= 0.45) {
                if (type == 1) {
                    printf("%-3c", '*');
                } else if (type == 2) {
                    printf("%-3d", bin_val);
                    bin_val = !bin_val;
                } else if (type == 3) {
                    int p = next_prime_from(&prime_val);
                    printf("%-3d", p);
                } else if (type == 4) {
                    int offset = amplitude - abs(i - amplitude);
                    if (offset < 0) offset = 0;
                    if (offset > 25) offset = 25;
                    printf("%-3c", 'A' + offset);
                }
            } else {
                printf("   ");
            }
        }
        if (type == 2) {
            bin_val = i % 2;
        }
        printf("\n");
    }
}
void sine_wave_pattern() {
    int amplitude, cycles, mode;
    printf("Enter amplitude (e.g. 5): ");
    scanf("%d", &amplitude);
    printf("Enter number of cycles (e.g. 2): ");
    scanf("%d", &cycles);
    printf("Choose style (1: Star, 2: Binary, 3: Prime, 4: Palindrome): ");
    scanf("%d", &mode);

    wave_pattern_core(0, mode, amplitude, cycles, 0.15);
}
void cosine_wave_pattern() {
    int amplitude, cycles, mode;
    printf("Enter amplitude (e.g. 5): ");
    scanf("%d", &amplitude);
    printf("Enter number of cycles (e.g. 2): ");
    scanf("%d", &cycles);
    printf("Choose style (1: Star, 2: Binary, 3: Prime, 4: Palindrome): ");
    scanf("%d", &mode);

    wave_pattern_core(1, mode, amplitude, cycles, 0.15);
}

static int matches_half_dir(int dir, double x, double y) {
    switch (dir) {
        case 1: return x <= 0.0; // علوي (قبة)
        case 2: return x >= 0.0; // سفلي
        case 3: return y >= 0.0; // أيمن
        case 4: return y <= 0.0; // أيسر
        default: return x <= 0.0;
    }
}
void directional_half_circle() {
    int radius, dir, filled;
    printf("Enter radius: ");
    scanf("%d", &radius);
    printf("Direction (1: Top/Dome, 2: Bottom, 3: Right, 4: Left): ");
    scanf("%d", &dir);
    printf("Style (0: Hollow, 1: Filled): ");
    scanf("%d", &filled);

    for (int i = 0; i <= 2 * radius; i++) {
        for (int j = 0; j <= 2 * radius; j++) {
            double x = i - radius;
            double y = j - radius;
            double dist = sqrt(x * x * 2.0 + y * y);

            int in_shape = filled ? (dist <= radius + 0.35) : (fabs(dist - radius) <= 0.35);

            if (matches_half_dir(dir, x, y) && in_shape) {
                printf("%-3c", '*');
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
}

static int get_next_prime(int *p) {
    while (1) {
        int val = (*p)++;
        if (val < 2) continue;
        int ok = 1;
        for (int d = 2; d * d <= val; d++) {
            if (val % d == 0) { ok = 0; break; }
        }
        if (ok) return val;
    }
}

int main(){   
    directional_half_circle();

    

    return 0;
}