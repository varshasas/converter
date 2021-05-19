#include<iostream> //header file 
using namespace std;
void calculator(); //Function declaration 
void kmTom();
void cmTom();
void frhTocel();
void mintohours();//function declaration

int main(){
	string name; //variable to store name 
	int option; //variable to store user option 
	
	
	cout<<"Hi, Welcome to universal convertor \n";
	cout<<"Enter your name : ";
	cin>>name; //Input name
	cout<<"Hello "<<name<<"\n"; //welcome message 
	cout<<"choose your option "<<endl; //endl -> used to print in new line
	
	cout<< "1: calculator\n"; //each option 
	cout<< "2: KM to M convertor\n";
	cout<< "3: CM to M convertor\n";
    cout<< "4: farenheit to Celcius\n";
    cout<< "5: hour to min \n";
	cin>>option; //user will choose a option
	
	switch(option){
		case 1:
			calculator(); //calling calculator  function
			break;
		case 2:
			kmTom(); 
			break;
		case 3:
		 cmTom(); 
			break;
		case 4:
		frhTocel();
			break;
		case 5:
		mintohours();
		case 6:
			//write a function to convert farenheit to celcius 
			 
			break;
		default:
			cout<<"Wrong option";
			break;
	}
}

void calculator(){ //calculator program 
	int select;
	int num_1, num_2, answer;
	
	cout<<"choose your option "<<endl;
	cout<< "1: Addition "<<endl;
	cout<< "2: subtraction"<<endl;
	cout<< "3: Multiplication "<<endl;
	cout<< "4: Division "<<endl;
	cin>>select;
	switch(select){
		case 1:
		cout<<" Addition"<<endl;
			cout<<"Enter First number: " <<endl;
			cin>>num_1;
			cout<<"Enter second number: "<<endl;
			cin>>num_2;
			answer = num_1 + num_2;
			cout<<"Answer : "<<answer<<endl;
			break;
		case 2:
		cout<<" Subtraction"<<endl;
			cout<<"Enter First number: " <<endl;
			cin>>num_1;
			cout<<"Enter second number: "<<endl;
			cin>>num_2;
			answer = num_1 - num_2;
			cout<<"Answer : "<<answer<<endl;
			break;
		case 3:
		cout<<" Multiplication"<<endl;
			cout<<"Enter First number: " <<endl;
			cin>>num_1;
			cout<<"Enter second number: "<<endl;
			cin>>num_2;
			answer = num_1 * num_2;
			cout<<"Answer : "<<answer<<endl;
			break;
		case 4:
		cout<<" Division"<<endl;
			cout<<"Enter First number: " <<endl;
			cin>>num_1;
			cout<<"Enter second number: "<<endl;
			cin>>num_2;
			answer = num_1 / num_2;
			cout<<"Answer : "<<answer<<endl;
			break;
		default:
			break;
	}
}

void kmTom(){ //Kilometre to Meter fucntion 
	float km;
	float meter;
	cout<<"\n Enter value in Kilometre: ";
	cin>>km;
	meter = km * 1000;
	cout<<km<<" KM is equal to "<<meter << " Meter";
}   
     void cmTom(){
     float meter;
     float centimeter;
     cout << "\n  enter value in centimeter :\n";
    cin >> centimeter;
	meter = (centimeter/100); 
	cout <<centimeter<<" The distance in meter is given by: "<<meter<<"meter";	
}
     void frhTocel(){
     float frh;
     float cel;
	cout << "\n enter value in farenheit:\n";
    cin >> frh;
    cel = ((frh * 5.0)-(5.0 * 32))/9;
    cout <<frh<<" The temperature in Celsius is given by : " << cel<<"cel";
}
    void mintohours(){
     float hours, min;
     cout<<"\n enter time in minutes\n"; 
     cin >> min;
     min = (hours*60);
     cout<<min<<" The time in hours is given by: " <<hours<<"hours";
}

