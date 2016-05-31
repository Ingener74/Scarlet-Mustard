#include <iostream>
#include <stdexcept>

#include <Base.h>
#include <Delegate.h>

using namespace std;
using namespace fierce_venom;

int main(int argc, char **argv) {
    try {
        cout << "" << endl;

        Delegate d;

        Base b(&d);

    } catch (const exception& e) {
        cerr << e.what() << endl;
    }
}
