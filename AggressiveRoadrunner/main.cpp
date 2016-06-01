#include <iostream>
#include <stdexcept>

#include <Base.h>
#include <Delegate.h>

using namespace std;
using namespace fierce_venom;

class TestDelegate: public Delegate{
public:
	TestDelegate(){}
	virtual ~TestDelegate(){}

	virtual void delegateWork(const std::string& data){
		cout << "delegate data " << data << endl;
	}
};

int main(int argc, char **argv) {
    try {
        TestDelegate d;
        Base b(&d);

        if(true) try {

            throw std::runtime_error("test fuck");

        } catch (const std::exception& e) {
            cout << "if test block failure " << e.what() << endl;
        } else try {

        } catch (const std::exception& e) {
            cerr << e.what() << endl;
        }

    } catch (const exception& e) {
        cerr << e.what() << endl;
    }
}
