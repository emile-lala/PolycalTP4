///////////////////////////////////////////////////////////
//  RecurentSpan.h
//  Implementation of the Class RecurentSpan
//  Created on:      09-mars-2024 10:01:41
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_19CD0AA1_DEA8_4d67_834E_ACA93242FC03__INCLUDED_)
#define EA_19CD0AA1_DEA8_4d67_834E_ACA93242FC03__INCLUDED_

#include "AbstractSpan.h"

class RecurentSpan : public AbstractSpan
{

public:
	RecurentSpan(int nRepeat, const AbstractSpan& baseSpan);
	RecurentSpan(const RecurentSpan& rhs);
	virtual ~RecurentSpan() = default;
	virtual SpanPtr clone() const;

	virtual AbstractSpan& addSpan(const AbstractSpan& Span);
	virtual SpanIterator begin();
	virtual SpanIterator_const cbegin() const;
	virtual SpanIterator_const cend() const;
	virtual SpanIterator end();
	virtual void deleteSpan(SpanIterator_const child);

	virtual Minutes getDuration() const;
	virtual void setDuration(Minutes duration);

	virtual bool isRecurrent() const;
	virtual int getNumRepetitions() const;
	virtual void setNumRepetitions(int repetitions);


protected:
	std::ostream& printToStream(std::ostream& o) const;

private:
	int m_numRepetitions;
	SpanContainer m_repeatedSpan;
};
#endif // !defined(EA_19CD0AA1_DEA8_4d67_834E_ACA93242FC03__INCLUDED_)
