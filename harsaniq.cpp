#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_elements(vector<string> vec)
{
	cout << " vector = {";
	// переписать на for вместо while и итераторов
	vector<string>::iterator it = vec.begin();
	while (it != vec.end())
	{
		cout << *it++ << ", ";
	}
	cout << "}\n";
}
int main()
{
	string guest;
	vector<string> levo;
	vector<string> pravo;
	do
	{
		cout << "enter your name:";
		cin >> guest;
		

		do
		{
			cout << "choose side";
	
			char x;
			cin >> x;
			if (x == 'l')
			{
				levo.push_back(guest);
				break;
			}
			else if (x == 'r')
			{
				pravo.push_back(guest);
				break;
			}
			else if (x == 'q')
				break;
		} while (true);
	} while (levo.size() + pravo.size() <= 5);
	cout << "left";
	print_elements(levo);
	cout << "right";
	print_elements(pravo);
	

	return 0;
}


