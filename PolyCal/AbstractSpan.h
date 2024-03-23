///////////////////////////////////////////////////////////
//  AbstractSpan.h
//  Implementation of the Class AbstractSpan
//  Created on:      08-mars-2024 14:25:30
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_35D9E9F8_D493_4ca3_B230_16F625F9B9D7__INCLUDED_)
#define EA_35D9E9F8_D493_4ca3_B230_16F625F9B9D7__INCLUDED_

#include <iostream>

#include "Minutes.h"
#include "SpanContainer.h"

class AbstractSpan
{

public:
	AbstractSpan() = default;
	virtual ~AbstractSpan() = default;
	virtual SpanPtr clone() const = 0;

	virtual AbstractSpan& addSpan(const AbstractSpan& Span) = 0;
	virtual SpanIterator begin() = 0;
	virtual SpanIterator_const cbegin() const = 0;
	virtual SpanIterator_const cend() const = 0;
	virtual void deleteSpan(SpanIterator_const child) = 0;
	virtual SpanIterator end() = 0;

	virtual Minutes getDuration() const = 0;
	virtual void setDuration(Minutes duration) = 0;

	virtual bool isRecurrent() const = 0;
	virtual int getNumRepetitions() const = 0;
	virtual void setNumRepetitions(int repetitions) = 0;
	virtual std::ostream& printToStream(std::ostream& o) const = 0;

protected:
	friend std::ostream& operator<<(std::ostream& o, const AbstractSpan& Span);

	static int m_indent;
	std::ostream& indent(std::ostream& o) const;
};
#endif // !defined(EA_35D9E9F8_D493_4ca3_B230_16F625F9B9D7__INCLUDED_)
