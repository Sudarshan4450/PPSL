#include <iostream>
#include<string>
using namespace std;

int main() {
  string str = "hi";
  
  //concatenation
  string greeting = str + ", World!";
  cout<< "concatenation:"<< greeting << endl ;
  
  //Substring
  string part = greeting.substr (7,5);// Extracts, "World"
  cout<< "Substring :" << part << endl ;
  
  //find
  size_t pos = greeting.find("World");
  cout<<"find: 'World' found at position " <<pos<<endl; 
  
  
  //Replace 
  string replaced = greeting;
  replaced.replace(pos, 5 , "C++");
  cout<<"replace:"<<replaced << endl ;
  
  //Erase
  string erased = greeting;
  erased.erase(5,7);// removes " beautiful"
  cout<<"erase:"<<erased<<endl;
  
  // To uppercase 
  string uppercase = greeting ;
  for (char &C : uppercase)C = toupper(C);
  cout<<"to uppercase:"<<uppercase<<endl;
  
  // To lowercase 
  string lowercase = greeting ;
  for (char &C : lowercase)C = tolower(C);
  cout<<"to lowercase:"<<lowercase<<endl;
  
  
  
  
  
}