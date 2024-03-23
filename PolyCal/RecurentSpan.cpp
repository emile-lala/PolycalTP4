///////////////////////////////////////////////////////////
//  RecurentSpan.cpp
//  Implementation of the Class RecurentSpan
//  Created on:      09-mars-2024 10:01:41
//  Original author: franc
///////////////////////////////////////////////////////////

#include "RecurentSpan.h"


RecurentSpan::RecurentSpan(int nRepeat, const AbstractSpan& baseSpan)
	// À compléter
{
	// À compléter: conserver une copie l'objet baseSpan en ajoutant
	//              la copie dans le conteneur m_repeatedSpan
}

RecurentSpan::RecurentSpan(const RecurentSpan& rhs)
// À compléter
{
	// À compléter: conserver une copie l'objet contenu dans le conteneur de rhs en ajoutant
	//              la copie dans le conteneur m_repeatedSpan
}

SpanPtr RecurentSpan::clone() const
{
	// À compléter: allouer un nouvel objet identique à this et retourner le nouveau pointeur
	return nullptr;
}


AbstractSpan& RecurentSpan::addSpan(const AbstractSpan& span)
{
	// À compléter: insérer une copie de l'objet span dans le conteneur des sub-spans
	//              retourner une référence à l'objet inséré
	return *this; // À REMPLACER !!!
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

}


SpanIterator RecurentSpan::end(){

	return m_repeatedSpan.end();
}


bool RecurentSpan::isRecurrent() const {

	return true;
}


std::ostream& RecurentSpan::printToStream(std::ostream& o) const 
{
	// À compléter: 
	//      - indenter
	//      - imprimer sur la console l'information de répétition comme "duration = 24 x 60 = 1440 minutes\n"
	// 	    - imprimer le span contenu dans le conteneur m_repeatedSpan
	//      - décrémenter l'indentation

	return o;
}


int RecurentSpan::getNumRepetitions() const
{
	// À compléter
	return 0;
}

void RecurentSpan::setNumRepetitions(int repetitions)
{
	// À compléter
}


Minutes RecurentSpan::getDuration() const 
{
	// À compléter
	return Minutes(0);
}

void RecurentSpan::setDuration(Minutes duration)
{
	// À compléter
}
