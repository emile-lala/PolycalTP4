///////////////////////////////////////////////////////////
//  SpanContainer.h
//  Implementation of the Class SpanContainer
//  Created on:      08-mars-2024 14:25:53
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_A6B54274_8BB5_4d10_AD5C_1CCC76D1B711__INCLUDED_)
#define EA_A6B54274_8BB5_4d10_AD5C_1CCC76D1B711__INCLUDED_

#include <memory>
#include <list>

// Configuration du stockage des enfants des objets composites
using SpanPtr = std::unique_ptr<class AbstractSpan>;
using SpanContainer = std::list<SpanPtr>;
using SpanBaseIterator = SpanContainer::iterator;
using SpanBaseIterator_const = SpanContainer::const_iterator;

class SpanIterator : public SpanBaseIterator
{
public:
	SpanIterator(const SpanContainer::iterator& it) : SpanBaseIterator(it) {}

	// Operateurs simplifiant l'acces a l'objet sur lequel pointe l'iterateur
	// pour SpanIterator it;
	//    *it est l'objet 
	//    it-> permet d'invoquer une methode sur l'objet 
	class AbstractSpan& operator*() { return *((*(SpanBaseIterator(*this))).get()); }
	class AbstractSpan* operator->() { return (*(SpanBaseIterator(*this))).get(); }
};

class SpanIterator_const : public SpanBaseIterator_const
{
public:
	SpanIterator_const(const SpanContainer::const_iterator& it) : SpanBaseIterator_const(it) {}

	// Operateurs simplifiant l'acces a l'objet  sur lequel pointe l'iterateur
	// pour SpanIterator_const it;
	//    *it est l'objet constant
	//    it-> permet d'invoquer une methode const sur l'objet 
	const class AbstractSpan& operator*() { return *((*(SpanBaseIterator_const(*this))).get()); }
	const class AbstractSpan* operator->() { return (*(SpanBaseIterator_const(*this))).get(); }
};
#endif // !defined(EA_A6B54274_8BB5_4d10_AD5C_1CCC76D1B711__INCLUDED_)
