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

int main(){
	
	ios::sync_with_stdio(false);

	while(scanf("%d", &n), n!=0)
	{
		while(1)
		{
			stack<int> estacao, t;
			while(!estacao.empty())
				estacao.pop();
			while(!t.empty())
				t.pop();

			for(int i = n; i>0; i--)	
				t.push(i);

			scanf("%d", &m);
			if(!m)
				break;
			
			for(int i = 1; i<=n; ++i)
			{
				int boolean=0;
				if(!estacao.empty()){
					if(m == estacao.top()){
						estacao.pop();
						boolean++;
					}
				}
				else if(!t.empty()){
					if(m == t.top()){
						t.pop();
						boolean++;
					}
				}

				if(!boolean && !t.empty())
				{
					while(!t.empty())
					{
						if(m == t.top())
							break;
						estacao.push(t.top());
						t.pop();
					}
					if(!t.empty())
						if(m == t.top())
							t.pop();
				}

				if(i == n) 
					break;
				scanf("%d", &m);
			}

			if(estacao.empty() && t.empty())
				printf("Yes\n");
			else
				printf("No\n");
		}
		printf("\n");
	}
	return 0;
}

