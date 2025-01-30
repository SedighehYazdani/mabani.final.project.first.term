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

void search()
{
    string skala;
	cout<<"Whae kind of product do you want to look for?"<<endl;
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
			cin>>skala;
			for(int i=0;i<gamenumber;i++)
			{
				if(game[i].name==skala)
				{
				cout<<"name: "<<game[i].name<<endl;
				cout<<"price: "<<game[i].price<<endl;
				cout<<"stock: "<<game[i].stock<<endl;
					return;
				}
			}
		    cout<<"game not found!";	
			break;
			    
		case 2:
			cout<<"pleas enter the name of Console: "<<endl;
			cin>>skala;
			for(int i=0;i<consolenumber;i++)
			{
				if(Console[i].name==skala)
				{
				    cout<<"name: "<<Console[i].name<<endl;
			    	cout<<"price: "<<Console[i].price<<endl;
			    	cout<<"stock: "<<Console[i].stock<<endl;
					return;
				}
			}
		    cout<<"Console not found!";
			break;
			    
		case 3:
			cout<<"pleas enter the name of Monitor: "<<endl;
			cin>>skala;
			for(int i=0;i<monitornumber;i++)
			{
				if(Monitor[i].name==skala)
				{
					cout<<"name: "<<Monitor[i].name<<endl;
			    	cout<<"price: "<<Monitor[i].price<<endl;
			    	cout<<"stock: "<<Monitor[i].stock<<endl;
				
					return;
				}
			}
		    cout<<"monitor not found!";
			break;
			
		case 4:
			cout<<"pleas enter the name of headset: "<<endl;
			cin>>skala;
			for(int i=0;i<headsetnumber;i++)
			{
				if(Headset[i].name==skala)
				{
				    cout<<"name: "<<Headset[i].name<<endl;
			    	cout<<"price: "<<Headset[i].price<<endl;
			    	cout<<"stock: "<<Headset[i].stock<<endl;
					return;
				}
			}
		    cout<<"Headset not found!";
			break;
			    
	    default:
	    	cout<<"The number is invalid. Pleas try again!";
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
			search();
		
		default:
			cout << "returning"<<endl;
            break;
	}
}

void value()
{
	int sum=0;
	for(int i=0;i<gamenumber;i++)
	{
		sum=sum+game[i].price*game[i].stock;
	}
	for(int i=0;i<consolenumber;i++)
	{
		sum=sum+Console[i].price*Console[i].stock;
	}
	for(int i=0;i<monitornumber;i++)
	{
		sum=sum+Monitor[i].price*Monitor[i].stock;
	}
	for(int i=0;i<headsetnumber;i++)
	{
		sum=sum+Headset[i].price*Headset[i].stock;
	}
	cout<<"The valu of all goods is "<<sum<<endl;
	
	cout<<"Do you want to keep on in this part?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.go back to the admin's menu"<<endl;
	int b;
	cin>>b;
	switch(b)
	{
		case 1:
			search();
		
		default:
			cout << "returning"<<endl;
            break;
	}
}

void chargeA()
{
	cout<<"Your account balance is "<<Aaccount<<endl;
	cout<<"How much money do you want to charge your account?"<<endl;
	int n;
	cin>>n;
	Aaccount=Aaccount+n;
	cout<<"Your account balance is"<<Aaccount<<endl;
	
	cout<<"Do you want to keep on in this part?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.go back to the admin's menu"<<endl;
	int b;
	cin>>b;
	switch(b)
	{
		case 1:
			chargeA();
		
		default:
			cout <<"returning"<<endl;
            break;
	}
}

void mojodimoneyA()
{
	cout<<"Your account balance for purchasing new products is "<<Aaccount<<endl;
	
	cout<<"Do you want to keep on in this part?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.go back to the admin's menu"<<endl;
	int b;
	cin>>b;
	switch(b)
	{
		case 1:
			mojodimoneyA();
		
		default:
			cout <<"returning"<<endl;
            break;
	}
}

