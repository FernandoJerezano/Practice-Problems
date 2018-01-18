// Anagram
/*
Given two strings, check whether two given strings are anagram of each other or not. An anagram of a string is another string that contains same characters, only the order of characters can be different. For example, “act” and “tac” are anagram of each other.
*/
#include <iostream>
#include <bits/stdc++.h>
#define MAX 26
using namespace std;

int count_x[MAX];
int count_y[MAX];

void init(){
	for(int i=0;i<26;i++){
		count_x[i] = 0;
		count_y[i] = 0;
	}
}

bool check(){
	
	for(int i = 0;i<26;i++){
	
		if(count_x[i]!=count_y[i]){
			return false;
		}
	}
	return true;
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	
	int t;
	string x,y;
	
	cin>>t;
	
	while(t--){
		cin>>x;
		cin>>y;
		
		init();
		for(int i=0;i<x.size();i++){
			count_x[x[i]-'a']++;
		}
		for(int i=0;i<y.size();i++){
			count_y[y[i]-'a']++;
		}
		if(check()){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		
	}
	
	return 0;
}
