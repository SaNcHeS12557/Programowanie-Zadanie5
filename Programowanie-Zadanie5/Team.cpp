#include <iostream>

using namespace std;

#include "Team.h"

ostream& operator<<(ostream& os, const Team& team) {
	os << team.teamName << ":\t\033[32m" << team.wins << "\t\033[0m" << team.draws << "\t\033[31m" << team.losses << "\t\033[32m" << team.goals << "\t\033[31m" << team.goalsLost << "\033[0m\n";
	return os;
}

bool Team::operator>(Team t) {
	return ((wins > t.wins) || (wins == t.wins) && (draws > t.draws) || (wins == t.wins) && (draws == t.draws) && (losses < t.losses) || (wins == t.wins) && (draws == t.draws) && (losses == t.losses) && (goals > t.goals) || (wins == t.wins) && (draws == t.draws) && (losses == t.losses) && (goals == t.goals) && (goalsLost < t.goalsLost));
}

Team::Team(string name, int w, int d, int l, int g, int gl) {
	teamName = name;
	wins = w;
	draws = d;
	losses = l;
	goals = g;
	goalsLost = gl;

}