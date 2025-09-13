/* *************************************************
*  Name: Caleb Hunt
*  Program: Quiz Code
*  Purpose: Contains definitions of functions used to
*  interact with Question class and quiz user.
************************************************* */

#include "functions.h"


// Note, this is currently overly reliant on literals
// This is merely a test of the basic structure
void askQuestion(Question* myQ, int quizMode) {
	/* **********************************
	* This function asks the user the question provided using
	* output and input from the terminal.
	* @param (Question*) myQ: Question to be asked
	* @param (int) quizMode: Q&A order. If quizMode = 0, Q is first.
 	* If quizMode = 1, A is first.  
	* @return na : na
	* @exception na : na
	* @note na
	********************************** */
	
	std::string userAnswer;
	std::string correctAnswer;
	
	if(quizMode != 1) {
		correctAnswer = myQ->getAnswer();
		std::cout << "The question is: " << myQ->getQuestion() << std::endl;
		std::cout << "The answer is: ";
		std::cin >> userAnswer;
		std::cout << std::endl;
	}
	
	if(quizMode == 1) {
		correctAnswer = myQ->getQuestion();
		std::cout << "The answer is: " << myQ->getAnswer() << std::endl;
		std::cout << "The question is: ";
		std::cin >> userAnswer;
		std::cout << std::endl;
	}
	
	if(userAnswer == correctAnswer) {
		std::cout << "Correct answer";
	}
	else
	{
		std::cout << "Incorrect answer" << std::endl;
		std::cout << "Correct Answer is: " << correctAnswer << std::endl;
	}
}