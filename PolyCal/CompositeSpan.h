///////////////////////////////////////////////////////////
//  CompositeSpan.h
//  Implementation of the Class CompositeSpan
//  Created on:      08-mars-2024 14:25:50
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_A136D21C_239F_43cd_8572_2ECABF733761__INCLUDED_)
#define EA_A136D21C_239F_43cd_8572_2ECABF733761__INCLUDED_

#include "AbstractSpan.h"

class CompositeSpan : public AbstractSpan
{

public:
	CompositeSpan() = default;
	CompositeSpan(const CompositeSpan& rhs);
	virtual ~CompositeSpan() = default;
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

private:
	SpanContainer m_subSpans;
};
#endif // !defined(EA_A136D21C_239F_43cd_8572_2ECABF733761__INCLUDED_)
