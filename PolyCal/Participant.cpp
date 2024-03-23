///////////////////////////////////////////////////////////
//  Participant.cpp
//  Implementation of the Class Participant
//  Created on:      08-mars-2024 14:26:17
//  Original author: franc
///////////////////////////////////////////////////////////

#include "Participant.h"
#include "ParticipantContainer.h"


Participant::Participant(const User& participant, std::string role)
	: m_user(participant) // À compléter
{
}

Participant::Participant(const Participant& rhs)
	: m_user(rhs.m_user) // À compléter
{
}

const User& Participant::getUser() const
{
	return m_user;
}

std::string Participant::getRole() const
{
	// À compléter
	return "";
}

void Participant::setRole(std::string role)
{
	// À compléter
}

