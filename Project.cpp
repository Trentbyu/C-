//============================================================================
// Name        : Project.cpp
// Author      : Trent BLACK
// Version     :
// Copyright   : Your copyright notice
// Description : Cpp 
//============================================================================

#include <iostream>

#include <vector>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// Classes



typedef class animal{

	int dogyears = 7; //  This is private by defualt and is not accessable 
public:

	char type[20]; // everything inside public can be accessed anywhere in the program
	int age;

	void dogYear(){

		int year;
		year = age * dogyears;
		cout << year << endl;

	}
}animal;

animal * animal_list[10]; // Global varible can be used any where 

int MATH_ADD(int,int); // function declaration 
float MATH_DIVIDE(float,float);
//Functions
int MATH_ADD(int A , int B ){

	return A + B; // returns this value 

}

float MATH_DIVIDE(float a , float b){
	return a/b;  // reutuns a/b 
}


void CHANGE_VALUE(int * age){

	*age = 20; // passes in the varible location and changes that memory location data to 20

}

int main() {

	int a , b; // declare the varibles 

	a = 2; // assign the varibles 
	b = 11; 
	// Expressions
	cout<< "----Expressions----\n"; // Expressions 
	cout << a << "\n" <<  b ;
	cout << "\n" <<(a = b) ;
	cout << "\n" <<(a * b);
	cout << "\n" <<(a / b);
	cout << "\n" <<(a % b);


	//Conditionals
	cout<< "----Conditionals----";
	//< and > 
	if(a < b){
		cout << "\na < b";

	}else{
		cout << "\nb < c";
	}
	// OR with and elseif 
	if(a == 2 || b == 3){
		cout<< "\n Correct";

	}
	else if(a == 3){
		cout << "\n a == 3" << endl;
	}
	else{
		cout << "\nWrong";
	}
	// And
	if(a > 2 && b < 5){
		cout << "\nTrue";
	}
	int J;
	cout << "\nType your Num: ";
	cin >> J;
	switch (J)
	{
	case  1:
		cout << "NUMBER 1\n";
		break;
	case 2:
		cout << "NUMBER 2\n";
		break;
	default:
		cout << "NUMBER 1 or 2 WAS NOT SELCETED";
		break;
	}


//	Loops
	cout<< "\n---LOOPS----\n";
	for(int i = 0; i < b ; i++){
		cout << " " << i;
	}
	

	cout << endl;
	do{
		cout << " " << a;
		a++;
	}while(a < 10);
	cout << endl;
//	Functions
	cout<< "---Functions----";
	float ans = MATH_ADD(a,b);
	cout << "\n" <<  ans;

	float w ,flt;
	cout << "\nYOUR FLOAT: ";
	cin >> w;
	flt = MATH_DIVIDE(w , w * 2);
	cout << "HERE IS THE ANSWER TO W / W*2 : " << flt <<endl; 

	int age;
	cout << "Does not matter what value your put in you will get 20" << endl;
	cin >> age;
	CHANGE_VALUE(&age);
	cout << age << endl; 

	cout << "-----Classes-----" << endl;

//	Classess
	animal dog;
	cout << "what is the dog type? ";

	cin >> dog.type;
	cout << "what is the dog AGE? ";
	
	cin >> dog.age;
	cout << "Type :" << dog.type << "\nAge: " << dog.age << endl;

	animal_list[0] = &dog;

	cout << "animal type: " << animal_list[0]->type << endl; 
	dog.dogYear();


	cout<< "-----VECTORS-----" << endl;
//Vecetors
	vector<int> Vec1;
	for (int i = 1; i <= 20; i++)
	        Vec1.push_back(i);

	    cout << "Output of begin and end: ";
	    for (auto i = Vec1.begin(); i != Vec1.end(); ++i)
	        cout << *i << " ";

	    cout << "\nOutput of cbegin and cend: ";
	    for (auto i = Vec1.cbegin(); i != Vec1.cend(); ++i)
	        cout << *i << " ";

	    cout << "\nOutput of rbegin and rend: ";
	    for (auto ir = Vec1.rbegin(); ir != Vec1.rend(); ++ir)
	        cout << *ir << " ";

	    cout << "\nOutput of crbegin and crend : ";
	    for (auto ir = Vec1.crbegin(); ir != Vec1.crend(); ++ir)
	        cout << *ir << " ";

		cout << "\nSIZE: " << Vec1.size();
		cout << "\nvec1.resize(5)" << endl;
		Vec1.resize(5);
		cout << "SIZE: " << Vec1.size();
		cout << "\nMAX SIZE: " << Vec1.max_size();
		cout << "\nvec1.assign(3,6)" << endl;
		Vec1.assign(3,6);
		for(int i =0 ; i < Vec1.size(); i++){
			cout <<Vec1[i] << " ";

		}



	cout << "\n------Strectch-------" << endl;

//Strectch
	// This allows you to save to another file 
    ofstream myfile ("example.txt");
    if (myfile.is_open())
    {

		for(int i = 0 ; i < 20; i++){
        	myfile << "\n----------------: " << i;

		}
       

        myfile.close();
    }
    else cout << "Unable to open file";


    string line;
	// Ifstram allows you to read from another file
    ifstream in("example.txt", ios_base::in);;
    if (!in)
    {
        return 1;
    }
    if(cin.get() == '\n'){
	char str[50];
	int i = 50;

	while(in) {
		in.getline(str, i);
		if(in) cout << str << endl;


	  	  }

	  	  in.close();
	}

	return 0;
}
