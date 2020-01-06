#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif
 
using namespace std;
 
string s;
int n, ordem[30];
 
int main(){
	
	int aux;
	cin >> aux;
	n+=aux;
	cin >> aux;
	n+=aux;
	cin >> aux;
	n+=aux;
	map<char, string> m;
	m['A'] = "Hallo neue welt!\n";
	m['E'] = "Hola nuevo mundo!\n";
	m['F'] = "Bonjour le nouveau monde!\n";
	m['I'] = "Hello new world!\n";
	m['P'] = "Ola novo mundo!\n";
	m['T'] = "Ciao nuovo mondo!\n";
 
 
	cin >> s;
	cout << m['T'];
	ordem['T'-'A']++;
	for(auto u: s)
	{
		if(!ordem[u-'A'])
		{
			ordem[u-'A']++;
			cout << m[u];
		}
	}
	return 0;
}
