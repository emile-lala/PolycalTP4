///////////////////////////////////////////////////////////
//  ParticipantContainer.h
//  Implementation of the Class ParticipantContainer
//  Created on:      08-mars-2024 14:26:21
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_1988E2E4_6197_4beb_8D24_5DFD9909E3D0__INCLUDED_)
#define EA_1988E2E4_6197_4beb_8D24_5DFD9909E3D0__INCLUDED_


#include <memory>
#include <list>

// Configuration du stockage des enfants des objets composites
using ParticipantPtr = std::unique_ptr<class Participant>;
using ParticipantContainer = std::list<ParticipantPtr>;
using ParticipantBaseIterator = ParticipantContainer::iterator;
using ParticipantBaseIterator_const = ParticipantContainer::const_iterator;

class ParticipantIterator : public ParticipantBaseIterator
{
public:
	ParticipantIterator(const ParticipantContainer::iterator& it) : ParticipantBaseIterator(it) {}

	// Operateurs simplifiant l'acces a l'objet sur lequel pointe l'iterateur
	// pour ParticipantIterator it;
	//    *it est l'objet 
	//    it-> permet d'invoquer une methode sur l'objet 
	class Participant& operator*() { return *((*(ParticipantBaseIterator(*this))).get()); }
	class Participant* operator->() { return (*(ParticipantBaseIterator(*this))).get(); }
};

class ParticipantIterator_const : public ParticipantBaseIterator_const
{
public:
	ParticipantIterator_const(const ParticipantContainer::const_iterator& it) : ParticipantBaseIterator_const(it) {}

	// Operateurs simplifiant l'acces a l'objet  sur lequel pointe l'iterateur
	// pour ParticipantIterator_const it;
	//    *it est l'objet constant
	//    it-> permet d'invoquer une methode const sur l'objet 
	const class Participant& operator*() { return *((*(ParticipantBaseIterator_const(*this))).get()); }
	const class Participant* operator->() { return (*(ParticipantBaseIterator_const(*this))).get(); }
};

#endif // !defined(EA_1988E2E4_6197_4beb_8D24_5DFD9909E3D0__INCLUDED_)
