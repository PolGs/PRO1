#include <iostream>
#include <vector>
using namespace std;

vector<int> read_vector(int n) {
    vector<int> v;
    int m;
    for(int i=0; i<n; ++i){
        cin >> m;
        v.push_back(m);
    }
    return v;
}

int count_elements(const vector<int>& v, int x) {
    int count=0;
    int n = v.size();
    for(int i=0; i<n; ++i){
        if(v[i]==x)count++;
    }
    return count;
}

int main() {
   int n;
   while (cin >> n) {
      vector<int> v = read_vector(n);
      int nqueries;
      cin >> nqueries;
      for (int i =0; i < nqueries; ++i) {
         int x;
         cin >> x;
         cout << count_elements(v,x) << endl;
      }
   }
}
