#include <iostream>
#include <vector>
using namespace std;
 
void print(vector < vector<char> > v) {
    for (int i=0; i<v[0].size(); ++i) {
        for (int j=0; j<v.size(); ++j) {
            cout<<v[j][i];
        }
        cout<<endl;
    }
}
 
int main() {
    int m,s,v;
    cin>>m>>s>>v;
    vector < vector <char> > camp(1,vector <char> (m,'|'));
    camp[0][s] = '=';
    camp.push_back(vector <char> (m,'.'));
    camp[1][v] = 'V';
    int n=1;
    bool up=false;
    while (v!=s) {
        for (int i=0; v!=s and i<n; ++i) {
            if (up) v--;
            else v++;
           
            if (v<0) {v++;break;} else if (v>=m){v--;break;} //"Rebotar" cuando llega al límite del campo.
           
            camp.push_back(vector <char> (m,'.'));
            camp[camp.size()-1][v] = 'V';
            //print(camp);
        }
        n*=2;
        if (up) up = false;
        else up = true;
    }      
    print(camp);
}
