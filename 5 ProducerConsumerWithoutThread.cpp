#include<iostream>
using namespace std;

int s=1,f=0,e=5;
int wait(int s)
{
	return --s;
}
int signal(int f)
{
	return ++f;	
}
void produce()
{
	s=wait(s);
	f=signal(f);
	e=wait(e);
	cout<<endl;
	cout<<"*******Producing*********"<<endl;
	cout<<endl;
	s=signal(s);
}

void consume()
{
	s=wait(s);
	e=signal(e);
	f=wait(f);
	cout<<endl;
	cout<<"**********Consuming***********"<<endl;	
	cout<<endl;
	s=signal(s);
}

int main()
{
	cout<<"\t\t Producer and Consumer"<<endl;
	while(true)
	{
		cout<<"1 for Producer"<<endl;
		cout<<"2 for Consumer"<<endl;
		cout<<"3 for exit"<<endl;
		int ch;
		cout<<"Choice=";
		cin>>ch;
		switch(ch)
		{
			case 1:
			{
				if(s==1 and e!=0)
				{
					produce();
				}
				break;
			}
			case 2:
			{		
				if(s==1 and f!=0)
				{
					consume();
				}
				break;
			}
			case 3:
			{
				break;	
			}	
		}
	}
}
