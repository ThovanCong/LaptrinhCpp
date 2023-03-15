#include "trivia.h"

Question::Question(){}

    string Question::getQuestion()
        {
            return questionText;
        }
 
    string Question::getPossAnswer1()
        {
            return possibleAnswers[0];
        }
 
    string Question::getPossAnswer2()
        {
            return possibleAnswers[1];
        }
 
    string Question::getPossAnswer3()
        {
            return possibleAnswers[2];
        }
 
    string Question::getPossAnswer4()
        {
            return possibleAnswers[3];
        }
 
    int Question::getCorrectNumber()
        {
            return correctAnswer;
        }
 
    string Question::getCorrectAnswer()
        {
            return possibleAnswers[correctAnswer-1];
        }
 
    
    void Question::setQuestionText(string q)
        {
            questionText = q;
        }
 
    void Question::setPossAnswer1(string ans)
        {
            possibleAnswers[0] = ans;
        }
 
    void Question::setPossAnswer2(string ans)
        {
            possibleAnswers[1] = ans;
        }
 
    void Question::setPossAnswer3(string ans)
        {
            possibleAnswers[2] = ans;
        }
 
    void Question::setPossAnswer4(string ans)
        {
            possibleAnswers[3] = ans;
        }
 
    void Question::setCorrect(int correctNum)
        {
            correctAnswer = correctNum;
        }




