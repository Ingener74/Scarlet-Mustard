#pragma once

namespace fierce_venom {

class Delegate;

class Base {
public:
    Base(Delegate*);
    virtual ~Base();

private:
    Delegate* m_delegate = nullptr;
};

}
