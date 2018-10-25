#include<iostream>
using namespace std;
int main()
{
	int bt[10],rbt[10];
	int n;
	cout<<"Enter the number of process"<<endl;
	cout<<"N=";
	cin>>n;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cout<<"B["<<i+1<<"]=";
		cin>>bt[i];
		rbt[i]=bt[i];
		sum+=bt[i];
	}
	int wt[10],tat[10],t=0;
	int v=0;
	int tq;
	cout<<"ENter the time slice"<<endl;
	cin>>tq;
	while(sum>0)
	{
		v=0;
		for(int i=0;i<n;i++)
		{
			if(rbt[i]==0)
				v++;
		}
		if(v==n)
			break;
		for(int i=0;i<n;i++)
		{
			
		 	if(rbt[i]<=tq and rbt[i]!=0)
		 	{
	
			 	t=t+rbt[i];
			 	rbt[i]=0;
		 		wt[i]=t-bt[i];
		 		tat[i]=wt[i]+bt[i];
		 	}
		 	else if(rbt[i]>tq)
		 	{
		 		t=t+tq;
		 		rbt[i]=rbt[i]-tq;
			}
		}
		sum-=tq;
	}
		float sum1=0;
		for(int i=0;i<n;i++)
		{
			cout<<"Process["<<i+1<<"]"<<endl;
			cout<<"Wating time="<<wt[i]<<endl;
			cout<<"TurnAround time"<<tat[i]<<endl;
			sum1+=wt[i];
			cout<<endl;
			
		}
		cout<<"Average Waiting Time is:"<<sum1/n;
	}
