#include<iostream>
#include "Header.h"
using namespace std;
bool Comparison(githubuser, githubuser);
void inputFromUser(githubuser* arr, int size);
bool exists(githubuser* arr, int i,string username);
githubuser* searchUser( githubuser * users, int size, string userName) ;
int main()
{
	githubuser user1;
	githubuser user2;

	cout<<"enter first name of user1"<<endl;
	cin>>user1.firstname;
	cout<<"enter user name"<<endl;
	cin>>user1.username;
	cout<<"enter password"<<endl;
	cin>>user1.password;
	cout<<"enter email"<<endl;
	cin>>user1.email;
	cout<<"enter folder count"<<endl;
	cin>>user1.foldercount;


	cout<<"enter first name of user2"<<endl;
	cin>>user2.firstname;
	cout<<"enter user name"<<endl;
	cin>>user2.username;
	cout<<"enter password"<<endl;
	cin>>user2.password;
	cout<<"enter email"<<endl;
	cin>>user2.email;
	cout<<"enter folder count"<<endl;
	cin>>user2.foldercount;

	bool flag=Comparison(user1,user2);
	if (flag==true)
		cout<<"users are same"<<endl;
	else 
		cout<<"users are not same"<<endl;


	githubuser *arr;
	int size=4;
	arr=new githubuser[size];
	inputFromUser(arr,size);

	string username;
	cout<<"enter user name to be searched"<<endl;
		cin>>username;
		searchUser(arr,size,username);
		delete []arr;
		arr=NULL;

		return 0;
		



}
bool Comparison(githubuser u1, githubuser u2)
{
	if((u1.firstname==u2.firstname)&&(u1.username==u2.username)&&(u1.password==u2.password)&&(u1.email==u2.email)&&(u1.foldercount==u2.foldercount))
	{
		return true;
	}
	else
		return false;
}


void inputFromUser(githubuser* arr, int size)
{
	
	int j;

	for(int i=0;i<size;i++)
	{
		cout<<"enter first name of user1"<<endl;
		cin>>arr[i].firstname;
		cout<<"enter user name"<<endl;
		cin>>arr[i].username;
		if(i>=1)
		{
			bool flag= exists(arr, i,arr[i].username);
			while(flag==false)
			{
				cout<<"enter other name"<<endl;
				cin>>arr[i].username;
				flag=exists(arr,i,arr[i].username);
			}


		}

		cout<<"enter password"<<endl;
		cin>>arr[i].password;
		cout<<"enter email"<<endl;
		cin>>arr[i].email;
		cout<<"enter folder count"<<endl;
		cin>>arr[i].foldercount;
	} 
}
bool exists(githubuser* arr, int i,string username)

{bool flag=false;
int j=0;

for( j=0;j<i;j++)
{
	if(arr[i].username==username)
		flag=false;

}

return flag;      



}
githubuser* searchUser( githubuser * users, int size, string userName)
{

	for(int i=0;i<size;i++)
		if(users[i].username==userName)
		{ return &users[i];
	cout<<"username presen"<<endl;
	}
	return nullptr;
}