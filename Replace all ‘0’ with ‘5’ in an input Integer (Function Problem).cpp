// Replace all ‘0’ with ‘5’ in an input Integer (Function Problem)
/*
Given a number your task is to complete the function convertFive which replace all zeros in the number with 5 and returns the number.
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/*you are required to complete this method*/
int convertFive(int n)
{
//Your code here
	int nc = n;
	int tp = 1;
	int nn = 0;
	while(nc>0){
		
		if(nc%10==0){
			nn += 5*tp;
		}else{
			nn += nc%10*tp;
		}
		tp*=10;
		nc/=10;
	}
	return nn;
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	
	int t;
	int n;
	
	cin>>t;
	
	while(t--){
		cin>>n;
		cout<<convertFive(n)<<endl;
	}
	return 0;
}












