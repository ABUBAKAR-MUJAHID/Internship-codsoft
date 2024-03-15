#include<iostream>
using namespace std;
    
	int num_1,num_2,sum,prod,diff,div;
	int choice;

    void input_values(){
	cout<<"\n\tEnter The First Number:";
	cin>>num_1;
	cout<<"\tEnter The Second Number:";
	cin>>num_2;
    }	
    
	void calculator(){
	cout<<"\n\tChoose An Operation You Like To Perform."<<endl;
    cout<<"\n\tChoose From The Following:"<<endl;
    cout<<"\tFor Addition     Choose #1 "<<endl;
    cout<<"\tFor Subtraction  Choose #2 "<<endl;
    cout<<"\tFor Product      Choose #3 "<<endl;
    cout<<"\tFor Division     Choose #4 "<<endl;
    }
    void calculations_performed(){
	enter_correct_operation:
	cout<<"\n\tEnter Your Choice: ";
    cin>>choice;
	switch(choice)
    {
    	case 1:
    		{
    		sum=num_1+num_2;
    		cout<<"\n\tThe Sum Of Given Two Numbers Are: "<<sum<<endl;
    		break;	
			}
    	case 2:
    		{
    		diff=num_1-num_2;
    		cout<<"\n\tThe Difference Of Given Two Numbers Are: "<<diff<<endl;
    		break;	
			}
		case 3:
    		{
    		prod=num_1*num_2;
    		cout<<"\n\tThe Sum Of Given Two Numbers Are: "<<prod<<endl;
    		break;	
			}
		case 4:
    		{
    		div=num_1/num_2;
    		cout<<"\n\tThe Quotient Of Given Two Numbers Are: "<<div<<endl;
    		break;	
			}
		default:
		{
		    cout<<"Invalid Entry :-( "<<endl;	
		    goto enter_correct_operation;
		}				
	}
}
int main()
{
	start_of_calculator:
	input_values();	
	if(num_1==0 && num_2==0){
		cout<<"\n\tInvalid Input"<<endl;
		cout<<"\tPlease Enter Valid Numbers."<<endl;
		goto start_of_calculator;
	}
    calculator();
    calculations_performed();
	return 0;
}
