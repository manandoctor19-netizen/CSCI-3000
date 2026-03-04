#include <iostream>
#include <string>
using namespace std;

enum match_result
{
	win,
	loss,
	draw
};

struct match
{
	string team_name;
	match_result result;
};

int main()
{
	match match_1 = { "Manchester United", win };

	if (match_1.result == win)
		cout << match_1.team_name << "Won the match!";
	else if (match_1.result == loss)
		cout << match_1.team_name << "lost the match!";
	else
		cout << "Match draw";

	return 0;
}

