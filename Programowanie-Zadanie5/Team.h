#pragma once
class Team
{
public:
	string teamName;
	int wins;
	int draws;
	int losses;
	int goals;
	int goalsLost;

	Team(int w, int d, int l, int g, int gl) : wins(w), draws(d), losses(l), goals(g), goalsLost(gl) {}

	Team(string name, int w, int d, int l, int g, int gl);
	friend ostream& operator<<(ostream& os, const Team& team);
	bool operator>(Team t);
};