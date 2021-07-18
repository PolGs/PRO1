#include <iostream>
#include <vector>
using namespace std;

struct film{
    string name;
    int stime;
    int etime;
    double score;
};

int main(){
    int n;
    cin >> n;
    vector<film> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i].name;
        cin >> v[i].stime;
        cin >> v[i].etime;
        cin >> v[i].score;
        
        cout << "name: "<< v[i].name;
        cout << " stime: " << v[i].stime;
        cout << " etime: " << v[i].etime;
        cout << " score: " << v[i].score;
    }
}
