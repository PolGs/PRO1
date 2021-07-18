#include <iostream>
using namespace std;

int binary2octal(int n) {
    if(n == 0) return 0;
    else{
        int a = n%10 + (n/10%10)*2 + (n/100%10)*4;
        return binary2octal(n/1000)*10 + a;
    }
}

int main(){
    int n;
    while (cin >> n){
        cout  << n << " is equivalent to " << binary2octal(n);
        cout  << " in base 8" << endl;
    }    
}
