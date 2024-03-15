#include<iostream>
using namespace std;
int guessed_number;
void less_num_guessed(){
	system("cls");
	    cout<<"\n\tOOPS :-("<<endl;
		cout<<"\tYou have guessed the wrong number"<<endl;
		cout<<"\tPlease Guess Again."<<endl;
		cout<<"\t___________________________________"<<endl;
}
void correct_num_guessed(){
	system("cls");
	    cout<<"\n\tCongratulations!!!"<<endl;
		cout<<"\tYou have guessed the correct Number."<<endl;
		cout<<"\t___________________________________"<<endl;
		
}
void very_big_number(){
	system("cls");
	    cout<<"\n\tWhat!!!"<<endl;
		cout<<"\tYou have crossed the limit."<<endl;
		cout<<"\tPlease Follow The Instructions."<<endl;
		cout<<"\t___________________________________"<<endl;
}

int main(){
	start_of_game:
	cout<<"\n\tEnter a Number from 0-20: ";
	cin>>guessed_number;
	if(guessed_number==13){
		correct_num_guessed();
		goto end_the_game;
	}
	else if(guessed_number>13 && guessed_number<=20){
		less_num_guessed();
	}
	else if(guessed_number<13 && guessed_number>=0){
		less_num_guessed();
	}
	else if(guessed_number>20){
		very_big_number();
	}
	else if(guessed_number<0){
		very_big_number();
	}
	goto start_of_game;
	end_the_game:
	return 0;
}
