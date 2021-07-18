#include <iostream>
#include <vector>
using namespace std;

struct Interval {
    int start;
    int end;
};

struct Movie {
    string name;
    Interval inter;
    double score;
};

// Reads n movies from stdin and stores them in vector v
void read_movies(vector<Movie> &v) {
    for (int i = 0 ; i < v.size(); ++i) {
         cin >> v[i].name >> v[i].inter.start >> v[i].inter.end >> v[i].score;
    }
}

// Print movies that are shown in the interval 'time' 
// and have score larger or equal to 'sc'
void print_movies (const vector<Movie>& p, Interval time, double sc) {
    for(int i=0; i<p.size(); ++i){
        if(p[i].inter.start >= time.start and p[i].inter.end <= time.end and p[i].score >= sc){
            cout << p[i].name << " " << p[i].inter.end - p[i].inter.start << endl;
        }
    }
    cout << "---" << endl;
}

int main() {
    // load movies
    int n; 
    cin >> n;
    vector<Movie> v(n);
    read_movies(v);

    // Read and process queries, calling print_movies to produce
    // the required output for each query
    int m;
    cin >> m;
    Interval a;
    double score;
    for (int i = 0; i < m; ++i) {
        cin >> a.start >> a.end >> score;
        print_movies(v, a, score);
    }
}
