/* *************************************************
*  Name: Caleb Hunt
*  Program: Quiz Code
*  Purpose: Driver function for Quiz Code, calls functions
*  and classes as needed to ask find which question pack
*  user is studying and quiz them on it
************************************************* */

#include "main.h"

int main()
{
	/* **********************************
	* This function is the application driver. It quizzes
	* the user on the subject they select.
	* @param na : na
	* @return (int) : application exit code
	* @exception na : na
	* @note na
	********************************** */
	
	// Currently this tests the Question class and the askQuestion function
	Question myQuestion("What is 2+9?", "11");
	
	askQuestion(&myQuestion, 0);
	
	return 0;
}