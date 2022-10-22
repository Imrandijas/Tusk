// Student grading system 
#include<iostream>
using namespace std;
int main()
{
	int numberSubject,marks[100],sum=0,total=100,ftotal,per;
	
	cout<<"Enter number of subject:"<<endl;
	cin>>numberSubject;
	
	for(int i=1;i<=numberSubject;i++)
	{
		cout<<"Enter the obtained marks out of 100 each:"<<endl;
	 cin>>marks[i];	
	}
	for(int j=1;j<=numberSubject;j++)
	{
	cout<<"Subject "<<j<<"= "<<marks[j]<<endl;	
	sum+=marks[j];
	}
	cout<<"Sum of the "<<numberSubject<<"4Subject= "<<sum<<endl;
	
	ftotal=total*numberSubject;
	per=(sum*100)/ftotal;
	
	cout<<"Percentage ="<<per<<"%";
	
	
	
}
