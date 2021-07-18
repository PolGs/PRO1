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
