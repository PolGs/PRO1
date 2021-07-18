#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        bool wordeqdonald = false;
        int count = 0;
        for(int i=0; i<n; ++i){
            string s;
            cin >> s;
            if(wordeqdonald and s == "trump") count++;            
            if(s == "donald") wordeqdonald = true;
            else wordeqdonald = false;
        }
        cout << count << endl;
    }
}
