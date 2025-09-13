/* *************************************************
*  Name: Caleb Hunt
*  Program: Quiz Code
*  Purpose: Defines Question class and prototypes
*  of methods. Questions class has string attribute
*  of the question and of the  answer
************************************************* */

#ifndef QUESTION_H
#define QUESTION_H

#define DEFAULT_STRING ""

#include <string>

class Question {
public:
    /**********************
    Constructors/Destructor
    ***********************/
    Question();
	Question(std::string, std::string);
	
	/**********************
    Getters/Accessors
    ***********************/

    std::string getQuestion();
    std::string getAnswer();
	
	/**********************
    Setters/Mutators
    ***********************/
    void setQuestion(std::string);
	void setAnswer(std::string);

    /**********************
    Printing Methods
    ***********************/

private:

    /**********************
    Methods
    ***********************/


    /**********************
    Attributes
    ***********************/
    std::string question;
	std::string answer;

};


#endif /* QUESTION_H */