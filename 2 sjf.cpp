
#include<iostream>
using namespace std;
int main()
{
	int i,j,temp,b[10],n;
	float tat=0,w=0,sum=0;
	cout<<"Enter number of processes: ";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<"Burst time of "<<i<<" process: ";
		cin>>b[i];
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		 	if(b[i]<b[j])
		 	{
		 		temp=b[i];
		 		b[i]=b[j];
		 		b[j]=temp;
			}
		}
	}
	cout<<b[2];
	cout<<"\n\tProcess \t   BT    \t Waiting time \t turn around time\n";
	for(i=1;i<=n;i++)
	{	
		tat=b[i]+w;
		cout<<"Process   "<<i<<"  \t\t   "<<b[i]<<"  \t\t  "<<w<<"  \t\t "<<tat<<endl;
		w+=b[i];
		sum=sum+tat;
	}
	cout<<"Average waiting time : "<<tat/n<<endl;
	cout<<"Average TAT :"<<sum/n;
	return 0;
	}
	

