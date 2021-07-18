#include <iostream>
#include <vector>
using namespace std;


struct Persona{
    string nom;
    int edat;
};

void sort(vector<Persona> &v){
    int n = v.size();    
    for(int i=0; i<n; ++i){
        int posmin;
        for(int j=i; j<n; ++j){
            if(v[j].edat < v[i].edat) posmin = j;
        }
        //swap  
        int eaux;
        string naux;
        eaux = v[i].edat;
        naux = v[i].nom;
        v[i].edat = v[posmin].edat;
        v[i].nom = v[posmin].nom;
        v[posmin].edat = eaux;
        v[posmin].nom = naux;
    }
}



int main(){
    int n;
    cin >> n;
    vector<Persona> v(n);
    for(int i=0; i<n; ++i){
        cin >> v[i].nom >> v[i].edat;
    }
    sort(v); 
    for(int i=0; i<n; ++i){
        cout << v[i].nom <<" "<< v[i].edat << endl;
    }
    
}
