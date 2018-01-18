// Check String
/*
Given a string S , write a program to check if all the characters of the string are same or not.
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int chr[26];

void init(){
	for(int i=0;i<26;i++){
		chr[i] = 0;
	}
}

bool check(){
	
	int cont = 0;
	for(int i=0;i<26;i++){
		if(chr[i])
			cont++;
	}
	
	if(cont==1){
		return true;
	}
	return false;
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	
	int t;
	string s;
	
	cin>>t;
	
	while(t--){
		
		init();
		
		cin>>s;
		
		for(int i=0;i<s.size();i++){
			chr[s[i]-'a']++;
		}
		
		if(check()){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		
	}
	
	return 0;
}












