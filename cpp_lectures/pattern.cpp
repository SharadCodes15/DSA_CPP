// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
// 1 2 3 4 
#include <iostream>
using namespace std;
int main(){
    for (int i=0; i<4;i++){
        for (int j =0;j<4;j++){
            cout<<j+1<< " ";
        }
        cout<<endl;
    }
}



// A B C D 
// A B C D 
// A B C D 
// A B C D 
#include <iostream>
using namespace std;
int main(){
    char ch = 'A';
    for (int i=0; i<4;i++){
        for (int j =0;j<4;j++){
            cout<<ch<< " ";
            ch+=1;
        }
        ch = 'A';
        cout<<endl;
    }
}


// 1 2 3 4 
// 5 6 7 8 
// 9 10 11 12 
// 13 14 15 16 
// 
#include <iostream>
using namespace std;
int main(){
    int num = 1;
    for (int i=0; i<4;i++){
        for (int j =0;j<4;j++){
            cout<<num<< " ";
            num+=1;
        }
        cout<<endl;
    }
}



// *
// **
// ***
// ****

#include <iostream>
using namespace std;
int main(){
    int n =50;
    for (int i = 0;i<n;i++){
        for (int j = 0;j<i+1;j++){
            cout << "*";
        }
        cout <<endl;
    }
}


// 1
// 22
// 333
// 4444
// 55555

#include <iostream>
using namespace std;
int main(){
    int n =5;
    for (int i = 0;i<n;i++){
        for (int j = 0;j<i+1;j++){
            cout << i+1;
        }
        cout <<endl;
    }
}

// 1
// 12
// 123
// 1234
// 12345
#include <iostream>
using namespace std;
int main(){
    int n =5;
    for (int i = 0;i<n;i++){
        for (int j = 0;j<i+1;j++){
            cout << j+1;
            
        }
        cout <<endl;
    }
}


// 1
// 21
// 321
// 4321
// 54321
#include <iostream>
using namespace std;
int main(){
    int n =5;
    for (int i = 1;i<=n;i++){
        for (int j = i;j<=i && j>0;j--){
            cout << j;
        }
        cout <<endl;
    }
} 



// 1  
// 2  3  
// 4  5  6  
// 7  8  9  10  
// 11  12  13  14  15  
// 16  17  18  19  20  21  
#include <iostream>
using namespace std;
int main(){
    int n =5,num=1;
    for (int i = 0;i<=n;i++){
        for (int j = 0;j<i+1;j++){
            cout << num << "  ";
            num++;
        }
        cout <<endl;
    }
    return 0;
} 


// 1111
//  222
//   33
//    4
#include <iostream>
using namespace std;
int main(){
    int n =4;
    for (int i = 0;i<n;i++){
        for(int j = 0;j<i;j++){
            cout << " ";
        }
        for(int j = 0;j<n-i;j++){
            cout << (i+1);
        }
        cout << endl;
    }
    return 0;
} 



//    1
//   121
//  12321
// 1234321
#include <iostream>
using namespace std;
int main(){
    int n =4;
    for (int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j = 1;j<=i+1;j++){
            cout << j;
        }
        for(int j = i;j>0;j--){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}



//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *
#include <iostream>
using namespace std;
int main(){
    int n =4;
    for (int i = 0;i<n;i++){
        for(int j = 0;j<n-i-1;j++){
            cout << " ";
        }
        cout << "*";
        if(i!=0){
            for(int j = 0;j<2*i-1;j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (int i=0;i<n-1;i++){
        for(int j=0;j<i+1;j++){
            cout << " ";
        }
        cout << "*";
        if(i != n-2){

            for (int j=0;j<2*(n-i)-5;j++){
                cout << " ";
            }
            cout << "*";
        }
        cout<<endl;

    }

    return 0;
}

