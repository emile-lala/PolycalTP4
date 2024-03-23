///////////////////////////////////////////////////////////
//  User.h
//  Implementation of the Class User
//  Created on:      08-mars-2024 14:26:32
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_71E92144_EE1F_42d3_8AB2_A977094B083D__INCLUDED_)
#define EA_71E92144_EE1F_42d3_8AB2_A977094B083D__INCLUDED_

#include <string>

#include "Agenda.h"

class User
{

public:
	User( std::string firstName, std::string lastName, std::string eMail, const Schedule& schedule );
	User(const User& rhs);
	virtual ~User() = default;

	virtual std::string getFirstName() const;
	virtual std::string getLastName() const;
	virtual std::string getEmail() const;
	virtual const Agenda& getAgenda() const;
	virtual Agenda& getAgenda();

	virtual void setFirstName(std::string first);
	virtual void setLastName(std::string last);
	virtual void setEmail(std::string email);

private:
	std::string m_email;
	std::string m_firstName;
	std::string m_lastName;

	std::unique_ptr<Agenda> m_agenda;
};
#endif // !defined(EA_71E92144_EE1F_42d3_8AB2_A977094B083D__INCLUDED_)
