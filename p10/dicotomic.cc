#include <iostream>
#include <vector>
using namespace std;

int position(double x, const vector<double>& v, int left, int right){
    int i;
    bool found = false;
    while(not found and left<=right){
        i = (left+right)/2;
        if(v[i] > x) right = i -1;
        else if(v[i] < x) left = i +1;
        else found = true;
    }
    
    if(found) return i;
    else return -1;
}
