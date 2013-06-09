/**
 * @file Door.h
 * @date 09.06.2013
 * @author xocorret
 */

#ifndef DOOR_H_
#define DOOR_H_

#include <memory>
#include "interfaces/ILockable.h"

namespace adventure {

/**
 * @brief This class describes doors as a connection between two rooms.
 * The connection always is between two rooms and works in both directions.
 */
class Door : I_Lockable {
public:
	Door();
	virtual ~Door();

	std::shared_ptr<Room> passThrough( Room const &fromRoom ) const;

private:
	std::shared_ptr<Room> room0;
	std::shared_ptr<Room> room1;

};

} /* namespace adventure */
#endif /* DOOR_H_ */
