///////////////////////////////////////////////////////////
//  PCControler.h
//  Implementation of the Class PCControler
//  Created on:      08-mars-2024 14:26:11
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_5F606231_2C67_4efa_8194_13A95131013F__INCLUDED_)
#define EA_5F606231_2C67_4efa_8194_13A95131013F__INCLUDED_

#include <vector>

#include "Schedule.h"
#include "User.h"

class PCControler
{
public:
	PCControler() = default;
	virtual ~PCControler() = default;

	Schedule createRegularPolyWeekSchedule();
	void generateUsers(const Schedule& schedule);
	void planMeetings();

private:
	std::vector<User> m_users;
};
#endif // !defined(EA_5F606231_2C67_4efa_8194_13A95131013F__INCLUDED_)
