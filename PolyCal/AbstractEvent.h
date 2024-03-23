///////////////////////////////////////////////////////////
//  AbstractEvent.h
//  Implementation of the Class AbstractEvent
//  Created on:      09-mars-2024 16:25:04
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_B82A20F6_C892_44e6_A19F_7DC69B95E5BD__INCLUDED_)
#define EA_B82A20F6_C892_44e6_A19F_7DC69B95E5BD__INCLUDED_

#include <string>

#include "Minutes.h"
#include "EventContainer.h"

class AbstractEvent
{

public:
	AbstractEvent(std::string description, Minutes duration);
	virtual ~AbstractEvent() = default;
	virtual EventPtr clone() const = 0;

	virtual std::string getDescription() const;
	virtual Minutes getDuration() const;
	virtual void setDescription(std::string description);
	virtual void setDuration(Minutes duration);

private:
	std::string m_description;
	Minutes m_duration;

	friend std::ostream& operator<<(std::ostream& o, const AbstractEvent& event);
	virtual std::ostream& printToStream(std::ostream& o) const = 0;
};
#endif // !defined(EA_B82A20F6_C892_44e6_A19F_7DC69B95E5BD__INCLUDED_)
