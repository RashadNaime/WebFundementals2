#include <iostream>
using namespace std;

int main() {
  //Declare variables to run bitwise operators
  unsigned int p = 40;
  unsigned int q = 17;
  int result = 0;

//Set result equal to the values p and q using bitwise operators
result = p & q; //AND
cout<< "The Result of P&Q is: "<< result<<endl;

result = p | q; //OR
cout<< "The Result of P|Q is: "<< result<<endl;

result = p ^ q; //exclusive OR
cout<< "The Result of P^Q is: "<< result<<endl;

result = ~p; // NOT
cout<< "The Result of ~P is: "<< result<<endl;

result = ~(p & q); // NAND
cout<< "The Result of ~(P & Q) is: "<< result<<endl;

result = ~(p | q); // NOR
cout<< "The Result of ~(P | Q) is: "<< result<<endl;

result = p << 3; //Convert to binary and shift 3 left
cout<< "The Result of P << 3 is: "<< result<<endl;

result = p >> 3; //Convert to binary and shift 3 right
cout<< "The Result of P >> 3 is: "<< result<<endl;


//Second Part of the lab (Booleans)

cout<< false <<endl; //output false
cout<< !false <<endl;//output not false

bool b(true); //set boolean value to true

//Part 3 of lab is to use boolalpha, take it out for part 2
//Adjust to look like the picture in 3rd picture of example
cout<<boolalpha; // boolalpha will display true or false in output

cout<< b <<endl; //output true
cout<< !b <<endl;//output not true


//4th Part of the lab

//create constants for the problem 
//Variables for Minimum credits earned and Minimum Semesters
//To check if student has earned an associates degree 
const double MIN_CREDITS = 60.0;
const int MIN_SEMESTERS = 5;
double credits; //input variable for user's credits completed
int semesters;     //input variable for user's semesters taken

//Take in input from the user for credits completed 
cout<<"How many credits have you completed? "<<endl;
cin >> credits;

//Take in input for number of semesters completed
cout<<"How many Semesters of College have you completed?"<<endl;
cin >> semesters;

//If user has NOT made more than 60 credits 
//Or if user has NOT been a full time student for 5+ semesters
if(!(credits >= MIN_CREDITS || semesters > MIN_SEMESTERS))
{

  cout<<"You must have earned this many credits "<<MIN_CREDITS
  <<" Or have taken more than "<<MIN_SEMESTERS<<" semesters."<<endl;
}
else
{ //If user meets 1 of those requirements 
  //Display Message that user qualifies 
  cout<<"You qualify!"<<endl;

}


//Part 5 of lab
char employed, //currently employed Y or N
recentgrad;    



// //create constants for the problem 
// //Variables for Minimum income and Minimum years worked
// const double MIN_INCOME = 35000.0;
// const int MIN_YEARS = 5;
// double income; //input variable for user's income
// int years;     //input variable for user's year's worked

// //Take in input from the user for income 
// cout<<"What is your annual income? "<<endl;
// cin >> income;

// //Take in input for number of year worked 
// cout<<"How many years have you worked at your current job?"<<endl;
// cin >> years;

// //If user has NOT made more than 35000 thousand annually 
// //Or if user has NOT worked more than 5 yrs
// if(!(income >= MIN_INCOME || years > MIN_YEARS)){

//   cout<<"You must have earned this much $"<<MIN_INCOME
//   <<" Or have been employed more than "<<MIN_YEARS<<endl;
// }
// else{ //If user meets 1 of those requirements 
//   //Display Message that user qualifies 
//   cout<<"You qualify!"<<endl;

// }
return 0;
}