void mojodikala()
{
	for(int i=0;i<gamenumber;i++)
	{
    	cout<<"Category: Game"<<endl;
		cout<<"name: "<<game[i].name<<endl;
		cout<<"price: "<<game[i].price<<endl;
		cout<<"stock: "<<game[i].stock<<endl;	
	}
	
	for(int i=0;i<consolenumber;i++)
	{
    	cout<<"Category: Console"<<endl;
		cout<<"name: "<<Console[i].name<<endl;
		cout<<"price: "<<Console[i].price<<endl;
		cout<<"stock: "<<Console[i].stock<<endl;	
	}
	
	for(int i=0;i<monitornumber;i++)
	{
    	cout<<"Category: Monitor"<<endl;
		cout<<"name: "<<Monitor[i].name<<endl;
		cout<<"price: "<<Monitor[i].price<<endl;
		cout<<"stock: "<<Monitor[i].stock<<endl;	
	}
	
	for(int i=0;i<headsetnumber;i++)
	{
    	cout<<"Category: Headset"<<endl;
		cout<<"name: "<<Headset[i].name<<endl;
		cout<<"price: "<<Headset[i].price<<endl;
		cout<<"stock: "<<Headset[i].stock<<endl;	
	}
	cout<<"Do you want to keep on in this part?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.go back to the admin's menu"<<endl;
	int b;
	cin>>b;
	switch(b)
	{
		case 1:
			mojodikala();
		
		default:
			cout <<"returning"<<endl;
            break;
	}
	
}

void mojodikalaU()
{
	cout<<"Your account balance is"<<Uaccount<<endl;
	
	for(int i=0;i<gamenumber;i++)
	{
    	cout<<"Category: Game"<<endl;
		cout<<"name: "<<game[i].name<<endl;
		cout<<"price: "<<game[i].price<<endl;
		cout<<"stock: "<<game[i].stock<<endl;	
	}
	
	for(int i=0;i<consolenumber;i++)
	{
    	cout<<"Category: Console"<<endl;
		cout<<"name: "<<Console[i].name<<endl;
		cout<<"price: "<<Console[i].price<<endl;
		cout<<"stock: "<<Console[i].stock<<endl;	
	}
	
	for(int i=0;i<monitornumber;i++)
	{
    	cout<<"Category: Monitor"<<endl;
		cout<<"name: "<<Monitor[i].name<<endl;
		cout<<"price: "<<Monitor[i].price<<endl;
		cout<<"stock: "<<Monitor[i].stock<<endl;	
	}
	
	for(int i=0;i<headsetnumber;i++)
	{
    	cout<<"Category: Headset"<<endl;
		cout<<"name: "<<Headset[i].name<<endl;
		cout<<"price: "<<Headset[i].price<<endl;
		cout<<"stock: "<<Headset[i].stock<<endl;	
	}
	cout<<"Do you want to keep on in this part?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.go back to the user's menu"<<endl;
	int b;
	cin>>b;
	switch(b)
	{
		case 1:
			mojodikalaU();
		
		default:
			cout <<"returning";
            break;
	}
	
}

void searchU()
{
    string skala;
	cout<<"Whae kind of product do you want to look for?"<<endl;
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
			cin>>skala;
			for(int i=0;i<gamenumber;i++)
			{
				if(game[i].name==skala)
				{
				cout<<"name: "<<game[i].name<<endl;
				cout<<"price: "<<game[i].price<<endl;
				cout<<"stock: "<<game[i].stock<<endl;
					return;
				}
			}
		    cout<<"game not found!";	
			break;
			    
		case 2:
			cout<<"pleas enter the name of Console: "<<endl;
			cin>>skala;
			for(int i=0;i<consolenumber;i++)
			{
				if(Console[i].name==skala)
				{
				    cout<<"name: "<<Console[i].name<<endl;
			    	cout<<"price: "<<Console[i].price<<endl;
			    	cout<<"stock: "<<Console[i].stock<<endl;
					return;
				}
			}
		    cout<<"Console not found!";
			break;
			    
		case 3:
			cout<<"pleas enter the name of Monitor: "<<endl;
			cin>>skala;
			for(int i=0;i<monitornumber;i++)
			{
				if(Monitor[i].name==skala)
				{
					cout<<"name: "<<Monitor[i].name<<endl;
			    	cout<<"price: "<<Monitor[i].price<<endl;
			    	cout<<"stock: "<<Monitor[i].stock<<endl;
				
					return;
				}
			}
		    cout<<"monitor not found!";
			break;
			
		case 4:
			cout<<"pleas enter the name of headset: "<<endl;
			cin>>skala;
			for(int i=0;i<headsetnumber;i++)
			{
				if(Headset[i].name==skala)
				{
				    cout<<"name: "<<Headset[i].name<<endl;
			    	cout<<"price: "<<Headset[i].price<<endl;
			    	cout<<"stock: "<<Headset[i].stock<<endl;
					return;
				}
			}
		    cout<<"Headset not found!";
			break;
			    
	    default:
	    	cout<<"The number is invalid. Pleas try again!";
	    	break;
    }
	cout<<"Do you want to keep on in this part?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.go back to the user's menu"<<endl;
	int b;
	cin>>b;
	switch(b)
	{
		case 1:
			searchU();
		
		default:
			cout << "returning"<<endl;
            break;
	}
}

