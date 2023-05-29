#include <iostream>
#include <fstream>

using namespace std;

int main(){

	ifstream sms;				
	sms.open("sms.txt");
	if (!sms) return 1;

	string text;
	while(!sms.eof()){

		getline(sms,text);		
		for(int i = 0; i < text.size(); i++){

			if(i == 0){
				cout << endl;
				cout << "> 1. CAST: ";
			}
			else if(i == 160){
				cout << endl;
				cout << "> 2. CAST: ";	
			}
			else if(i == 320){
				cout << endl;
				cout << "> 3. CAST: ";
			}
			cout << text[i];	
		}
	}
	sms.close();
	return 0;
}