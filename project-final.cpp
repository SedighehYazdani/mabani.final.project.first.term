#include <iostream>
#include <vector>
using namespace std;

struct kala{string name;double price;int stock;};
vector<kala> game;
vector<kala> Console;
vector<kala> Monitor;
vector<kala> Headset;
vector<kala> sabad;
int gamenumber=0;
int consolenumber=0;
int monitornumber=0;
int headsetnumber=0;
int sabadnumber=0;
int Aaccount=1000000;
int Uaccount=150000;
void ezafe()
{
	kala newkala;
	cout<<"Which product do you want to add?"<<endl;
	cout<<"1.Game"<<endl;
	cout<<"2.Console"<<endl;
	cout<<"3.Manitor"<<endl;
	cout<<"4.Headset"<<endl;
	
	int a;
	cin>>a;
	
	switch(a)
	{
		case 1:
			cout<<"Pleas enter the name: "<<endl;
			cin>>newkala.name;
			cout<<"Pleas enter the price: "<<endl;
			cin>>newkala.price;
			cout<<"Pleas enter the stock: "<<endl;
			cin>>newkala.stock;
			game.push_back(newkala);
			gamenumber++;
			cout<<"game added!"<<endl;
			break;
			
		case 2:
			cout<<"Pleas enter the name: "<<endl;
			cin>>newkala.name;
			cout<<"Pleas enter the price: "<<endl;
			cin>>newkala.price;
			cout<<"Pleas enter the stock: "<<endl;
			cin>>newkala.stock;
			Console.push_back(newkala);
			consolenumber++;
			cout<<"game added!"<<endl;
			break;

			
		case 3:
			cout<<"Pleas enter the name: "<<endl;
			cin>>newkala.name;
			cout<<"Pleas enter the price: "<<endl;
			cin>>newkala.price;
			cout<<"Pleas enter the stock: "<<endl;
			cin>>newkala.stock;
			Monitor.push_back(newkala);
            monitornumber++;
            cout<<"game added!"<<endl;
            break;

		case 4:
			cout<<"Pleas enter the name: "<<endl;
			cin>>newkala.name;
			cout<<"Pleas enter the price: "<<endl;
			cin>>newkala.price;
			cout<<"Pleas enter the stock: "<<endl;
			cin>>newkala.stock;
			Headset.push_back(newkala);
			headsetnumber++;
			cout<<"game added!"<<endl;
			break;
			
		default:
			cout << "your number is invalid, pleas try again!";
            break;
	}
	cout<<"Do you want to keep on in this part?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.go back to the admin's menu"<<endl;
	
	int b;
	cin>>b;
	switch(b)
	{
		case 1:
			ezafe();
			break;

		
		default:
			cout << "returning"<<endl;
            break;
	}
}
void hazf()
{
	string hkala;
	cout<<"Which product do you want to delete?"<<endl;
	cout<<"1.Game"<<endl;
	cout<<"2.Console"<<endl;
	cout<<"3.Manitor"<<endl;
	cout<<"4.Headset"<<endl;
	
	int a;
	cin>>a;
	
	switch(a)
	{
		case 1:
			cout<<"pleas enter the name of game: "<<endl;
			cin>>hkala;
			for(int i=0;i<gamenumber;i++)
			{
				if(game[i].name==hkala)
				{
					game.erase(game.begin()+i);
					cout<<"game deleted!"<<endl;
					gamenumber--;
					return;
				}
			}
		    cout<<"game not found!";	
			break;
			    
		case 2:
			cout<<"pleas enter the name of Console: "<<endl;
			cin>>hkala;
			for(int i=0;i<consolenumber;i++)
			{
				if(Console[i].name==hkala)
				{
					Console.erase(Console.begin()+i);
					cout<<"Console deleted!"<<endl;
					consolenumber--;
					return;
				}
			}
		    cout<<"Console not found!";
			break;
			    
		case 3:
			cout<<"pleas enter the name of Monitor: "<<endl;
			cin>>hkala;
			for(int i=0;i<monitornumber;i++)
			{
				if(Monitor[i].name==hkala)
				{
					Monitor.erase(Monitor.begin()+i);
					cout<<"Monitor deleted!"<<endl;
					monitornumber--;
					return;
				}
			}
		    cout<<"monitor not found!";
			break;
			    
		case 4:
			cout<<"pleas enter the name of headset: "<<endl;
			cin>>hkala;
			for(int i=0;i<headsetnumber;i++)
			{
				if(Headset[i].name==hkala)
				{
					Headset.erase(Headset.begin()+i);
					cout<<"Headset deleted!"<<endl;
					headsetnumber--;
					return;
				}
			}
		    cout<<"Headset not found!";
			break;
			    
	    default:
	    	cout<<"returning"<<endl;
	    	break;
	}
    cout<<"Do you want to keep on in this part?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.go back to the admin's menu"<<endl;
	int b;
	cin>>b;
	switch(b)
	{
		case 1:
			hazf();
		
		default:
			cout << "returning"<<endl;
            break;
	}
}
