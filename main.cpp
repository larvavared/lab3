#include "sac.h"
#include<fstream>
#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;

int main(){
ifstream inFile("file.in",ios::in);
	
	int n,t,s,i,g;
	int a=0;
	
	if(!inFile) {
 	cerr << "Failed opening" << endl;
 	exit(1);
 	}

	inFile>>n;
	
	vector<int> cw(n);	

	for(s=0;s<n;s++){
		inFile>>cw.at(s);}

sort(cw.begin(),cw.end());


for(i=n-1;i>(n-6);i--)
{
	a=a+cw.at(i);
}

t=a;
cout<<t<<endl;




return 0;
}


