#include<iostream>
using namespace std;
int main (){
	int Time,Second;
	cout<<"\n Enter Seconds Of The Game :";
	cin>>Second;
	Time=Second/3600;
	Second=Second%3600;
	cout<<"\n Hour :"<<Time;
	Time=Second/60;
	Second=Second%60;
	cout<<"\n Minutes :"<<Time;
	cout<<"\n Seconds :"<<Second;
	return 0;
}