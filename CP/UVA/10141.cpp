#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#define W(x) cerr << "\033[31m" << #x << " = " << x << "\033[0m" << "\n";
#else
#define W(x) 42;
#endif

using namespace std;
 
int main(){
	
	int n, p, iteration=0;
	while(scanf("%d %d", &n, &p), n && p)
	{
		getchar();
		string best = " ";
		float bestp=0;
		int bestc=0;
		string aux;
		for(int i=0; i<n; i++)
			getline(cin, aux);
		for(int i=0; i<p; i++)
		{
			string obj;
			float price;
			int it;
			getline(cin, obj);
			cin >> price >> it;
			getchar();
			for(int i=0; i<it; i++)
				getline(cin, aux);
			if(best == " " || it>bestc)
			 { best=obj; bestp=price; bestc=it; }
			else if(it==bestc && price<bestp)
			 { best=obj; bestp=price; bestc=it; }
		}
		iteration++;
		if(iteration>1) cout << endl;
		cout << "RFP #" << iteration << endl << best << endl;
	}
	return 0;
}

