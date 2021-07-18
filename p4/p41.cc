#include <iostream>
#include <cmath>
using namespace std;

int pwer(int a, int b){
    int sum = a;
    for(int i=1; i<b; ++i){
        sum = sum*a;
    }
    return sum;
}


int main(){
    cout.setf(ios::fixed); 
    cout.precision(6);
	int a;
	while(cin >> a){
	    cout << pwer(a,2)<<" "<<sqrt(a) << endl;

	}
}