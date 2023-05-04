// Programowanie-Zadanie5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<stdlib.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

#include "Team.h"
#include "Liga.h"

bool compareTeams(Team t1, Team t2) {
	return (t1 > t2);
}

int main()
{
	Team team1("TeamOne", 3, 3, 0, 5, 4);
	Team team2("TeamTwo", 1, 9, 2, 3, 11);
	Team team3("TeamThree", 2, 5, 7, 3, 4);
	Team team4("TeamFour", 6, 5, 2, 5, 4);
	Team team5("TeamFive", 8, 0, 2, 1, 4);
	Team team6("TeamSix", 2, 2, 2, 3, 11);
	Team team7("TeamSeven", 6,6, 0, 1, 14);
	Team team8("TeamEight", 1, 4, 6, 6, 2);
	Team team9("TeamNine", 8, 9, 0, 1, 6);
	Team team10("TeamTen", 3, 3, 4, 5, 4);

	Liga liga;
	
	liga.addTeam(team1);
	liga.addTeam(team2);
	liga.addTeam(team3);
	liga.addTeam(team4);
	liga.addTeam(team5);
	liga.addTeam(team6);
	liga.addTeam(team7);
	liga.addTeam(team8);
	liga.addTeam(team9);
	liga.addTeam(team10);

	liga.displayTeams(liga.liga);

	sort(liga.liga.begin(), liga.liga.end(), compareTeams);
	
	liga.displayTeams(liga.liga);
}

