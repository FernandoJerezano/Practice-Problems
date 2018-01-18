// Find first repeated character
/*
Given a string s, the task is to find the first repeated character in it. We need to find the character that occurs more than once and whose index of first occurrence is smallest.
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

void print(){
	
	for(int i=0;i<26;i++){
		printf("%d ",chr[i]);
	}
	printf("\n");
	
}

int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);
	
	int t;
	string s;
	char c;
	bool found;
	
	cin>>t;
	
	while(t--){
		cin>>s;
		
		found = false;
		init();
		
		for(int i=0;i<s.size();i++){
			c = s[i];
			//printf("%c %d\n",c,chr[c-'a']);
			if(chr[c-'a']){
				found = true;
				break;
			}
			chr[c-'a']++;
			//print();
		}
		//printf("\n");
		if(found){
			printf("%c\n",c);
		}else{
			printf("-1\n");
		}
	}
	return 0;
}
