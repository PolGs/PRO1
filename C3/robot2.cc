



#include <iostream>
using namespace std;

//MINIMUM OF THREE DIFFERENT INTEGERS
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    
    if ((a < b) & (a < c)){
        cout << a << endl;
        
    }
    
   if ((c < b) & (c < a)){
        cout << c << endl;
        
    }
    