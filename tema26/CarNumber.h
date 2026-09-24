#pragma once
#include <iostream>
#include <string>
using namespace std;

class CarNumber
{
	string number;
	static int counter;
	static char seria1;
	static char seria2;
	static string region;
public:
	CarNumber();
	
	string getNumber()const;
	static void showStatic();
};

