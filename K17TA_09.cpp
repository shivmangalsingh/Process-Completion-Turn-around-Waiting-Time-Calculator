#include<bits/stdc++.h>
using namespace std;
int main()
{
	//Input Area
	
	int P_no;
	cout<<"No. of process"<<"\n";
	cin>>P_no;
	int p[P_no],A[P_no],B[P_no];
	 
	for(int i =0;i<P_no;i++)
	{
		p[i] = i;
		cout<<"Enter P"<<i<<" Arrival time and Burst time"<<"\n";
		
		cin>>A[i]>>B[i];
	}
	//Display Area
	    cout<<"\tYour Entered details :"<<"\n\n";
	    cout<<"Process No."<<"\tArival Time"<<"\tBurst Time"<<"\n";
	for(int i =0;i<P_no;i++)
	{
		cout<<p[i]<<"\t\t"<<A[i]<<"\t\t"<<B[i]<<"\n";
		
	}
	// Working Area
	
	
}
