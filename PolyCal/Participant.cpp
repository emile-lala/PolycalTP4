///////////////////////////////////////////////////////////
//  Participant.cpp
//  Implementation of the Class Participant
//  Created on:      08-mars-2024 14:26:17
//  Original author: franc
///////////////////////////////////////////////////////////

#include "Participant.h"
#include "ParticipantContainer.h"


Participant::Participant(const User& participant, std::string role)
	: m_user(participant), m_role(role) // À compléter
{
}

Participant::Participant(const Participant& rhs)
	: m_user(rhs.m_user), m_role(rhs.m_role) // À compléter
{
}

const User& Participant::getUser() const
{
	return m_user;
}

std::string Participant::getRole() const
{
	// À compléter
	return m_role;
}

void Participant::setRole(std::string role)
{
	// À compléter
	m_role = role;
}

