#include<iostream>
using namespace std;
int main()
{
	double balance=1000.0;
	double amount=0.0;
	int choice;
 do{
 	cout<<"--ACCOUNT BALANCE AND TRANSACTIONS--/n";
 	cout<<"1.CHECK BALANCE/n";
 cout<<"2.DEPOSIT MONEY/n";
  cout<<"3.WITHDRAW MONEY/n";
  cout<<"4.---EXIT---";
  
  cout<<"select an option to proceed";
  cin>>choice;
  
  switch(choice){
  
  case 1:
  	cout<<"your  balance is :"<<"= $"<<balance;
  	break;
  	case 2:
  		cout<<"enter amount you want to deposit money";
  		cin>>amount;
  		if(amount>0){
  			  		balance=balance+amount;
		  }else{
		  	cout<<"enter valid amount";
		  }
		    	break;

  		case 3:
  			cout<<"enter amount you want to withdraw";
  			if(amount>balance){
  				cout<<"PLEASE ENTER A VALID AMOUNT";
  				cin>>amount;}
  		else {
  			cout<<"YOU HAVE WITHDRAWN : "<<"= $"<<amount;
  			balance=balance-amount;
			   }
			   break;
			   case 4:
			   	cout<<"you are exiting"<<endl;
			   	break;
			   default:
			   		cout<<"enter a valid one";
			   		  	

			
			}
		}while(choice!=4){
				return 0;	

		}

		
}
