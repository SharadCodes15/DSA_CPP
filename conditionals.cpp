#include <iostream>
using namespace std;

int main(){
    int n = -4;
    if (n >0){
        cout << "N is positive \n";
    }
    else if(n = 0){
        cout << "N is zero \n";
    }
    else{
        cout << "N is negative \n";
    }

    // Q: Check the is Lowercase or upppercase
    char ch = 'A';
    if(ch >= 65 && ch <= 90){
        cout << "Character is Uppercase\n";
    }
    else{
        cout << "It is the Lowercase\n";
    }
    
    
    // Ternary condtion 
    // condition ? stt1 : stt2 ; 

    cout << (n >= 0 ? "pos" : "neg") <<endl;

    
    return 0;
}
