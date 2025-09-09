#include <iostream>
#include <string>
using namespace std;


int main(){
	string name;
	
	while (name.empty()){
		cout << "Enter a name : " << "\n";
		getline(cin, name);
	}
	
	cout << "Hello!" + name;
}