void mojodipool()
{
	cout<<"Your account balance is: "<<Uaccount<<endl;
	cout<<"Do you want to keep on in this part?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.go back to the user's menu"<<endl;
	int b;
	cin>>b;
	switch(b)
	{
		case 1:
			searchU();
		
		default:
			cout << "returning"<<endl;
            break;
	}
}

void sabd()
{
	int t=0;
	cout<<"Your account balance is "<<Uaccount<<endl;
	cout<<"Your cart includs: "<<endl;
	for(int i=0;i<sabadnumber;i++)
	{
		cout<<"name: "<<sabad[i].name<<endl;
		cout<<"price: "<<sabad[i].price<<endl;
		cout<<"stouk: "<<sabad[i].stock<<endl;
		t=t+sabad[i].stock*sabad[i].price;
	}
	cout<<"Total amount in your shopping cart is: "<<t<<endl;
	cout<<"Do you want to keep on in this part?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.go back to the user's menu"<<endl;
	int b;
	cin>>b;
	switch(b)
	{
		case 1:
			sabd();
			
		default:
			cout <<"returning"<<endl;
            break;
	}
}

void chargeU()
{
	cout<<"Your account balance is "<<Uaccount<<endl;
	cout<<"How much money do you want to charge your account?"<<endl;
	int n;
	cin>>n;
	Uaccount=Uaccount+n;
	cout<<"Your account balance is"<<Uaccount<<endl;
	
	cout<<"Do you want to keep on in this part?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.go back to the user's menu"<<endl;
	int b;
	cin>>b;
	switch(b)
	{
		case 1:
			chargeU();

		default:
			cout <<"returning"<<endl;
            break;
	}
}

void cart()
{
	cout<<"pleas enter the category: "<<endl;
	cout<<"1.Game"<<endl;
	cout<<"2.Console"<<endl;
	cout<<"3.Monitor"<<endl;
	cout<<"4.Headset"<<endl;
	int x;
	cin>>x;
	cout<<"pleas enter the name of the product that you want to add to your cart: "<<endl;
	string esm;
	cin>>esm;
	switch(x)
	{
		case 1:
			for(int i=0;i<gamenumber;i++)
			{
				if(game[i].name==esm)
				{
					int h;
					h=game[i].stock;
					cout<<"How many of this product do you want?"<<"(maximum: "<<h<<" )"<<endl;
					int y;
					cin>>y;
				    while(y>h)
					{
						cout<<"Your number is invalid. Pleas try again"<<endl;
						cin>>y;
					}
					sabad.push_back(game[i]);
					sabad[sabadnumber].stock=y;
					sabadnumber++;
					game[i].stock=game[i].stock-y;
					cout<<y<<" "<<game[i].name<<" added to your cart"<<endl;
					return;
				}
			}
			cout<<"There is no game with that name. Pleas try again!"<<endl;
			break;
		case 2:
			for(int i=0;i<consolenumber;i++)
			{
				if(Console[i].name==esm)
				{
					int h;
					h=Console[i].stock;
					cout<<"How many of this product do you want?"<<"(maximum: "<<h<<" )"<<endl;
					int y;
					cin>>y;
				    while(y>h)
					{
						cout<<"Your number is invalid. Pleas try again"<<endl;
						cin>>y;
					}
					sabad.push_back(game[i]);
					sabad[sabadnumber].stock=y;
					sabadnumber++;
					Console[i].stock=Console[i].stock-y;
					cout<<y<<" "<<Console[i].name<<"added to your cart"<<endl;
					return;
				}
			}
			cout<<"There is no consol with that name. Pleas try again!"<<endl;
			break;
		case 3:
			for(int i=0;i<monitornumber;i++)
			{
				if(Monitor[i].name==esm)
				{
					int h;
					h=Monitor[i].stock;
					cout<<"How many of this product do you want?"<<"(maximum: "<<h<<" )"<<endl;
					int y;
					cin>>y;
				    while(y>h)
					{
						cout<<"Your number is invalid. Pleas try again"<<endl;
						cin>>y;
					}
					cout<<y<<" "<<Monitor[i].name<<"added to your cart"<<endl;
					sabad.push_back(game[i]);
					sabad[sabadnumber].stock=y;
					sabadnumber++;
				    Monitor[i].stock=Monitor[i].stock-y;
					return;
				}
			}
			cout<<"There is no monitor with that name!"<<endl;
			break;
		case 4:
			for(int i=0;i<headsetnumber;i++)
			{
				if(Headset[i].name==esm)
				{
					int h;
					h=Headset[i].stock;
					cout<<"How many of this product do you want?"<<"(maximum: "<<h<<" )"<<endl;
					int y;
					cin>>y;
				    while(y>h)
					{
						cout<<"Your number is invalid. Pleas try again"<<endl;
						cin>>y;
					}
					cout<<y<<" "<<Headset[i].name<<"added to your cart"<<endl;
					sabad.push_back(game[i]);
					sabad[sabadnumber].stock=y;
					sabadnumber++;
					Headset[i].stock=Headset[i].stock-y;
					return;
				}
			}
			cout<<"There is no headset with that name!"<<endl;
			break;
		default:
			cout<<"Your number is invalid. Pleas try again!";
			break;
	}
	cout<<"Do you want to keep on in this part?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.go back to the user's menu"<<endl;
	int b;
	cin>>b;
	switch(b)
	{
		case 1:
			cart();
			
		default:
			cout <<"returning"<<endl;
            break;
	}
}

