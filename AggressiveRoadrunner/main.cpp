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

    } catch (const exception& e) {
        cerr << e.what() << endl;
    }
}
