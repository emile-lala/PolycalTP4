///////////////////////////////////////////////////////////
//  Meeting.h
//  Implementation of the Class Meeting
//  Created on:      08-mars-2024 14:26:14
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_A5C2B8A1_D3E9_4cd6_90E5_85EF10C0C38E__INCLUDED_)
#define EA_A5C2B8A1_D3E9_4cd6_90E5_85EF10C0C38E__INCLUDED_

#include <string>

#include "AbstractEvent.h"
#include "Participant.h"
#include "ParticipantContainer.h"

class Meeting : public AbstractEvent
{

public:
	Meeting(std::string description, Minutes duration);
	Meeting(const Meeting& rhs);
	virtual ~Meeting() = default;
	virtual EventPtr clone() const;

	virtual Participant& addParticipant(const Participant& participant);
	virtual ParticipantIterator begin();
	virtual ParticipantIterator_const cbegin() const;
	virtual ParticipantIterator_const cend() const;
	virtual void deleteParticipant(ParticipantIterator_const participant);
	virtual ParticipantIterator end();

private:
	ParticipantContainer m_participants;

	virtual std::ostream& printToStream(std::ostream& o) const;
};
#endif // !defined(EA_A5C2B8A1_D3E9_4cd6_90E5_85EF10C0C38E__INCLUDED_)
