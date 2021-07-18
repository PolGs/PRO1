#include <iostream>
using namespace std;

struct Racional{
    int num, den;
};

Racional racional(int n, int d){
    Racional r;
    r.num = n;
    r.den = d;
    if(n == 0){
        
        r.num = 0;
        r.den = 1;
    }
    return r;
    
}

int main(){
    int n,d;
    cin >> n >> d;
    cout << "NUM: " << racional(n,d).num << " DEN: " <<racional(n,d).den << endl;
}
