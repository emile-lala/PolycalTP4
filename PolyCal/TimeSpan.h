///////////////////////////////////////////////////////////
//  TimeSpan.h
//  Implementation of the Class TimeSpan
//  Created on:      08-mars-2024 14:25:46
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_FFBDC458_62E6_493e_B9EE_F7746765A58D__INCLUDED_)
#define EA_FFBDC458_62E6_493e_B9EE_F7746765A58D__INCLUDED_

#include "AbstractSpan.h"

class TimeSpan : public AbstractSpan
{

public:
	TimeSpan(Minutes duration);
	virtual ~TimeSpan() = default;
	virtual SpanPtr clone() const;

	virtual AbstractSpan& addSpan(const AbstractSpan& Span);
	virtual SpanIterator begin();
	virtual SpanIterator_const cbegin() const;
	virtual SpanIterator_const cend() const;
	virtual void deleteSpan(SpanIterator_const child);
	virtual SpanIterator end();

	virtual Minutes getDuration() const;
	virtual void setDuration(Minutes duration);

	virtual bool isRecurrent() const;
	virtual int getNumRepetitions() const;
	virtual void setNumRepetitions(int repetitions);

protected:
	virtual std::ostream& printToStream(std::ostream& o) const;

	Minutes m_duration;

private:
	static SpanContainer m_emptyContainer;
};
#endif // !defined(EA_FFBDC458_62E6_493e_B9EE_F7746765A58D__INCLUDED_)
