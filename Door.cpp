/**
 * @file Door.cpp
 * @date 09.06.2013
 * @author xocorret
 */

#include "Door.h"

namespace adventure {

Door::Door() {
	// TODO Auto-generated constructor stub

}

Door::~Door() {
	// TODO Auto-generated destructor stub
}

std::shared_ptr<Room> Door::passThrough( Room const &fromRoom) const {

	if( this->is_locked() ) throw exception::Ex_ActionImpossible("The door is locked.");
	if( fromRoom == this->room0) return this->room1;
	if( fromRoom == this->room1) return this->room0;
	return nullptr; // TODO invalid argument exception
}

} /* namespace adventure */
