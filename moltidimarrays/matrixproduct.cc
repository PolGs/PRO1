#include <iostream>
#include <vector>
using namespace std;
typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b){
    int n = a.size();
    Matrix c(n,vector<int>(n));
    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            int sum = 0;
            for(int k=0; k<n; ++k){
                sum = sum + a[i][k]*b[k][j];
            }
            c[i][j] = sum;
        }
    }
    return c;
}

int main(){
     int f, c;
    cin >> f >> c;  
    Matrix v(f,vector<int> (c));
    for(int i=0; i<f; ++i){
        for(int j=0; j<c; ++j){
            cin >> v[i][j];
        }
    }
    Matrix w(f,vector<int> (c));
    for(int i=0; i<f; ++i){
        for(int j=0; j<c; ++j){
            cin >> w[i][j];
        }
    }
    
    Matrix r(f, vector<int> (c));
    r = product(v,w);
    for(int i=0; i<f; ++i){
        for(int j=0; j<c; ++j){
            cout << r[i][j] << " ";
        }
        cout << endl;
    }
  
}
