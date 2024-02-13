#include <iostream>
using namespace std;
int main(){
    char a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    int d = int (a)- int (b);
    cout<<"The difference of the ASCII values are: " <<" "<< d;
}