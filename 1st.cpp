#include<iostream>

using namespace std;

int main()
{
	char name[30];
	cout<<"Enter your name: ";
	scanf("%[^\n]",name);
	cout<<"Helloe There!"<<name;
	return 0;
}
