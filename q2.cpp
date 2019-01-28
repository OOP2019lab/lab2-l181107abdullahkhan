#include<iostream>
#include"l181107q2.h"
#include<fstream>
using namespace std;
void readDataFromFile( githubuser *users, string filepath) ;
int main()
{
	int size=0;
	ifstream fin;
	fin.open("file.txt");
	readDataFromFile(users, filepath);
	fin>>size;
	githubusers *users;
	users=new int[size];
	for(int i=0;i<size;i++)
	{
		fin>>githubuser[i].firstname;
		fin>>githubuser[i].username;
		fin>>githubuser[i].email;
		fin>>githubuser[i].filecount;
		githubfolders=new int[filecount];
		for(int k=0;k<filecount;k++)
		fin>>githubfolders;


		return 0;
	}

