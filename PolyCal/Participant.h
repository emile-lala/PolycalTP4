///////////////////////////////////////////////////////////
//  Participant.h
//  Implementation of the Class Participant
//  Created on:      08-mars-2024 14:26:17
//  Original author: franc
///////////////////////////////////////////////////////////

#if !defined(EA_E214BC47_35A2_4ef4_9989_87ECFB676CEF__INCLUDED_)
#define EA_E214BC47_35A2_4ef4_9989_87ECFB676CEF__INCLUDED_

#include <string>

#include "User.h"

class Participant
{
public:
	Participant(const User& user, std::string role);
	Participant(const Participant& rhs);
	virtual ~Participant() = default;

	virtual const User& getUser() const;
	virtual std::string getRole() const;
	virtual void setRole(std::string role);

protected:
	const User& m_user;
	std::string m_role;
};
#endif // !defined(EA_E214BC47_35A2_4ef4_9989_87ECFB676CEF__INCLUDED_)
