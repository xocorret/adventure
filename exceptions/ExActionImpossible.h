/**
 * @file ExActionImpossible.h
 * @date 09.06.2013
 * @author xocorret
 */

#ifndef EXACTIONIMPOSSIBLE_H_
#define EXACTIONIMPOSSIBLE_H_

#include <exception>

namespace adventure {
namespace exception {

/**
 * @brief An indicator if an attempted action can not be done.
 * This exception indicates relatively harmless errors
 * and can mostly be handled with an error message to the user.
 * Also it always is meant to provide a reason.
 */
class Ex_ActionImpossible: public std::exception {
public:
	Ex_ActionImpossible( std::string const &what );
	virtual ~Ex_ActionImpossible();

	const std::string getReason() const;

private:
	std::string _reason;
};

} /* namespace exception */
} /* namespace adventure */
#endif /* EXACTIONIMPOSSIBLE_H_ */
