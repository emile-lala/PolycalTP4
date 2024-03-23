///////////////////////////////////////////////////////////
//  Participant.cpp
//  Implementation of the Class Participant
//  Created on:      08-mars-2024 14:26:17
//  Original author: franc
///////////////////////////////////////////////////////////

#include "Participant.h"
#include "ParticipantContainer.h"


Participant::Participant(const User& participant, std::string role)
	: m_user(participant) // � compl�ter
{
}

Participant::Participant(const Participant& rhs)
	: m_user(rhs.m_user) // � compl�ter
{
}

const User& Participant::getUser() const
{
	return m_user;
}

std::string Participant::getRole() const
{
	// � compl�ter
	return "";
}

void Participant::setRole(std::string role)
{
	// � compl�ter
}

