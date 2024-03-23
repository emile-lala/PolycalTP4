///////////////////////////////////////////////////////////
//  EventContainer.h
//  Implementation of the Class EventContainer
//  Created on:      09-mars-2024 15:33:04
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_3E1ECBCC_5DC8_4aa8_8A45_091D450D67D1__INCLUDED_)
#define EA_3E1ECBCC_5DC8_4aa8_8A45_091D450D67D1__INCLUDED_

#include <memory>
#include <list>

// Configuration du stockage des enfants des objets composites
using EventPtr = std::unique_ptr<class AbstractEvent>;
using EventContainer = std::list<EventPtr>;
using EventBaseIterator = EventContainer::iterator;
using EventBaseIterator_const = EventContainer::const_iterator;

class EventIterator : public EventBaseIterator
{
public:
	EventIterator(const EventContainer::iterator& it) : EventBaseIterator(it) {}

	// Operateurs simplifiant l'acces a l'objet sur lequel pointe l'iterateur
	// pour EventIterator it;
	//    *it est l'objet 
	//    it-> permet d'invoquer une methode sur l'objet 
	class AbstractEvent& operator*() { return *((*(EventBaseIterator(*this))).get()); }
	class AbstractEvent* operator->() { return (*(EventBaseIterator(*this))).get(); }
};

class EventIterator_const : public EventBaseIterator_const
{
public:
	EventIterator_const(const EventContainer::const_iterator& it) : EventBaseIterator_const(it) {}

	// Operateurs simplifiant l'acces a l'objet  sur lequel pointe l'iterateur
	// pour EventIterator_const it;
	//    *it est l'objet constant
	//    it-> permet d'invoquer une methode const sur l'objet 
	const class AbstractEvent& operator*() { return *((*(EventBaseIterator_const(*this))).get()); }
	const class AbstractEvent* operator->() { return (*(EventBaseIterator_const(*this))).get(); }
};

#endif // !defined(EA_3E1ECBCC_5DC8_4aa8_8A45_091D450D67D1__INCLUDED_)
