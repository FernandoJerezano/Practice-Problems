// Pair cube count
/*
Given N, count all ‘a’ and ‘b’ that satisfy the condition a^3 + b^3 = N.
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	
	int t,n,m;
	int a,b;
	int c;
	
	cin>>t;
	
	while(t--){
		cin>>n;
		m = (int)(cbrt(n)+1.0);
		c = 0;
		//printf("M: %d\n",m);
		
		for(a=1;a<=m;a++){
			for(b=0;b<=m;b++){
				if(a*a*a+b*b*b==n){
					c++;
				}
			}
		}
		printf("%d\n",c);
	}
	return 0;
}
