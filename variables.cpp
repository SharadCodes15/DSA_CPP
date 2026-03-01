#include <iostream>
using namespace std;

int main(){
    int age = 23; // 4 bytes
    char grade = 'a';  // 1 byte
    float PI  = 34.453; // 4 bytes
    bool isSafe = true; // 1 byte
    long num = 23434252345; // 8 bytes
    double numDouble = 2342.23423; //8 bytes

    cout << age << " = age\n";
    cout << grade << " = grade\n";
    cout << PI << " = PI\n";
    cout << isSafe << " = isSafe\n";
    cout << num << " = num\n";
    cout << numDouble << " = numDouble\n";

    // TypeCasting
    char grade_a = 'a';
    int val = grade_a; // Implicit
    cout << val <<"val of grade_a is ascii" << endl;

    double price = 123.345;
    int price_val= (int) price;
    cout << price_val << "price value" << endl;
    

    return 0;
} 