// Palindrome
/*
Given an integer, check whether it is a palindrome or not.
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(int n){
	
	int nn = 0;
	int t = n;
	int tp = 1;
	
	while(t>10){
		t /= 10;
		tp*=10;
	}
	t = n;
	
	while(t>0){
		nn += t%10*tp;
		t /= 10;
		tp /= 10;
	}
	//printf("%d %d\n",n,nn);
	return nn==n;
}


int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	int t,n;
	
	cin>>t;
	
	while(t--){
		cin>>n;
		if(is_palindrome(n)){
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}
	
	return 0;
}
