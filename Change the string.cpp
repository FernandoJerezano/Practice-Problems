// Change the string
/*
Given a string S, the task is to change the string according to the condition; If the first letter in a string is capital letter then change the full string to capital letters, else change the full string to small letters.
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
	string s;
	
	cin>>t;
	
	while(t--){
		cin>>s;
		if(s[0]>='a' && s[0]<='z'){
			for(int i=0;i<s.size();i++){
				if(s[i]>='A' && s[i]<='Z'){
					printf("%c",s[i]+32);
				}else{
					printf("%c",s[i]);
				}
			}
		}else{
			for(int i=0;i<s.size();i++){
				if(s[i]>='a' && s[i]<='z'){
					printf("%c",s[i]-32);
				}else{
					printf("%c",s[i]);
				}
			}
		}
		printf("\n");
	}
	return 0;
}
