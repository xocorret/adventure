/*
 * Door.h
 *
 *  Created on: 09.06.2013
 *      Author: fredo
 */

#ifndef DOOR_H_
#define DOOR_H_

#include <memory>

namespace adventure {


class Door {
public:
	Door();
	virtual ~Door();
private:
	std::shared_ptr<Room> room0;
	std::shared_ptr<Room> room1;

};

} /* namespace adventure */
#endif /* DOOR_H_ */
