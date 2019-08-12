#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
	string name,lastname;
	int day,month,year,random;
	char gender;
	cout << "++++++++Welcome to C++ Midterm Test +++++++ " <<endl;
	cout << "Please Enter Your First-Name : ";
	cin >> name;
	cout << "please Enter Your Last-Name : ";
	cin >> lastname;
	cout << endl;
	cout << "**********************************" <<endl;
	cout << "Please Enter Your BirthDaty" <<endl;
	do{
		cout << "Input Birth-Day(1-31) : ";
		cin >> day;
	}while(day < 1 || day > 31);
	do{
		cout << "Input Birth-Month(1-12) : ";
		cin >> month;
	}while(month < 1 || month > 12);
	do{
		cout << "Input Birth-Year(Like 2018) : ";
		cin >> year;
	}while(year < 1950 || year > 2019);
	cout << endl;
	cout << "************************************" << endl;
	do{
		cout << "Please Enter Your Gender (f : Female , m : male) : ";
		cin >> gender;
		gender = toupper(gender);
		cout << gender << endl;
	}while(gender != 'M' && gender != 'F');

	cout << endl;
	cout << "++++++++++++++++++++++++++++++++++++++++"<<endl;
	if(gender == 'M'){
		cout << "Hello Mr. " << name << " " << lastname <<endl;
	}
	else if(gender == 'F'){
		cout << "Hello Ms. " << name << " " << lastname <<endl;
	}
	cout << endl;
	switch(month){
		case 1 : cout << "Your Birth Day is " << day <<"Jan" << year ;
		case 2 : cout << "Your Birth Day is " << day << "Feb" << year;
		case 3 : cout << "Your Birth Day is " << day << "Mar" << year;
		case 4 :  cout << "Your Birth Day is " << day <<"Apr" << year;
		case 5 :  cout << "Your Birth Day is " << day <<"May" << year;
		case 6 :  cout << "Your Birth Day is " << day <<"Jun" << year;
		case 7 :  cout << "Your Birth Day is " << day <<"Jul" << year;
		case 8 :  cout << "Your Birth Day is " << day <<"Aug"<< year;
		case 9 :  cout << "Your Birth Day is " << day <<"Sep"<< year;
		case 10 : cout << "Your Birth Day is " << day <<"Oct"<< year;
		case 11 :  cout << "Your Birth Day is " << day <<"Nov"<< year;
		case 12 :  cout << "Your Birth Day is " << day <<"Dec"<< year;
	}
	cout << "And Now Your Have :" << 2019-year << endl;
	cout << "**********************************" <<endl;
	random =  rand()%9+1;
	cout << random << endl;
	for(int n = 1 ; n <= random;n++){
		cout << " * ";
	}
	switch(random){
		case 1 : cout << "Your lucky color is Red" << endl ;
		case 2 : cout << "Your lucky color is Pink" << endl;
		case 3 : cout << "Your lucky color is Green" << endl;
		case 4 :  cout << "Your lucky color is yello" << endl;
		case 5 :  cout << "Your lucky color is blue" << endl;
		case 6 :  cout << "Your lucky color is violet" << endl;
		case 7 :  cout << "Your lucky color is brown" << endl;
		case 8 :  cout << "Your lucky color is sliver"<< endl;
		case 9 :  cout << "Your lucky color is black"<< endl;
	}return 0;
}