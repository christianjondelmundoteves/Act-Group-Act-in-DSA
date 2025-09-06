#include <iostream>
#include <string>
using namespace std;
int main(){
	string full_name, course, bday, motto;
	
	cout << "Enter your Full Name: "<< endl;
	getline(cin ,full_name);
	
	cout << "Enter your Course Yr & Section: "<< endl;
	getline(cin, course);
	
	cout << "Enter your Birtday (MM/DD/YYYY): "<< endl;
	getline(cin, bday);
	
	cout << "Your Motto in Life: "<< endl;
	getline(cin, motto);
	
	return 0;
}
