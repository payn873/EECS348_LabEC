include <iostream>
include <iomanip>
include <string>
using namespace std;

double extracNumeric(const string& str);

int main() {
	string input;
	
	while(true){
		cout << "Enter a string or 'END' to quit): ";
		cin >> input;
		
		if (input == "END") {
			break;
		}
		double number = extracNumeric(input);
		
		if(number != -999999.99){
			cout << "The input is: " << fixed << setprecision(4) << number << endl;
		} else {
			cout << "The input is invalid." << endl;
		}
	}
	return 0;
}