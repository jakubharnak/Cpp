#include <iostream>

using namespace std;

struct struktura
{
	string nazov, sachovnica[8][8]; 
};

bool validacia(struktura s)		
{
	bool k = false, K = false;
	
	for(int a = 0; a < 8; a++)		// zistuje stlpec (ci je tam 'k')
	{
		for(int b = 0; b < 8; b++)		// zistuje riadok (ci je tam 'k') 
		{
			string pole = s.sachovnica[a][b];
			
		   if(pole == "k")
		   {
				k = true;
		   }
		   if(pole == "K")
		   {
				K = true;
		   }
		}
	}
	if(k == true && K == true)		//validna moze byt len ak je tam 'k' a aj 'K'	
	{
		k = true;
	}
	else 							//ine moznosti su nevalidne
	{
		k = false;
	}
	
	return k;
}

int main()
{
	struktura s;
	
	cin >> s.nazov;
	
	for(int a = 0; a < 8; a++) 
	{
		for(int b = 0; b < 8; b++)
		{
			string pole;
			cin >> pole;
			
			s.sachovnica[a][b] = pole;
		}	
	}
	
	cout << endl;
	
	if(validacia(s) == true)
	{
		cout << s.nazov << " " << ": Validna" << endl;
	}
	else
	{
		cout << s.nazov << " " << ": Nevalidna" << endl;
	}
	
	return 0;
}
