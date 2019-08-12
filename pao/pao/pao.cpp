#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main1(){
/*	double ans,total;
	int result = 0;
	srand (time(NULL));
	for(int i = 1 ; i <= 10 ; i++){
		int number1 = rand() % 30+1;
		int number2 = rand() % 30+1;
		int number3 = rand() % 30+1;
		char op1 = static_cast<char>(rand()%6+42);
		while(((op1 != '/' && op1 != '+') && op1 != '*') && op1 != '-'){
			op1 = static_cast<char>(rand()%6+42);
		}
		char op2 = static_cast<char>(rand()%6+42);
		while(((op2 != '/' && op2 != '+') && op2 != '*') && op1 != '-'){
			op2 = static_cast<char>(rand()%6+42);
		}
		cout << i << ". "<< number1 << op1 << number2 << op2 << number3 << " = ";
		cin >> ans;
		if(op1 == '+' && op2 == '+'){
			total = number1 + number2 + number3;}
			else if (op1 == '+' && op2 == '-'){
		total = number1 + number2 - number3;}
			else if (op1 == '+' && op2 == '*'){
		total = number1 + number2 * number3;}
			else if (op1 == '+'	 && op2 == '/'){
		total = number1 + number2 / number3;}
			else if (op1 == '-' && op2 == '+'){
		total = number1 - number2 + number3;}
			else if (op1 == '-' && op2 == '-'){
		total = number1 - number2 - number3;}
			else if (op1 == '-' && op2 == '*'){
		total = number1 - number2 * number3;}
			else if (op1 == '-' && op2 == '/'){
		total = number1 - number2 / number3;}
			else if (op1 == '*' && op2 == '+'){
		total = number1 * number2 + number3;}
			else if (op1 == '*' && op2 == '-'){
		total = number1 * number2 - number3;}
			else if (op1 == '*' && op2 == '*'){
		total = number1 * number2 * number3;}
			else if (op1 == '*' && op2 == '/'){
		total = number1 * number2 / number3;}
			else if (op1 == '/' && op2 == '+'){
		total = number1 / number2 + number3;}
			else if (op1 == '/' && op2 == '-'){
		total = number1 / number2 - number3;}
			else if (op1 == '/' && op2 == '*'){
		total = number1 / number2 * number3;}
			else if (op1 == '/' && op2 == '/'){
		total = number1 / number2 / number3;}
		if(ans == total){
			cout << "Answer is All right " <<endl;
			result++;
		}
		else{
			cout <<  "Answer is incorrect and Answer "<< total <<" is all right!"<<endl;
		}
	}
	cout << "Result = "<< result << " point" <<endl;*/
	int num;
	do{
	cout << "input num : ";
	cin >> num;
	}while(num < 1 || num >= 31);
	return 0;
}