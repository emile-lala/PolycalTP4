///////////////////////////////////////////////////////////
//  Schedule.cpp
//  Implementation of the Class Schedule
//  Created on:      09-mars-2024 15:50:24
//  Original author: franc
///////////////////////////////////////////////////////////

#include "Schedule.h"


Schedule::Schedule(const AbstractSpan& rootSpan)
	: m_rootSpan(rootSpan.clone())
{
}

Schedule::Schedule(const Schedule& schedule)
	: m_rootSpan(schedule.m_rootSpan->clone())
{
}


SpanIterator Schedule::findSpanAt(Minutes moment)
{
	return  m_rootSpan->begin();
}


SpanIterator_const Schedule::findSpanAt(Minutes moment) const {

	return  m_rootSpan->cbegin();
}

std::ostream& operator<<(std::ostream& o, const Schedule& schedule)
{
	// TODO: insert return statement here
	return o << *(schedule.m_rootSpan);
}
