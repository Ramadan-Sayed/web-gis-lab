#include <iostream>
using namespace std;

/*
    Recursion Part 1: 
*/
//Function to print numbers from n to 1:
void fun(int n){
    if(n==0)            //base case
        return ;
    print("%d\n",n);
    fun(n-1);
}

// تعديل بسيط على الدالة السابقة لطباعة الارقام من الاصغر إلى الاكبر 
                void fun(int n){
                    if(n==0)            //base case
                        return ;
                    fun(n-1);
                    print("%d\n",n);
                }





// Function to print even numbers from n to 1 recursively:
void printNumbers(int n){
    if(n>0){
        if(n%2==0)
            cout<<n<<" ";
        printNumbers(n-1);
    }
}                  

// Function to Fibonacci Series:
int fibonacciPhase1(int n){
    int num1=0, num2=1, current=0;
    
    for(int i=2; i<=n; i++) {
        current = num1 + num2;
        num2 = num1;
        num1 = current;
    }
    return current;
}
// By recursion: 
                int fibonacciPhase2 (int n){
                    if(n<=1)
                        return n;
                    else
                        return fibonacci(n-1)+fibonacci(n-2);
                }





int main (){
    int num;

    //Input: Get an integer from the user
    cout << "Enter a number: ";
    cin >> num;

    //Output: Display even numbers from N to 1
    cout << "Even number from " << num << " to 1: ";
    printNumbers(num);
    cout << endl;

    return 0; 
}