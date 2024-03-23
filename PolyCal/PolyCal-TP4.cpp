///////////////////////////////////////////////////////////
//  PolyCal.cpp
//  Implementation of entry point to PolyCal application
//  Created on:      09-mars-2024 13:45:50
//  Original author: franc
///////////////////////////////////////////////////////////

#include "PCControler.h"

int main()
{
	PCControler controler;
	Schedule polySchedule(controler.createRegularPolyWeekSchedule());
	controler.generateUsers(polySchedule);
	controler.planMeetings();
	return 0;
}