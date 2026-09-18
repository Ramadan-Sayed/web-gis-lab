#include <iostream>
using namespace std;


// Function to print even numbers from n to 1 recursively
void printNumbers(int n){
    if(n>0){
        if(n%2==0)
            cout<<n<<" ";
        printNumbers(n-1);
    }
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