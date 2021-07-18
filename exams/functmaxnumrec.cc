#include <iostream>
#include <string>
using namespace std;

int num_max_digits(int a, int b){
    if(a==0 or b==0) return a+b;
    int max;
    if(a%10 > b%10) max=a%10;
    else max = b%10;
    return num_max_digits(a/10, b/10)*10 + max;
}

int main(){
    int a,b;
    while(cin >> a >> b){
        cout << num_max_digits(a,b)<<endl;
    }
}
