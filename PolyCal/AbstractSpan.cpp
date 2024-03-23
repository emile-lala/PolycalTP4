///////////////////////////////////////////////////////////
//  AbstractSpan.cpp
//  Implementation of the Class AbstractSpan
//  Created on:      08-mars-2024 14:25:30
//  Original author: franc
///////////////////////////////////////////////////////////

#include "AbstractSpan.h"

int AbstractSpan::m_indent = 0;

std::ostream& operator<<(std::ostream& o, const AbstractSpan& Span)
{
	// TODO: insert return statement here
	return Span.printToStream(o);
}

std::ostream& AbstractSpan::indent(std::ostream& o) const
{
	for (int i = 0; i < m_indent; ++i)
		o << '\t';
	return o;
}
