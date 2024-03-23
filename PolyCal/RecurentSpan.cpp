///////////////////////////////////////////////////////////
//  RecurentSpan.cpp
//  Implementation of the Class RecurentSpan
//  Created on:      09-mars-2024 10:01:41
//  Original author: franc
///////////////////////////////////////////////////////////

#include "RecurentSpan.h"


RecurentSpan::RecurentSpan(int nRepeat, const AbstractSpan& baseSpan): m_numRepetitions(nRepeat) 
{
	m_repeatedSpan.push_back(baseSpan.clone());
}

RecurentSpan::RecurentSpan(const RecurentSpan& rhs): m_numRepetitions(rhs.m_numRepetitions) 
{
	for (const auto& span : rhs.m_repeatedSpan) 
	{
		m_repeatedSpan.push_back(span->clone());
	}
}

SpanPtr RecurentSpan::clone() const
{
	return std::make_unique<RecurentSpan>(*this);
}


AbstractSpan& RecurentSpan::addSpan(const AbstractSpan& span)
{
	m_repeatedSpan.push_back(span.clone());
	
	return *this;
}


SpanIterator RecurentSpan::begin(){

	return m_repeatedSpan.begin();
}


SpanIterator_const RecurentSpan::cbegin() const {

	return m_repeatedSpan.cbegin();
}


SpanIterator_const RecurentSpan::cend() const {

	return m_repeatedSpan.cend();
}


void RecurentSpan::deleteSpan(SpanIterator_const child){
	m_repeatedSpan.erase(child);
}


SpanIterator RecurentSpan::end(){

	return m_repeatedSpan.end();
}


bool RecurentSpan::isRecurrent() const {

	return true;
}


std::ostream& RecurentSpan::printToStream(std::ostream& o) const 
{
	o << "RecurentSpan: " << m_numRepetitions << " repetitions\n";

	for (const auto& span : m_repeatedSpan)
	{
		o << "\t";
		span->getDuration();
		o << "\n";
	}

	return o;
}


int RecurentSpan::getNumRepetitions() const
{
	return m_numRepetitions;
}

void RecurentSpan::setNumRepetitions(int repetitions)
{
	m_numRepetitions = repetitions;
}


Minutes RecurentSpan::getDuration() const 
{
	if (m_repeatedSpan.size() > 0)
	{
		Minutes total(0);
		for (const auto& span : m_repeatedSpan)
		{
			total += span->getDuration();
		}
		return total;
	}

	return Minutes(0);
}

void RecurentSpan::setDuration(Minutes duration)
{
	// Échoue silencieusement
}
