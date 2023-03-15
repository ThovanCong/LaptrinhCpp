#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Question{
    private:
    string questionText;
    string possibleAnswers[4];
    int correctAnswer;
    public:
    Question();
    Question(string q, string ans, int correctNum);
    string getQuestion();
    string getPossAnswer1();
    string getPossAnswer2();
    string getPossAnswer3();
    string getPossAnswer4();
    int getCorrectNumber();
    string getCorrectAnswer();
    void setQuestionText(string q);
    void setPossAnswer1(string ans); 
    void setPossAnswer2(string ans); 
    void setPossAnswer3(string ans); 
    void setPossAnswer4(string ans); 
    void setCorrect(int correctNum);
    void display();
};