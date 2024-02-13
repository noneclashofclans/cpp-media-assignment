#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter x: ";
    cin>>x;
    int y;
    cout<<"Enter y:";
    cin>>y;
    int sum = x+y;
    if(x<6 && y<6){
        cout<<sum;
    }
}