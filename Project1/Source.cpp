/*Oscar Hoegler, September 1st 2022, labratory 2*/

#include <iostream>;
#include <string>;

using namespace std;

int main(void) {
	
	cout << "Hello, my name is Hal!" << endl << "What would you like me to do? ";
	string user_input;
	getline(cin,user_input);
	cout << "I am sorry, I cannot do that";
	return 0;
}