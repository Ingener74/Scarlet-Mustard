#include "Delegate.h"
#include "Base.h"

namespace fierce_venom {

Base::Base(Delegate* delegate) :
        m_delegate(delegate) {
	if(m_delegate)
		m_delegate->delegateWork("Base delegate this");
}

Base::~Base() {
}

}
