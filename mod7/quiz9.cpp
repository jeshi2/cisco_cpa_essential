#include <iostream>
using namespace std;

class X {
public:
    X(void) { cout << 1; }
    ~X(void) { cout << 2; }
};

X *exec() {
    X *x = new X();
    throw string("0");
    return x;
}

int main(void) {
    X *x;
    try {
        x = exec(); // Assign the result of exec() to x
        delete x; // Delete x if exec() doesn't throw
    } catch(string &s) {
        cout << s;
        return 0;
    }
    return 0; // Add return statement if no exception
}
