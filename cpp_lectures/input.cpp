#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter the age : ";
    cin >> age;

    cout << "Your age is " << age << endl;

    // Arithmatic oparators
    cout << "sum = "<< 23+43<<endl;
    // simlarly other oparators works and 
    // + , - , * , / , % 

    // Relational Oparators
    cout << "check if 4 > 23  " << (4 > 23) <<endl;
    // if true --> 1 and for false --> 0
    // < , > ,==,!=

    //Logical Oparators
    // || --> OR , && --> AND , ! --> NOT

    // Unary oparators
    age = age + 1;
    int i=0;
    i = i+1;
    // --->  i++ --> first use then update Postincrement
    // --->  ++i --> first update then use Preincrement 
    

    i = i-1;
    // ---> i-- ---> first use then decrement 
    // ---> --i ---> first decrement then use


   return 0;
}