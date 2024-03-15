#include<iostream>
#include<windows.h>
#include<string>
using namespace std;

void print_tasks(string tasks[], int task_count)
{
	cout<<"\n\t\tTasks To Do: "<<endl;
	cout<<"\t\t---------------------"<<endl;
	for(int i=0;i<task_count;i++)
	{
		cout<<"\n\t\tTask "<<i<<" : "<<tasks[i]<<endl;
	}
	cout<<"\t\t---------------------"<<endl;
}

int main()
{
	string tasks[10]={""};
	
	int task_count=0;
	int option=-1;
	while(option!=0)
	{
		cout<<"\n\t\t--- TO DO LIST ---"<<endl;
		cout<<"\n\t\t1 - To Add New Task"<<endl;
		cout<<"\t\t2 - To View Tasks"<<endl;
		cout<<"\t\t3 - To Delete The Tasks"<<endl;
		cout<<"\t\t4 - Terminate The Program"<<endl;
		cout<<"\n\t\tEnter Your Choice:";
		cin>>option;
		switch(option)
		{
			case 1:
				{
					system("cls");
					if(task_count>9)
					{
						cout<<"\n\t\t```TASK LIST IS FULL```"<<endl;
					}
					else
					{
						cout<<"\n\t\tEnter A New Task: ";
						cin.ignore();
						getline(cin,tasks[task_count]);
						task_count++;
					}
				break; 	
				}
			case 2:
				{
					system("cls");
					print_tasks(tasks,task_count);
					break;
				}
			case 3:
				{
					system("cls");
					print_tasks(tasks,task_count);
					int del_task=0;
					cout<<"\n\t\tEnter A Task To Delete: ";
					cin>>del_task;
					
					if(del_task<0 || del_task>9)
					{
						cout<<"\n\t\tYou Enter Invalid Task No."<<endl;
						break;
					}
					for(int i=del_task;i<task_count;i++)
					{
						tasks[i]=tasks[i+1];
					}
					task_count=task_count-1;
					break;
				}
			case 4:
				{
					cout<<"\n\t\tTerminating The Program......................"<<endl;
					cout<<"\n\t\tCome Back Soon"<<endl;
					option =0;
					break;
				}			
		}
	}
	return 0;
}
