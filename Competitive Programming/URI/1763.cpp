#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033mapa["31m" << #x << " =      " << x << "\033mapa["0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int n, m;
string s;
map<string, string> mapa;

int main(){

	mapa["brasil"]				=	   "Feliz Natal!";
	mapa["alemanha"]            =      "Frohliche Weihnachten!";
	mapa["austria"]             =      "Frohe Weihnacht!";
	mapa["coreia"]              =      "Chuk Sung Tan!";
	mapa["espanha"]             =      "Feliz Navidad!";
	mapa["grecia"]              =      "Kala Christougena!";
	mapa["estados-unidos"]      =      "Merry Christmas!";
	mapa["inglaterra"]          =      "Merry Christmas!";
	mapa["australia"]           =      "Merry Christmas!";
	mapa["portugal"]            =      "Feliz Natal!";
	mapa["suecia"]              =      "God Jul!";
	mapa["turquia"]             =      "Mutlu Noeller";
	mapa["argentina"]           =      "Feliz Navidad!";
	mapa["chile"]               =      "Feliz Navidad!";
	mapa["mexico"]              =      "Feliz Navidad!";
	mapa["antardida"]           =      "Merry Christmas!";
	mapa["canada"]              =      "Merry Christmas!";
	mapa["irlanda"]             =      "Nollaig Shona Dhuit!";
	mapa["belgica"]             =      "Zalig Kerstfeest!";
	mapa["italia"]              =      "Buon Natale!";
	mapa["libia"]               =      "Buon Natale!";
	mapa["siria"]               =      "Milad Mubarak!";
	mapa["marrocos"]            =      "Milad Mubarak!";
	mapa["japao"] 				=      "Merii Kurisumasu!";
		
	while(cin >> s)
	{
		if ( mapa.find(s) == mapa.end() )
			cout << "--- NOT FOUND ---" << endl;
		else
			cout << mapa[s] << endl;
	}

	return 0;
}

