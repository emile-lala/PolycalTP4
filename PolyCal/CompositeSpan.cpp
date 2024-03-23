///////////////////////////////////////////////////////////
//  CompositeSpan.cpp
//  Implementation of the Class CompositeSpan
//  Created on:      08-mars-2024 14:25:50
//  Original author: franc
///////////////////////////////////////////////////////////

#include "CompositeSpan.h"

CompositeSpan::CompositeSpan(const CompositeSpan& rhs)
{
	// À compléter: effectuer une copie en profondeur de l'objet rhs en ajoutant
	//              une copie de chacun des enfants contenus dans rhs
}

SpanPtr CompositeSpan::clone() const
{
	// À compléter: allouer un nouvel objet identique à this et retourner le nouveau pointeur
	return nullptr;
}

AbstractSpan& CompositeSpan::addSpan(const AbstractSpan& span)
{
	// À compléter: insérer une copie de l'objet span dans le conteneur des sub-spans
	//              retourner une référence à l'objet inséré
	return *this; // À REMPLACER !!!
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
	// À compléter : retirer du conteneur des sub-spans l'objet pointé par l'itérateur
}


SpanIterator CompositeSpan::end()
{
	// À compléter
	return m_subSpans.end();
}

Minutes CompositeSpan::getDuration() const 
{
	// À compléter: calculer la durée total en sommant la durée de chaque enfant
	Minutes total(0);
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
	// À compléter: 
	//      - incrémenter l'indentation
	//      - itérer sur le enfant et imprimer chacun
	//      - décrémenter l'indentation

	return o;
}
