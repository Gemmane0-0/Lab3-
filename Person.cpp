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



/*
This is the default constructor for the Person class. It initializes a new Person object with default values
*/ 

Person::Person(){
    name = "";
    age = -1;
    occupation = "";
    lives_in_IE = false;
}

/*
This is a parameterized constructor for the Person class.
*/ 
Person::Person(string name, int age, string occupation, bool lives_in_IE){
    this->name = name;
    this->age = age;
    this->occupation = occupation;
    this->lives_in_IE = lives_in_IE;
}

/**
 * @brief changes the name into new_name
 * 
 * @param new_name 
 */
void Person::updateName(string new_name)
{
    name = new_name;
}

/**
 * @brief changes age to new_age
 * 
 * @param new_age(int) 
 */
void Person::updateAge(int new_age)
{
 age = new_age; 
}



/**
 * @brief Changes occupation to new_occupation
 * 
 * @return (string) 
 */
void Person::updateOccupation(string new_occupation)
{
  occupation = new_occupation; 
}



/**
If the person currently lives in IE, it sets it to false; otherwise, it sets it to true.
 */
void Person::movedLocation() 
{
  if(lives_in_IE == true ){
    lives_in_IE = false; 
  }
  else {
    lives_in_IE = true; 
  }
  
  /*lives_in_IE = not lives_in_IE;
  */
}


/**
 * @brief returns the name of the Person object
 * 
 * @return string 
 */
string Person::getName() const{
    return name;
}



/* 
@breif  returns age 
@return int 
*/

int Person:: getAge() const 
{
  return age; 
}


/**
 * @brief returns Occupation of object  
 * 
 * @return string 
 */
string Person::getOccupation() const 
{
  return occupation; 
}


/**
 * @brief returns wheather they live in the IE 
 * @return true: they live in the IE 
 @return false: they do not live in the IE 
 */
bool Person::getLivesInIE() const 
{
  return lives_in_IE; 
}


/**
 *Compares the age of the current Person object with another Person object (b). It returns true if the current person is older than the person passed as an argument
 */
bool Person::isOlderThan(Person b) const
{
    if (age > b.getAge())
    {
      return true; 
      
    }  else{
      return false; 
    }
}