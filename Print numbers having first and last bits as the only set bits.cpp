// Print numbers having first and last bits as the only set bits
/*
Given a positive integer n. The problem is to print numbers in the range 1 to n having first and last bits as the only set bits.
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

	unsigned long long int n;
	cin>>n;
	
	cout<<"1";
	unsigned long long p = 1;
	unsigned long long i;
	
	for(i=3;i<=n;i++){
		p = p<<1;
		
		if(p>n){
			break;
		}
		cout<<" "<<p+1;
	}
	cout<<"\n";
	return 0;
}
