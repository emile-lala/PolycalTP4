///////////////////////////////////////////////////////////
//  Schedule.h
//  Implementation of the Class Schedule
//  Created on:      09-mars-2024 15:50:24
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_6181E0D0_CE57_4589_9E69_D46AEFE27D9F__INCLUDED_)
#define EA_6181E0D0_CE57_4589_9E69_D46AEFE27D9F__INCLUDED_

#include "AbstractSpan.h"

class Schedule
{

public:
	Schedule(const AbstractSpan& rootSpan);
	Schedule(const Schedule& schedule);
	virtual ~Schedule() = default;

	virtual SpanIterator findSpanAt(Minutes moment);
	virtual SpanIterator_const findSpanAt(Minutes moment) const;

private:
	friend std::ostream& operator<<(std::ostream& o, const Schedule& schedule);
	SpanPtr m_rootSpan;
};
#endif // !defined(EA_6181E0D0_CE57_4589_9E69_D46AEFE27D9F__INCLUDED_)
