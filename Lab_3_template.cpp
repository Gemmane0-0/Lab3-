/***
 * CSE 2010 Fall 2023
 * Lab #3
 * {Emmanuel Garcia  #007266812
 * 11/10/2023
 *
 * The Following Lab includes testing and getting comfortable with classes. The end result of the labe is to print out Bob
Test Age: 100 101 Test Occupation:  Retired Consultant
Testing lives_in_IE 1 0 1 Testing isOlderThan  Bob:1 Doe:200 False
 *
 * The most challenging part of this project id say would have to be learning how to access all of the files through the program that Im running my lab on, I was able to overcome this by asking my professor for help and am now more comfortable working on labs that have to deal with classes.
 *
***/

#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

/**
 * The structure of the files are as follows:
 * Lab_3_template.cpp -> calls the class and is considered the "main" program
 * Person.cpp -> implements and contains the functionalities of the class
 * Person.h -> contains the interface, declarations of the class, and  includes 
 * the private variables and member functions
 */

/**
 *  Following the examples below, create your own class objects that calls ALL
 *  the functions. 
 * 
 *  Initialize your objects of type Person.
 *  Use the mutator functions to modify the private variables of your Person.
 *  Display the variables associated with your Person using the accessor functions
 *  and cout or print.
 */

int main()
{
    Person bob = Person("Bob", 100, "Retired", true); // instantiates a Person object
    cout << bob.getName() << endl;// Display the name of the person object bob.
    Person unknown = Person(); //Person unknown; // 
    cout  << unknown.getName() << endl;
    cout << "Test Age: \n "; 
    cout << bob.getAge() << endl; 
    bob.updateAge(101); 
    cout << bob.getAge() << endl; 

  
  cout << "Test Occupation: \n ";
  cout << bob.getOccupation() << endl; 
  bob.updateOccupation("Consultant"); 
  cout << bob.getOccupation() << endl; 

  cout << "Testing lives_in_IE \n ";
  cout << bob.getLivesInIE() << endl; 
  bob.movedLocation();  
  cout << bob.getLivesInIE() << endl; 
  bob.movedLocation();  
  cout << bob.getLivesInIE() << endl; 

  cout << "Testing is Older Than: \n ";
  cout << bob.getName() << ':' << bob.getLivesInIE() << endl; 
  unknown.updateAge(200); 
  unknown.updateName("Doe");
  cout << unknown.getName() << ':' << unknown.getAge() << endl;
  if (bob.isOlderThan(unknown)){
    cout << "True" << endl;
  } else{
    cout << "False" << endl;
  }




  
}
