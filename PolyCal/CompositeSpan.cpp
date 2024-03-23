///////////////////////////////////////////////////////////
//  CompositeSpan.cpp
//  Implementation of the Class CompositeSpan
//  Created on:      08-mars-2024 14:25:50
//  Original author: franc
///////////////////////////////////////////////////////////

#include "CompositeSpan.h"

CompositeSpan::CompositeSpan(const CompositeSpan& rhs)
{
	for (const auto& span : rhs.m_subSpans)
	{
		m_subSpans.push_back(SpanPtr(span->clone()));
	}
}

SpanPtr CompositeSpan::clone() const
{
	return std::make_unique<CompositeSpan>(*this);
}

AbstractSpan& CompositeSpan::addSpan(const AbstractSpan& span)
{
	m_subSpans.push_back(SpanPtr(span.clone()));
	return *m_subSpans.back();
}


SpanIterator CompositeSpan::begin()
{
	return m_subSpans.begin();
}


SpanIterator_const CompositeSpan::cbegin() const 
{
	return m_subSpans.cbegin();
}


SpanIterator_const CompositeSpan::cend() const 
{
	return m_subSpans.cend();
}


void CompositeSpan::deleteSpan(SpanIterator_const child)
{
	m_subSpans.erase(child);
}


SpanIterator CompositeSpan::end()
{
	return m_subSpans.end();
}

Minutes CompositeSpan::getDuration() const 
{
	Minutes total(0);
	for (const auto& span : m_subSpans)
	{
		total += span->getDuration();
	}
	return total;
}

void CompositeSpan::setDuration(Minutes duration)
{
	// Échoue silencieusement
}


int CompositeSpan::getNumRepetitions() const
{
	return 1;
}

void CompositeSpan::setNumRepetitions(int repetitions)
{
	// Échoue silencieusement
}


bool CompositeSpan::isRecurrent() const {

	return false;
}


std::ostream& CompositeSpan::printToStream(std::ostream& o) const
{
	for (const auto& span : m_subSpans)
	{
		indent(o);
		o << *span;
	}

	return o;
}
