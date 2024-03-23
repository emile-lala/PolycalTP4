///////////////////////////////////////////////////////////
//  Agenda.h
//  Implementation of the Class Agenda
//  Created on:      09-mars-2024 15:21:26
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_5AAC2606_CFFF_4e5e_9E8F_6F6E92FB2B81__INCLUDED_)
#define EA_5AAC2606_CFFF_4e5e_9E8F_6F6E92FB2B81__INCLUDED_

#include <chrono>

#include "EventContainer.h"
#include "Schedule.h"

using Date = std::chrono::system_clock::time_point;

class Agenda
{

public:
	Agenda(Date start, const Schedule& schedule);
	Agenda(const Agenda& rhs);
	virtual ~Agenda() = default;

	Date getStartDate() const;
	const Schedule& getSchedule() const;
	Schedule& getSchedule();

	virtual AbstractEvent& addEvent(const AbstractEvent& Event);
	virtual EventIterator begin();
	virtual EventIterator_const cbegin() const;
	virtual EventIterator_const cend() const;
	virtual void deleteEvent(EventIterator_const child);
	virtual EventIterator end();

private:
	Schedule m_schedule;
	Date m_startDate;

	EventContainer m_events;
};
#endif // !defined(EA_5AAC2606_CFFF_4e5e_9E8F_6F6E92FB2B81__INCLUDED_)
