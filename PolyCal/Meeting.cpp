#include "Meeting.h"
#include "Meeting.h"
#include "Meeting.h"
#include "Meeting.h"
#include "Meeting.h"
#include "Meeting.h"
#include "Meeting.h"
#include "Meeting.h"
#include "Meeting.h"
///////////////////////////////////////////////////////////
//  Meeting.cpp
//  Implementation of the Class Meeting
//  Created on:      08-mars-2024 14:26:14
//  Original author: franc
///////////////////////////////////////////////////////////

#include "Meeting.h"

Meeting::Meeting(std::string description, Minutes duration)
	: AbstractEvent(description, duration)
{
}

Meeting::Meeting(const Meeting& rhs)
	: AbstractEvent(rhs)
{
	for (auto it = rhs.cbegin(); it != rhs.cend(); ++it)
		addParticipant(*it);
}

EventPtr Meeting::clone() const
{
	return EventPtr(new Meeting(*this));
}

Participant& Meeting::addParticipant(const Participant& participant)
{
	m_participants.push_back(ParticipantPtr(new Participant(participant)));
	return *(m_participants.back());
}

ParticipantIterator Meeting::begin()
{
	return m_participants.begin();
}

ParticipantIterator_const Meeting::cbegin() const
{
	return m_participants.cbegin();
}

ParticipantIterator_const Meeting::cend() const
{
	return m_participants.cend();
}

void Meeting::deleteParticipant(ParticipantIterator_const participant)
{
	m_participants.erase(participant);
}

ParticipantIterator Meeting::end()
{
	return m_participants.end();
}

std::ostream& Meeting::printToStream(std::ostream& o) const
{
	o << "Meeting\n{\n";
	o << "\tdescription: " << getDescription() << "\n";
	o << "\tduration: " << getDuration().count() << " minutes\n";
	for (auto it = cbegin(); it != cend(); ++it)
		o << "\tParticipant: " << it->getUser().getFirstName() << " " << it->getUser().getLastName() << " (" << it->getRole() << ")\n";
	return o << "}";
}
