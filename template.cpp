#include<bits/stdc++.h>
using namespace std;
using ll=long long;
//int tolower(char ch);
//to upper(char ch);

void covert_case(string& s,char ch='l'){
	if(ch=='l')transform(s.begin(),s.end(),s.begin(),::tolower);
	else transform(s.begin(),s.end(),s.begin(),::toupper);
}