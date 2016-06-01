#pragma once

#include <string>

namespace fierce_venom {

class Delegate {
public:
    Delegate();
    virtual ~Delegate();

    virtual void delegateWork(const std::string& data) = 0;
};

}
