#include<iostream>
#include<conio.h>
#include<string.h>
#include<cstdlib>
#include<ctime>

using namespace std;

 void main(){
	 char hos[10];
	int tut[200],x,y,z;
	
	
	cout << "Enter a word to find pal  : ";
	cin.getline(hos, 10);
	y =  strlen(hos);
	
	int j = y;
	int q = 1;
	for (int i = 0; i < y;) {
		j--;

		if (hos[i] == hos[j]) {
			q = 0;
		}i++;
	}
	
			if (q == 0)
	{
		cout << "its a palidrome" << endl;
	}
	else
	{
		cout << "its not";
	}
	
	_getch();
}


