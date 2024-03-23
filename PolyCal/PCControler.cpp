///////////////////////////////////////////////////////////
//  PCControler.cpp
//  Implementation of the Class PCControler
//  Created on:      08-mars-2024 14:26:11
//  Original author: franc
///////////////////////////////////////////////////////////


#include "PCControler.h"
#include "TimeSpan.h"
#include "CompositeSpan.h"
#include "RecurentSpan.h"
#include "Meeting.h"

Schedule PCControler::createRegularPolyWeekSchedule()
{
	TimeSpan oneHour(Minutes(60));
	RecurentSpan weekendDay(24, oneHour);

	TimeSpan midnight2period1start(Minutes(510));
	TimeSpan finalperiod2midnight(Minutes(375));
	TimeSpan courseSpan(Minutes(50));
	TimeSpan breakSpan(Minutes(10));
	TimeSpan lunchBreakSpan(Minutes(15));

	CompositeSpan RegularCoursePeriod;
	RegularCoursePeriod.addSpan(courseSpan);
	RegularCoursePeriod.addSpan(breakSpan);

	RecurentSpan morningPeriods(4, RegularCoursePeriod);
	RecurentSpan afternoonPeriods(5, RegularCoursePeriod);

	CompositeSpan oneWorkDay;
	oneWorkDay.addSpan(midnight2period1start);
	oneWorkDay.addSpan(morningPeriods);
	oneWorkDay.addSpan(lunchBreakSpan);
	oneWorkDay.addSpan(afternoonPeriods);
	oneWorkDay.addSpan(finalperiod2midnight);

	RecurentSpan workWeek(5, oneWorkDay);

	CompositeSpan completeWeek;
	completeWeek.addSpan(weekendDay);
	completeWeek.addSpan(workWeek);
	completeWeek.addSpan(weekendDay);

	std::cout << completeWeek;

	return Schedule(completeWeek);
}

void PCControler::generateUsers(const Schedule& schedule)
{
	// Initialize some users representing Polytechnique students all with the same base schedule
	m_users.push_back(User("Emma", "Gagnon", "emma.gagnon@polymtl.ca", schedule));
	m_users.push_back(User("Noah", "Tremblay", "noah.tremblay@polymtl.ca", schedule));
	m_users.push_back(User("William", "Fortin", "william.fortin@polymtl.ca", schedule));
	m_users.push_back(User("Olivia", "Bouchard", "olivia.bouchard@polymtl.ca", schedule));
	m_users.push_back(User("Liam", "Pelletier", "liam.pelletier@polymtl.ca", schedule));
	m_users.push_back(User("Charlotte", "Girard", "charlotte.girard@polymtl.ca", schedule));
}

void PCControler::planMeetings()
{
	// Create a 1 hour meeting and add each user as a participant with its role
	Meeting teamMeeting( "One hour meeting to discuss project advancement", Minutes(60));
	std::string roles[6] = { "Team leader", "GUI specialist", "Network specialist", "Database specialist", "ML specialist", "Product owner" };
	for(size_t i = 0; i < m_users.size(); ++i)
		teamMeeting.addParticipant(Participant(m_users[i], roles[i]));

	std::cout << teamMeeting << std::endl;

	for (User& it : m_users)
		it.getAgenda().addEvent(teamMeeting);
}
