/**
 * @file ExActionImpossible.cpp
 * @date 09.06.2013
 * @author 
 */

#include "ExActionImpossible.h"

namespace adventure {
namespace exception {

Ex_ActionImpossible::Ex_ActionImpossible(std::string const &what) {
	this->_reason = what;
}

Ex_ActionImpossible::~Ex_ActionImpossible() {
	// TODO Auto-generated destructor stub
}

const std::string Ex_ActionImpossible::getReason() const {
	return this->_reason;
}

} /* namespace exception */
} /* namespace adventure */
