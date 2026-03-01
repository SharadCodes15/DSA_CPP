#include <iostream>
using namespace std;

int main(){
    // Loops :
    //         For
    //         While
    //         Do while

    // Printing 1 to 10 in each type of loop 

    int i =0;
    int target = 10;
    while(i<10){
        cout << i+1 << endl;
        i++;
    }


    for(int j = 10; j > 0; j--){
        cout << j << endl;
    }

    i = 0;
    do{
        i++;
        cout << i << endl;
    }while (i < target);
    
}