// Maximum money
/*
Given street of houses (a row of houses), each house having some amount of money kept inside; now there is a thief who is going to steal this money but he has a constraint/rule that he cannot steal/rob two adjacent houses. Find the maximum money he can rob.
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	
	int t;
	int m,n,r;
	
	cin>>t;
	while(t--){
		cin>>n>>m;
		if(n%2==0){
			r = n/2*m;
		}else{
			r = n/2*m+m;
		}
		printf("%d\n",r);
	}
	
	return 0;
}
