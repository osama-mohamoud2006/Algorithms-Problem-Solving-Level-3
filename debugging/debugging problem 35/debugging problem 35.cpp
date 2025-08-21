#include <iostream>
#include "E:\projects\my library\AllStuff.h"
using namespace std;

void print_each_word(string s)
{
	string delim = " ";
	short pos = 0; 
	string sword;
	while ( (pos = s.find(delim))!=string::npos){
		sword = s.substr(0, pos);

		if (sword != " ") cout << sword << endl;

		s.erase(0, pos + delim.size());
	}

	if (s != " ") cout << s << endl;

}


int main() {
	string word = read_full_line("Enter: ");
	print_each_word(word);
}