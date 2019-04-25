#include<bits/stdc++.h>
using namespace std;
int main()
{
	//Input Area
	
	int P_no,next,temp1;
	float av_wait=0,av_tat=0,total1=0,total2=0;
	cout<<"No. of process"<<"\n";
	cin>>P_no;
	int p[P_no],A[P_no],B[P_no],wait[P_no],compli[P_no],tat[P_no],prior[P_no];
	 
	for(int i =1;i<=P_no;i++)
	{
		p[i] = i;
		cout<<"Enter P"<<i<<" Arrival time and Burst time"<<"\n";
		
		cin>>A[i]>>B[i];
	}
	                //Display Area of 
	    cout<<"\t\tYour Entered details :"<<"\n\n";
	cout<<"Process No. "<<"\tArival Time"<<"\tBurst Time"<<"\n";
	for(int i =1;i<=P_no;i++)
	{
		cout<<p[i]<<"\t\t"<<A[i]<<"\t\t"<<B[i]<<"\n";
		
	}
	// Working Area
	//selection sort
	for(int i =1;i<=P_no;i++)
	{
		next = i;
		for(int j =i+1;j<=P_no;j++)
		{
			if(A[j]<A[next])
			next = j;
			if(B[j]<B[next])
			next = j;
			
		}
		
	
		temp1 = A[i];
		A[i] = A[next];
		A[next] = temp1;
		
		temp1 = B[i];
		B[i] = B[next];
		B[next] = temp1;
		
		
		temp1 = p[i];
		p[i] = p[next];
		p[next] = temp1;	
	}
	
	int sum =0;
	for(int i =1;i<=P_no;i++)
	{
		sum+=B[i];
		compli[i] =sum;
		tat[i] = compli[i]-A[i];
		wait[i] = tat[i] -B[i];
	
    }
    
      cout<<"\n\t\tAfter sorting according to arival time and burst time :"<<"\n\n";
	cout<<"Process No."<<"\tArival Time"<<"\tBurst Time"<<"\tComplition"<<"\tturnArountTime(ct-at)"<<"\tWaiting(tat-bt)\n";
	for(int i =1;i<=P_no;i++)
	{
		cout<<p[i]<<"\t\t"<<A[i]<<"\t\t"<<B[i]<<"\t\t"<<compli[i]<<"\t\t"<<tat[i]<<"\t\t\t\t"<<wait[i]<<"\n";
		
	}
    // priority
    for(int i =1;i<=P_no;i++)
    {
    prior[i] =1+(wait[i]/B[i]);
	}
     cout<<"\n\t\tAfter calculating priority from formula 1+wait[i]/Burst[i]\n\n";
cout<<"Process No."<<"\tArival Time"<<"\tBurst Time"<<"\tComplition"<<"\tturnArountTime"<<"\tWaiting"<<"\t\tpriority\n";
	for(int i =1;i<=P_no;i++)
	{
		cout<<p[i]<<"\t\t"<<A[i]<<"\t\t"<<B[i]<<"\t\t"<<compli[i]<<"\t\t"<<tat[i]<<"\t\t"<<wait[i]<<"\t\t"<<prior[i]<<"\n";
		
	}
	//
		int sum1 =0;
	for(int i =P_no;i>0;i--)
	{
		sum1+=B[i];
		compli[i] =sum1;
		tat[i] = compli[i]-A[i];
		wait[i] = tat[i] -B[i];
	
    }
    for(int i =0;i<P_no;i++)
    {
    	total1+=tat[i];
    	total2 +=wait[i];
	}
	av_tat = total1/P_no;
	av_wait = total2/P_no;
    cout<<"\n\t\t Calculating C.T, T.A.T, W.T According to Higher priority to lower priority\n\n";
	cout<<"Process No."<<"\tArival Time"<<"\tBurst Time"<<"\tComplition"<<"\tturnArountTime"<<"\tWaiting\n";
	for(int i =P_no;i>0;i--)
	{
		cout<<p[i]<<"\t\t"<<A[i]<<"\t\t"<<B[i]<<"\t\t"<<compli[i]<<"\t\t"<<tat[i]<<"\t\t"<<wait[i]<<"\n";
		
	}
	cout<<"\n\nAverage TurnAroundTime:"<<av_tat<<"\n";
	cout<<"Average WaitingTime:"<<av_wait;
	
}
