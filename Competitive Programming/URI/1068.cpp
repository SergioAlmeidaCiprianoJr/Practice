#include <bits/stdc++.h>
 
#define ll long long
#define prime 1000000000+7
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int n, m;
stack<char> pilha;

int main(){
	
	char aux;
	int erro=0;
	while(scanf("%c", &aux) != EOF)
	{
		if(aux=='\n')
		{
			if(erro || !pilha.empty()) printf("incorrect\n");
			else printf("correct\n");

			erro=0;
			while(!pilha.empty())
				pilha.pop();
			continue;
		}
		if(aux=='(')
			pilha.push(aux);
		else if(aux==')' && pilha.empty())
			erro++;
		else if(aux==')' && pilha.top()=='(')
			pilha.pop();
	}
	return 0;
}

