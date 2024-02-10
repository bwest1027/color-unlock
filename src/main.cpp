#include <Geode/Geode.hpp>
#include <Geode/modify/GameManager.hpp>
using namespace geode::prelude;

//Color unlock
class $modify(GameManager) {
	bool isColorUnlocked(int p0, UnlockType p1) {
		bool result = GameManager::isColorUnlocked(p0, p1);
			return true;
	}
};
