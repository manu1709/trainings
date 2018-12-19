#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <iterator>

using namespace std;


int main() {
	int g, st = 0, ed = 0, i = 0;
	std::map<int, std::string> mapOfNum;
	mapOfNum.insert(std::make_pair(1, "one"));
	mapOfNum.insert(std::make_pair(2, "two"));
	mapOfNum.insert(std::make_pair(3, "three"));
	mapOfNum.insert(std::make_pair(4, "four"));
	mapOfNum.insert(std::make_pair(5, "five"));
	mapOfNum.insert(std::make_pair(6, "six"));
	mapOfNum.insert(std::make_pair(7, "seven"));
	mapOfNum.insert(std::make_pair(8, "eight"));
	mapOfNum.insert(std::make_pair(9, "nine"));

	std::map<int, std::string>::iterator it = mapOfNum.begin();

	//cout << "enter range";
	cin >> st >> ed;
	std::map<int, std::string>::iterator valit;
	for (i = st; i <= ed; i++)
	{
		if (i < 10)
		{
			valit = mapOfNum.find(i);
			if (valit != mapOfNum.end())
				cout << valit->second << '\n';
		}
		if (i > 9)
		{
			if (i % 2 == 0)
				cout << "even" << '\n';
			else
				cout << "odd" << '\n';

		}

	}

	cin >> g;
}