void dastebandiU()
{
	cout<<"Which category do you want to look?"<<endl;
	cout<<"1.Game"<<endl;
	cout<<"2.Console"<<endl;
	cout<<"3.Monitor"<<endl;
	cout<<"4.Headset"<<endl;
	
	int a;
	cin>>a;
	
	switch(a)
	{
		case 1:
			for(int i=0;i<gamenumber;i++)
			{
				cout<<"name: "<<game[i].name<<endl;
				cout<<"price: "<<game[i].price<<endl;
				cout<<"stock: "<<game[i].stock<<endl;
			}
			break;
			
		case 2:
			for(int i=0;i<consolenumber;i++)
			{
				cout<<"name: "<<Console[i].name<<endl;
				cout<<"price: "<<Console[i].price<<endl;
				cout<<"stock: "<<Console[i].stock<<endl;
			}
			break;
			
		case 3:
			for(int i=0;i<monitornumber;i++)
			{
				cout<<"name: "<<Monitor[i].name<<endl;
				cout<<"price: "<<Monitor[i].price<<endl;
				cout<<"stock: "<<Monitor[i].stock<<endl;
			}
			break;
			
		case 4:
			for(int i=0;i<headsetnumber;i++)
			{
				cout<<"name: "<<Headset[i].name<<endl;
				cout<<"price: "<<Headset[i].price<<endl;
				cout<<"stock: "<<Headset[i].stock<<endl;
			}
			break;
			
		default:
			cout<<"Your number is invalid. Pleas try again!";
			break;
	}
	
	cout<<"Do you want to keep on in this part?"<<endl;
	cout<<"1.yes"<<endl;
	cout<<"2.go back to the user's menu"<<endl;
	int b;
	cin>>b;
	switch(b)
	{
		case 1:
			dastebandiU();
		
		default:
			cout <<"returning"<<endl;
            break;
	}
}

