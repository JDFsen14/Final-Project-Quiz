#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main(int argc, char *argv[]) {
	
	char letters[4] = {'A', 'B', 'C', 'D'}; 
	
	//Keep answers in seperate quotations - seperated with commas
	//Keep answers with letters'A'-First 'B'-Second  'C'-Third    'D'-Fourth                                Correct answers
	string answers[5][4] = {{"Assign", "Find", "Duplicate", "Replace"},		 //Answers to question 1			'A'
							{"Find", "Replace", "Insert", "Undo"},              //Answers to question 2			'B'
							{"Length", "Find", "Replace", "Substring(Substr)"}, //Answers to question 3			'D'
							{"0(Zero)", "1(One)", "-1(Neg. One)", "2(Two)"}, 	 //Answers to question 4			'A'
							{"=", "-", "+", "|"}};		//------------------------ Answers to question 5			'C'
	char ans = ' ';
	int counter = 0; //counts how many questions you get correct
	int questions = 5; //How many questions there are
		
	cout << "Coding Strings Quiz!" << endl << endl; //Name of the quiz
		
	//Question 1----------------------------------------------------------------
	cout << "Question 1:" << endl; 
	cout << "What function is used to duplicate one character a specified number of times within a string?" << endl;//Edit the question inside the quotations
	
	for(int sub = 0; sub < 4; sub += 1){
		cout << letters[sub] << ": " << answers[0][sub] << endl;
	}
	

	cin >> ans;
	ans = (char) toupper(ans);
	
	//What letter is the correct answer? Change both letters here
	if(ans == 'A'){
		cout << "Correct!" << endl;
		counter += 1;
	}
	else if(ans != 'A'){
		cout << "Incorrect!" << endl;
	}
	cout << endl;
	//---------------------------------End of question 1-----------------------

	//Question 2----------------------------------------------------------------
	cout << "Question 2:" << endl; 
	cout << "What function is used to replace characters within a string?" << endl;//Edit the question inside the quotations
	
	for(int sub = 0; sub < 4; sub += 1){
		cout << letters[sub] << ": " << answers[1][sub] << endl;
	}
	

	cin >> ans;
	ans = (char) toupper(ans);
	
	//What letter is the correct answer? Change both letters here
	if(ans == 'B'){
		cout << "Correct!" << endl;
		counter += 1;
	}
	else if(ans != 'B'){
		cout << "Incorrect!" << endl;
	}
	cout << endl;
	//---------------------------------End of question 2-----------------------
	
	//Question 3----------------------------------------------------------------
	cout << "Question 3:" << endl; 
	cout << "What function returns the characters you want to access from a string variable?" << endl;//Edit the question inside the quotations
	
	for(int sub = 0; sub < 4; sub += 1){
		cout << letters[sub] << ": " << answers[2][sub] << endl;
	}
	

	cin >> ans;
	ans = (char) toupper(ans);
	
	//What letter is the correct answer? Change both letters here
	if(ans == 'D'){
		cout << "Correct!" << endl;
		counter += 1;
	}
	else if(ans != 'D'){
		cout << "Incorrect!" << endl;
	}
	cout << endl;
	//---------------------------------End of question 3-----------------------
	
	//Question 4----------------------------------------------------------------
	cout << "Question 4:" << endl; 
	cout << "The subscript of the first character contained in a string variable is:" << endl;//Edit the question inside the quotations
	
	for(int sub = 0; sub < 4; sub += 1){
		cout << letters[sub] << ": " << answers[3][sub] << endl;
	}
	

	cin >> ans;
	ans = (char) toupper(ans);
	
	//What letter is the correct answer? Change both letters here
	if(ans == 'A'){
		cout << "Correct!" << endl;
		counter += 1;
	}
	else if(ans != 'A'){
		cout << "Incorrect!" << endl;
	}
	cout << endl;
	//---------------------------------End of question 4-----------------------
	
	//Question 5----------------------------------------------------------------
	cout << "Question 5:" << endl; 
	cout << "What symbol is the concatenation operator represented by?" << endl;//Edit the question inside the quotations
	
	for(int sub = 0; sub < 4; sub += 1){
		cout << letters[sub] << ": " << answers[4][sub] << endl;
	}
	

	cin >> ans;
	ans = (char) toupper(ans);
	
	//What letter is the correct answer? Change both letters here
	if(ans == 'C'){
		cout << "Correct!" << endl;
		counter += 1;
	}
	else if(ans != 'C'){
		cout << "Incorrect!" << endl;
	}
	cout << endl;
	//---------------------------------End of question 5-----------------------
	
	//Calculates and Outputs Final Score/Percentages
	int percentage = counter * 100 / questions;
	cout << "Final score = " << counter << "/" << questions << endl;
	cout << percentage << "%" << endl;

}