/**
 * @file ILockable.cpp
 * @date 09.06.2013
 * @author xocorret
 */

#include "ILockable.h"

namespace adventure {
namespace interface {

void I_Lockable::lock(){
	this->_locked = true;
}

void I_Lockable::unlock(){
	this->_locked = false;
}

bool I_Lockable::is_locked() const{
	return this->_locked;
}

} /* namespace interface */
} /* namespace adventure */
