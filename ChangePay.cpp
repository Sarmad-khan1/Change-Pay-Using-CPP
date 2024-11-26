#include <iostream>
using namespace std;
bool changePay(double change[], double totaldues);
int main()
{
	system("cls");
	double totaldues=0;
	
	double change[4];
	
	cout<<"Total Dues: ";
	cin>>totaldues;
	
	cout<<"Available Quarters: " ;
	cin>>change[0];
	
	cout<<"Available Dimes: ";
	cin>>change[1];
	
	cout<<"Available Nickel: ";
	cin>>change[2];
	
	cout<<"Available Pennies: ";
	cin>>change[3];
	
	
	bool receiver = changePay(change, totaldues);

	cout<<"Can you Pay? ";
	if(receiver)
	{
	cout<<"Yes"	;
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
bool changePay(double change[], double totaldues)
{
	int pennies = change[3] * 0.01;
	int nickel = change[2] * 0.05;
	int dimes = change[1] * 0.10;
	int quarters = change[0] * 0.25;
	
	int sum = quarters + dimes + nickel + pennies;
	
	if ( sum >= totaldues)
	{
		return true;
	}
	else 
	{
		return false;
	}
}