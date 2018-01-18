// Check if string is rotated by two places
/*
Given two strings, the task is to find if a string ('a') can be obtained by rotating another string ('b') by two places.
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool rotate(string x, string y, int a, int b){
	int s = x.size();
	for(int i=0;i<s;i++){
		if(x[(i+a)%s]!=y[(i+b)%s])
			return false;
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
		if(x.size()==y.size()){
			if(rotate(x,y,0,2) || rotate(x,y,0,x.size()-2)){
				printf("1\n");
			}else{
				printf("0\n");
			}
		}else{
			printf("0\n");
		}
		
		
	}
	
	return 0;
}





