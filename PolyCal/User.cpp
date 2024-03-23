///////////////////////////////////////////////////////////
//  User.cpp
//  Implementation of the Class User
//  Created on:      08-mars-2024 14:26:32
//  Original author: franc
///////////////////////////////////////////////////////////

#include "User.h"
#include <chrono>

using namespace std::chrono;
constexpr std::chrono::system_clock::time_point April_1_2024_tp = sys_days{ April / 1 / 2024 };

User::User(std::string firstName, std::string lastName, std::string eMail, const Schedule& schedule)
	: m_firstName(firstName), m_lastName(lastName), m_email(eMail), m_agenda(new Agenda(April_1_2024_tp, schedule))
{
}

User::User(const User& rhs)
	: m_firstName(rhs.m_firstName), m_lastName(rhs.m_lastName), m_email(rhs.m_email), m_agenda(new Agenda(*(rhs.m_agenda)))
{
}


std::string User::getEmail() const {

	return  m_email;
}

const Agenda& User::getAgenda() const
{
	return *m_agenda;
}

Agenda& User::getAgenda()
{
	return *m_agenda;
}

void User::setEmail(std::string email) {

	m_email = email;
}


std::string User::getFirstName() const {

	return  m_firstName;
}

void User::setFirstName(std::string first) {

	m_firstName = first;
}


std::string User::getLastName() const {

	return  m_lastName;
}

void User::setLastName(std::string last) {

	m_lastName = last;
}
