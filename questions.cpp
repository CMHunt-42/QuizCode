/* *************************************************
*  Name: Caleb Hunt
*  Program: Quiz Code
*  Purpose: Defines Question class methods. 
*  Questions class has string attributes and getter
*  setter methods to interact with them
************************************************* */

#include "questions.h"

Question::Question() {
	/* **********************************
	* Default constructor, sets strings to DEFAULT_STRING
	* @param na : na
	* @return na : na
	* @exception na : na
	* @note Question object should be functional with no
	* additonal setup (text will be blank, however)
	********************************** */
	setQuestion(DEFAULT_STRING); setAnswer(DEFAULT_STRING);
}

Question::Question(std::string q, std::string a) {
	/* **********************************
	* Alternate constructor, sets question to q and
	* answer to a.
	* @param q : question to be set
	* @param a: answer to be set
	* @return na : na
	* @exception na : na
	* @note Question object should be functional with no
	* additonal setup
	********************************** */
	setQuestion(q); setAnswer(a);
}

void Question::setQuestion(std::string q) {
	/* **********************************
	* Sets question to string q
	* @param q : question to be set
	* @return na : na
	* @exception na : na
	* @note na
	********************************** */
	question = q;
}

void Question::setAnswer(std::string a) {
	/* **********************************
	* Sets answer to string a.
	* @param a : answer to be set
	* @return na : na
	* @exception na : na
	* @note na
	********************************** */
	answer = a;
}

std::string Question::getQuestion() {
	/* **********************************
	* Returns question attribute
	* @param na : na
	* @return (string) question : question to be returned
	* @exception na : na
	* @note na
	********************************** */
	return question;
}

std::string Question::getAnswer() {
	/* **********************************
	* Returns answer attribute
	* @param na : na
	* @return (string) answer : answer to be returned
	* @exception na : na
	* @note na
	********************************** */
	return answer;
}

