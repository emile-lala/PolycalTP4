///////////////////////////////////////////////////////////
//  TimeSpan.cpp
//  Implementation of the Class TimeSpan
//  Created on:      08-mars-2024 14:25:46
//  Original author: franc
///////////////////////////////////////////////////////////

#include "TimeSpan.h"

SpanContainer TimeSpan::m_emptyContainer;

TimeSpan::TimeSpan(Minutes duration)
	: m_duration(duration)
{
}

SpanPtr TimeSpan::clone() const
{
	return SpanPtr(new TimeSpan(*this));
}


AbstractSpan& TimeSpan::addSpan(const AbstractSpan& Span){

	return *(*(m_emptyContainer.begin()));
}


SpanIterator TimeSpan::begin(){

	return  m_emptyContainer.begin();
}


SpanIterator_const TimeSpan::cbegin() const {

	return   m_emptyContainer.cbegin();
}


SpanIterator_const TimeSpan::cend() const {

	return m_emptyContainer.cend();
}


void TimeSpan::deleteSpan(SpanIterator_const child){

}


SpanIterator TimeSpan::end(){

	return  m_emptyContainer.end();
}


Minutes TimeSpan::getDuration() const {

	return m_duration;
}

void TimeSpan::setDuration(Minutes duration)
{
	m_duration = duration;
}


bool TimeSpan::isRecurrent() const {

	return false;
}


int TimeSpan::getNumRepetitions() const
{
	return 1;
}

void TimeSpan::setNumRepetitions(int repetitions)
{
	// Échoue silencieusement
}


std::ostream& TimeSpan::printToStream(std::ostream& o) const 
{
	indent(o);
	return  o << "duration = " << m_duration.count() << std::endl;
}