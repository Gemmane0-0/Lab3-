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
#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

class Person{
    public:
        // --------------- Constructors --------------- 
        Person();
        Person(string name, int age, string occupation, bool lives_in_IE);
        // --------------- Mutator Functions --------------- 
        void updateName(string new_name);
        void updateAge(int new_age);
        void updateOccupation(string new_occupation);
        void movedLocation();   
        
        // --------------- Accessor Functions --------------- 
        string getName() const;
        int getAge() const;
        string getOccupation() const;
        bool getLivesInIE() const; 
        bool isOlderThan(Person b) const;

    private:
        string name;
        int age;
        string occupation;
        bool lives_in_IE;
};
#endif

