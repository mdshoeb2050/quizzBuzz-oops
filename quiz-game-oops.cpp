#include <iostream>
#include <string>

using namespace std;

int Guess;
int Total;

class Question {
private :
	string Question_Text;
	string  Answer_1;
	string Answer_2;
	string Answer_3;
	string Answer_4;
	int Correct_Answer;
	int Question_Score;

public:
	void setValues(string, string, string, string, string, int, int);
	void askQuestion();

};

int main_menu_view() {
	system("color 3F");
	cout << "\t\t*************************************************************************************" << endl;
	cout << "\t\t*****                                                                           *****" << endl;
	cout << "\t\t*****               H E L L O !  W E L C O M E  T O  T H E 'Q U I Z B U Z Z'    *****" << endl;
	cout << "\t\t*****                  = = = = = = = = = = = = = = = = = = = = = = = =          *****" << endl;
	cout << "\t\t*****                            = = = = = = = = = = = =                        *****" << endl;
	cout << "\t\t*****                                     B Y                                   *****" << endl;
	cout << "\t\t*****                         S H O E B    A N S A R I                          *****" << endl;
	cout << "\t\t*****                                                                           *****" << endl;
	cout << "\t\t*************************************************************************************" << endl;
	cout << endl;
	cout << "Please press enter to start a game..." << endl;
	cin.get();
	system("cls");
	cout << "Please enter your information" << endl;
	string Name;
	string Age;
	cout << "What is your name? ";
	getline(cin, Name);
	cout << "How old are you? ";
	cin >> Age;
	string Respond;
	cout << "Are you ready to take the Quiz " << Name << " ? Yes/No. " << endl;
	cout << "Your choice: ";
	cin >> Respond;
	if (Respond == "yes" || Respond == "Yes") 
	{
		cout << endl;
		cout << "OK, Good Like!!! " << endl;
		system("cls");
	}
	else
	{
		cout << "OK. Goodbye." << endl;
		return 0;
	}
}

int main() {
	main_menu_view();

	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

	q1.setValues("1.Identify the correct extension of the user-defined header file in C++?", ".cpp", ".hg", ".h", ".hf", 1, 10);
	
	q2.setValues("2.Who invented C++ ?", "Dennis Ritchie", "Ken Thompson", "Brian Kernighan", "Bjarne Stroustrup", 4, 10);

	q3.setValues("3.Which of the following approach is used by C++?", "Left-right", " Right-left", "Bottom-up", "Top-down ", 3, 10);
	
	q4.setValues("4.By default, all the files in C++ are opened in _________ mode.?", "Binary", "VTC", "Text", " ISCII", 3, 10);
	
	q5.setValues("5.Which of the following correctly declares an array in C++ ?", "array{10};", "array array[10];", "int array;", "int array[10];", 4, 10);

	q6.setValues("6.What is the size of wchar_t in C++?", "Based on the number of bits in the system", "2 or 4", "4", "2", 1, 10);
	
	q7.setValues("7.Which is more effective while calling the C++ functions?", "call by object", "call by pointer", "call by value", "call by reference", 4, 10);

	q8.setValues("8.Which of the following is used to terminate the function declaration in C++?", ";", "]", ")", ":", 1, 10);
	
	q9.setValues("9.Which keyword is used to define the macros in c++?", "#macro", "#define", "macro", "define", 2, 10);
	
	q10.setValues("10.What is Inheritance in C++?", "Deriving new classes from existing classes", "Overloading of classes", "Classes with same names", "Wrapping of data into a single class", 1, 10);


	q1.askQuestion();
	
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();

	system("cls");

	cout << "Your Total Score is " << Total << " points out of 100." << endl;

	if (Total >= 70)
	{
		cout << "Great you passed the Quiz!!!" << endl;
		cout << "C O N G R A T U L A T I O N S !!!" << endl;

	}        //end of the game
	else
	{
		cout << "Sorry, you failed the Quiz!" << endl;
		cout << "Do you want to try again ? Yes/No " << endl;
		string play_again;
		cout << "Your choice: ";
		cin >> play_again;
		if (play_again == "yes" || play_again == "Yes")
		{
			main();
		}
		else
		{
			cout << "OK. Goodbye." << endl;
			return 0;
		}

	}                 

	system("pause");
	return 0;
}

void Question::setValues(string q, string a1, string a2, string a3, string a4, int ca, int pa) 
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;

}

void Question::askQuestion() {
	cout << endl;
	cout << Question_Text << endl;
	cout << "1. " << Answer_1 << endl;
	cout << "2. " << Answer_2 << endl;
	cout << "3. " << Answer_3 << endl;
	cout << "4. " << Answer_4 << endl;
	cout << endl;


	cout << "Answer: ";
	cin >> Guess;

	if (Guess == Correct_Answer) 
	{
		cout << endl;
		cout << "Great! You are Correct." << endl;
		Total += Question_Score;
		cout << "Score: " << Question_Score << " Out of " << Question_Score << " !" << endl;
		
	}
	else
	{
		cout << endl;
		cout << "Oh, NO. You are Wrong." << endl;
		cout<<"Score: 0"<<" Out of "<<Question_Score<< " !" << endl;
		cout << "The correct answer is " << Correct_Answer << endl;
		cout<<endl;
	}
}



