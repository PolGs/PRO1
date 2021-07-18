#include <iostream>
#include <vector>
using namespace std;

typedef vector <vector <int> > Room;

// Pre: n, m integers greater than 0
// Post: it returns a valid n*m Room
Room read_room(int n, int m) {
    // YOUR CODE HERE
}

// Pre: room is a valid Room
// Post: it returns the value of those objects that are not monitored by any of the security cameras in room, no matter the final value of room
int non_monitored_objects(const Room& room) {
    // YOUR CODE HERE
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        Room room = read_room(n, m);
        cout << non_monitored_objects(room) << endl;
    }
}
