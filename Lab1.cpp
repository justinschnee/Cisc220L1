//
//  lab1.cpp
//
//  Name: Justin Schnee, Shawn Egan
//
//
// TA Name:
// TA Email:
// TA Office Hours:

#include <iostream>
#include <string>

using namespace std;

bool isPrime(int x);
void f2(char *a, char b, char &c);
void leapYr400(int yr);


// Problem 1

int main(){

	cout << "Problem 1" << endl;

	cout << "Hello world" << endl;


	cout << "*************************" << endl;

	cout << "Problem 2" << endl;

	cout << "Test 1:" << endl << isPrime(2) << endl; // Expected: True(1) returned

	cout << "Test 2:" << endl << isPrime(1) << endl; // Expected: False(0) returned

	cout << "Test 3:" << endl << isPrime(27) << endl; // Expected: False(0) returned

	cout << "*************************" << endl;

	cout << "Problem 3" << endl;


	cout << "*************************" << endl;

	cout << "Problem 4" << endl;


	cout << "*************************" << endl;

	cout << "Problem 5" << endl;
	cout << "Test 1:" << endl;
	leapYr400(2017); // Expected: Print 2020 to 2416 in increments of 4, excluding 2100, 2200, 2300
	cout << "Test 2:" << endl;
	leapYr400(1); // Expected: Print 4 to 400 in increments of 4, excluding 100, 200, 300
	cout << "Test 3:" << endl;
	leapYr400(4); // Expected: Print 4 to 404 in increments of 4, excluding 100, 200, 300


	cout << "*************************" << endl;

	cout << "Problem 6" << endl;


	cout << "*************************" << endl;

	cout << "Problem 7" << endl;
}



//Problem 2
bool isPrime(int x){
	bool a = true;
	int y = 2;
	if(x>1){
		while((y < x) && a){
				if (x % y == 0)
				{
					a = false;
				}
				y++;
			}
	}
	else
	{
	a = false;
	}
	return a;
}

//Problem 3

int sumBtw(int x, int y){
	int sum = 0, num;
	if(x>y){
		num = y;
		while(num<x){
			sum += num;
			num++;
		}
	}
	else if(y>x){
		num = x;
		while(num<y){
			sum += num;
			num++;
		}
	}
	return sum;
}


//Problem 4




//Problem 5

void leapYr400(int yr){
	int endYr = yr + 400;
	while(yr <= endYr)
	{
		if(yr % 4 == 0)
		{
			if(yr % 100 == 0)
			{
				if(yr % 400 == 0)
				{
					cout << yr << endl;
				}
			}
			else
			{
				cout << yr << endl;
			}
		}
		yr++;
	}
}


//Problem 6
