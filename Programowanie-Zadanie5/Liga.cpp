#include<iostream>
#include<vector>

using namespace std;

#include"Liga.h"

void Liga::addTeam(Team& team) {
	liga.push_back(team);

}

void Liga::displayTeams(vector<Team> l) {
	for (auto team : l) {
		cout << team;
	}
	cout << "\n";
}

int Liga::teamScore(Team team) {
	int score = team.wins * 3 + team.draws * 1;
	return score;
}