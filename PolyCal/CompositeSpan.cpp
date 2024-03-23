///////////////////////////////////////////////////////////
//  CompositeSpan.cpp
//  Implementation of the Class CompositeSpan
//  Created on:      08-mars-2024 14:25:50
//  Original author: franc
///////////////////////////////////////////////////////////

#include "CompositeSpan.h"

CompositeSpan::CompositeSpan(const CompositeSpan& rhs)
{
	// � compl�ter: effectuer une copie en profondeur de l'objet rhs en ajoutant
	//              une copie de chacun des enfants contenus dans rhs
}

SpanPtr CompositeSpan::clone() const
{
	// � compl�ter: allouer un nouvel objet identique � this et retourner le nouveau pointeur
	return nullptr;
}

AbstractSpan& CompositeSpan::addSpan(const AbstractSpan& span)
{
	// � compl�ter: ins�rer une copie de l'objet span dans le conteneur des sub-spans
	//              retourner une r�f�rence � l'objet ins�r�
	return *this; // � REMPLACER !!!
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
	// � compl�ter : retirer du conteneur des sub-spans l'objet point� par l'it�rateur
}


SpanIterator CompositeSpan::end()
{
	// � compl�ter
	return m_subSpans.end();
}

Minutes CompositeSpan::getDuration() const 
{
	// � compl�ter: calculer la dur�e total en sommant la dur�e de chaque enfant
	Minutes total(0);
	return total;
}

void CompositeSpan::setDuration(Minutes duration)
{
	// �choue silencieusement
}


int CompositeSpan::getNumRepetitions() const
{
	return 1;
}

void CompositeSpan::setNumRepetitions(int repetitions)
{
	// �choue silencieusement
}


bool CompositeSpan::isRecurrent() const {

	return false;
}


std::ostream& CompositeSpan::printToStream(std::ostream& o) const 
{
	// � compl�ter: 
	//      - incr�menter l'indentation
	//      - it�rer sur le enfant et imprimer chacun
	//      - d�cr�menter l'indentation

	return o;
}
