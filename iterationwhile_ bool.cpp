#include <iostream>
using namespace std;
int main()
{
	char choice;
	int count=0;
	bool stop= false;
	
	while(!stop)
	{
		cout<<"\n\n"<<count<<endl;
		cout<<"Continue (Y/N)?"<<endl;
		cin>>choice;
		if(choice!='Y' && choice!='y' && choice!='n' && choice!='N')
			cout<<choice<<" IS NOT A VALID INPUT"<<endl;
		else if(choice=='Y'|| choice=='y')
			count++;
		else if(choice=='N' || choice=='n')
			stop=true;
	}
	return 0;
}
