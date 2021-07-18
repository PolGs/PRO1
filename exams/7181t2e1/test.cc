#include <iostream>
#include <vector>
using namespace std;

int count_elements(const vector<int>& v, int x) {
    int count=0;
    int n = v.size()-1
    for(int i=0; i<n; ++i){
        if(v[i]==x)count++;
    }
    return count;
}

vector<int> read_vector(int n) {
    vector<int> v(n);
    int m=0;
    for(int i=0; i<n; ++i){
        cin >> m;
        v.push_back(m);
    }
    return v;
}

int main(){
    vector<int> w = read_vector(3)
    for(int i=0; i<3; ++i){
        cout << w[i] << " ";
    }
    
