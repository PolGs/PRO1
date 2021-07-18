#include <iostream>
using namespace std;
 
struct Racional {
    int num, den;
};
 
 
Racional racional (int n, int d) {
    Racional simp;
    if (n == 0) { //Si n = 0
        simp.num = 0;
        simp.den = 1;
        return simp;
    }
    if (d < 0) { //Si n != 0
        n = n * (-1);
        d = d * (-1);
    }
    for (int i = 2; i < 6; ++i) {
        while (n % i == 0 and d % i == 0) {
            n = n / i;
            d = d / i;
        }
    }
    simp.num = n;
    simp.den = d;
    return simp;
}
 
 
int main () {
    int n,d;
    Racional r;
    cin >> n >> d;
    r = racional(n,d);
    cout << r.num << "/" << r.den;
}