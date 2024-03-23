///////////////////////////////////////////////////////////
//  AbstractEvent.cpp
//  Implementation of the Class AbstractEvent
//  Created on:      09-mars-2024 16:39:30
//  Original author: franc
///////////////////////////////////////////////////////////

#include "AbstractEvent.h"

AbstractEvent::AbstractEvent(std::string description, Minutes duration)
	: m_description(description), m_duration(duration) 
{
}

std::string AbstractEvent::getDescription() const
{
	return m_description;
}

Minutes AbstractEvent::getDuration() const
{
	return m_duration;
}

void AbstractEvent::setDescription(std::string description)
{
	m_description = description;
}

void AbstractEvent::setDuration(Minutes duration)
{
	m_duration = duration;
}

std::ostream& operator<<(std::ostream& o, const AbstractEvent& event)
{
	return event.printToStream(o);
}