#include <iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 100){
        cout<<"The given year"<<year<<"is a leap year"<<endl;
    }else{
        cout<<"The given year "<<year<<" is not a leap year"<<endl;
    }
}