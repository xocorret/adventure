/**
 * @file ILockable.h
 * @date 09.06.2013
 * @author xocorret
 */

#ifndef ILOCKABLE_H_
#define ILOCKABLE_H_

namespace adventure {

/**
 * This interface describes objects that can be locked.
 * Lockable objects can be locked or unlocked.
 * If you need further effects
 * - like the removal of keys from an inventory -
 * you have to care about it yourself.
 */
class I_Lockable {
private:
	bool _locked;
public:
	void lock();
	void unlock();
	bool is_locked() const;
};

} /* namespace adventure */
#endif /* ILOCKABLE_H_ */