void menu()
{
	int a,c,d;
	string password;
    do{
   	    cout<<"Welcome to the gaming shop!"<<endl;
	    cout<<endl;
	    cout<<"pleas choose your role!"<<endl;
	    cout<<"1.User"<<endl;
    	cout<<"2.Admin"<<endl;
	    cout<<"3.Exit"<<endl;
     	cin>>a;
    	switch(a)
    	{
    		case 1:
					do{
					cout<<endl;
					cout<<"Gaming shop menu"<<endl;
    				cout<<endl;
					cout<<"1.Invenyory of goods"<<endl;
					cout<<"2.Search by name between goods"<<endl;
					cout<<"3.Charging wallet"<<endl;
					cout<<"4.Money inventory"<<endl;
					cout<<"5.Shopping cart"<<endl;
					cout<<"6.Add goods to the shopping cart"<<endl;
					cout<<"7.Showing the goods based on category"<<endl;
					cout<<"8.Back"<<endl;		
					cout<<endl;
					cout<<"Pleas enter your choice!"<<endl;
					int c;
					cin>>c;
					switch(c)
					{
						case 1:
							mojodikalaU();
							break;
							
						case 2:
						    searchU();
						    cout<<"Do you want to keep on in this part?"<<endl;
	                        cout<<"1.yes"<<endl;
                        	cout<<"2.go back to the admin's menu"<<endl;
                        	int z;
                        	cin>>z;
                        	switch(z)
                        	{
	                        	case 1:
		                        	hazf();
		                            break;
	                        	default:
		                        	cout << "returning"<<endl;
                                    break;
                         	}
						    break;
						    
						case 3:
							chargeU();
							break;
							
						case 4:
							mojodipool();
							break;
							
						case 5:
							sabd();
							break;
							
						case 6:
							cart();
							cout<<"Do you want to keep on in this part?"<<endl;
	                        cout<<"1.yes"<<endl;
                        	cout<<"2.go back to the admin's menu"<<endl;
                        	int v;
                        	cin>>v;
                        	switch(v)
                        	{
	                        	case 1:
		                        	hazf();
		                            break;
	                        	default:
		                        	cout << "returning"<<endl;
                                    break;
                         	}
							break;
							
						case 7:
							dastebandiU();
							break;
							
						case 8:
							menu();
							break;
							
						default:
							cout<<"Your number is invalid. Pleas try again!"<<endl;
							break;
							
					}
					}while(c!=8);
					break;
					
			case 2:
				    cout<<"Pleas enter the password"<<endl;
				    cin>>password;
				    if(password=="admin1admin")
				    {
				    	do{
					cout<<endl;
					cout<<"Gaming shop menu"<<endl;
					cout<<endl;
					cout<<"1.Add goods"<<endl;
					cout<<"2.Remove goods"<<endl;
					cout<<"3.Search by name between goods"<<endl;
					cout<<"4.The value of all goods"<<endl;
					cout<<"5.Charging the wallet of the store"<<endl;
					cout<<"6.Wallet store to buy new goods"<<endl;
					cout<<"7.Show all of the goods"<<endl;
					cout<<"8.Back";
					cout<<endl;
					cout<<"pleas enter a number"<<endl;
				    int d;
				    cin>>d;
				    
				    switch(d)
				    {
				    	case 1:
				    		ezafe();
				    		break;
				    		
				    	case 2:
				    		hazf();
				    	    cout<<"Do you want to keep on in this part?"<<endl;
	                        cout<<"1.yes"<<endl;
                        	cout<<"2.go back to the admin's menu"<<endl;
                        	int b;
                        	cin>>b;
                        	switch(b)
                        	{
	                        	case 1:
		                        	hazf();
		                            break;
	                        	default:
		                        	cout << "returning"<<endl;
                                    break;
                         	}
				    		break;
				    		
				    	case 3:
				    		search();
				    		cout<<"Do you want to keep on in this part?"<<endl;
	                        cout<<"1.yes"<<endl;
                        	cout<<"2.go back to the admin's menu"<<endl;
                        	int m;
                        	cin>>m;
                        	switch(m)
                        	{
	                        	case 1:
		                        	hazf();
		                            break;
	                        	default:
		                        	cout << "returning"<<endl;
                                    break;
                         	}
				    		break;
				    		
				    	case 4:
				    		value();
				    		break;
				    		
				    	case 5:
				    		chargeA();
				    		break;
				    		
				    	case 6:
				    		mojodimoneyA();
				    		break;
				    		
				    	case 7:
				    		mojodikala();
				    		break;
				    		
				    	case 8:
				    		menu();
				    		break;
				    		
				    	default:
				    		cout<<"your number is invalid. Pleas try again!"<<endl;
				    		break;
					}
				    }while(d!=8);
					}
				else
				{
					cout<<"Incorrect password! returning to the menu."<<endl;
				}	
				break;
				
			case 3:
				cout<<"Exiting the program"<<endl;
				break;
				
			default:
				cout<<"Your number is invalid. Pleas try again!"<<endl;
		}
	}while(a!=3);
    
}