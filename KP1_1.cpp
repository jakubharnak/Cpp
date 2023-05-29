#include <iostream>
using namespace std;
int main()
{
  string text[50],a;
  int n;
 
	cin >> n;
 
 	for(int i=0;i<n;i++){
 		cin >> text[i];
 		cout<< endl;
 		}
 		
	for(int i=0;i<n;i++){
		a = text[i];
		if (isdigit(a[0]))
    	cout << a << endl;
	}
  
   return 0 ;
}	

