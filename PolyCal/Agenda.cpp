///////////////////////////////////////////////////////////
//  Agenda.cpp
//  Implementation of the Class Agenda
//  Created on:      09-mars-2024 15:21:26
//  Original author: franc
///////////////////////////////////////////////////////////

#include "Agenda.h"
#include "AbstractEvent.h"
#include "Schedule.h"

Agenda::Agenda(Date start, const Schedule& schedule)
	: m_startDate(start), m_schedule(schedule)
{
}

Agenda::Agenda(const Agenda& rhs)
	: m_startDate(rhs.m_startDate), m_schedule(rhs.m_schedule)
{
	for (auto it = rhs.cbegin(); it != rhs.cend(); ++it)
		addEvent(*it);
}

Date Agenda::getStartDate() const
{
	return m_startDate;
}

const Schedule& Agenda::getSchedule() const
{
	return m_schedule;
}

Schedule& Agenda::getSchedule()
{
	return m_schedule;
}

AbstractEvent& Agenda::addEvent(const AbstractEvent& event)
{
	m_events.push_back(EventPtr(event.clone()));
	return *(m_events.back());
}

EventIterator Agenda::begin()
{
	return m_events.begin();
}

EventIterator_const Agenda::cbegin() const
{
	return m_events.cbegin();
}

EventIterator_const Agenda::cend() const
{
	return m_events.cend();
}

void Agenda::deleteEvent(EventIterator_const event)
{
	m_events.erase(event);
}

EventIterator Agenda::end()
{
	return m_events.end();
}

