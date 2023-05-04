#pragma once
#include"Team.h"
class Liga
{
public:
	vector<Team> liga;

	void addTeam(Team& team);
	int teamScore(Team t);
	void displayTeams(vector<Team> l);

};

