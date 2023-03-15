#include "trivia.h"

void initQuestions(Question [], int);
void displayQuestion(Question);

main(){
 const int NUM_QUESTIONS = 10; 
    int playerOnePoints = 0;      
    int playerTwoPoints = 0;      
 
  
    Question questions[NUM_QUESTIONS];
 
  
    initQuestions(questions, NUM_QUESTIONS);
 
    
    int questionNum = 0;
    while (questionNum < 10)
    {
        int answer;   
 
       
        cout << "Question for PLAYER 1:\n";
        cout << "----------------------\n";
        displayQuestion(questions[questionNum]);
        cout << "Enter the correct answer: "; cin >> answer;
 
        
        if (answer == questions[questionNum].getCorrectNumber())
        {
            cout << "Correct!\n\n";
            playerOnePoints++;
        }
        else
        {
            cout << "Sorry, that's incorrect. The correct answer is "
                 << questions[questionNum].getCorrectNumber() << ". "
                 << questions[questionNum].getCorrectAnswer()
                 << endl << endl;
        }
 
       
        questionNum++;
 
        
        cout << "Question for PLAYER 2:\n";
        cout << "----------------------\n";
        displayQuestion(questions[questionNum]);
        cout << "Enter the correct answer: "; cin >> answer;
 
       
        if (answer == questions[questionNum].getCorrectNumber())
        {
            cout << "Correct!\n\n";
            playerTwoPoints++;
        }
        else
        {
            cout << "Sorry, that's incorrect. The correct answer is "
                 << questions[questionNum].getCorrectNumber() << ". "
                 << questions[questionNum].getCorrectAnswer()
                 << endl << endl;
        }
 
      
        questionNum++;
    }
 
    
    cout << "Game over. Here are the points:\n";
    cout << "PLAYER 1: " << playerOnePoints << endl;
    cout << "PLAYER 2: " << playerTwoPoints << endl << endl; 
    if(playerOnePoints > playerTwoPoints)
    {
        cout << "PLAYER 1 WINS!\n"; 
    } 
    else if (playerTwoPoints > playerOnePoints)
    {
        std::cout << "PLAEYR 2 WINS!\n";
    }
    else
    {
        std::cout << "It's a tie!\n" << endl;
    }
 
    return 0;
}
 
 
void initQuestions(Question quest[], int size)
{
   const int SIZE = 500;  
   char input[SIZE];      
   fstream inputFile;    
   int index = 0;         
 
   
   inputFile.open("trivia.txt", ios::in);
   if (!inputFile)
   {
      cout << "ERROR: Cannot open trivia file.\n";
      exit(0);
   }
 
   
   inputFile.getline(input, SIZE); 
   while (!inputFile.eof() && index < size)
   {
        
        quest[index].setQuestionText(input);
 
       
        inputFile.getline(input, SIZE);
        quest[index].setPossAnswer1(input);
 
        
        inputFile.getline(input, SIZE);
        quest[index].setPossAnswer2(input);
 
        
        inputFile.getline(input, SIZE);
        quest[index].setPossAnswer3(input);
 
        
        inputFile.getline(input, SIZE);
        quest[index].setPossAnswer4(input);
 
        
        inputFile.getline(input, SIZE);
        quest[index].setCorrect(atoi(input));
 
        
        index++;
 
        
        inputFile.getline(input, SIZE);
   }
}
 

 
void displayQuestion(Question quest)
{
    cout << quest.getQuestion() << endl;
    cout << "ANSWERS:\n";
    cout << "1. " << quest.getPossAnswer1() << endl;
    cout << "2. " << quest.getPossAnswer2() << endl;
    cout << "3. " << quest.getPossAnswer3() << endl;
    cout << "4. " << quest.getPossAnswer4() << endl;
}