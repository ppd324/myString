//
// Created by 裴沛东 on 2021/7/8.
//
#include <iostream>
using namespace std;
#ifndef MYSTRING_MYSTRING_H
#define MYSTRING_MYSTRING_H

class myString{
private:
    char* data;
    size_t strlength;
public:
    myString();
    myString(const char* str);
    myString(const myString& str);
    ~myString();
    myString(int num,char c);
    myString& operator= (const char* str);
    myString& operator= (myString &str);
    bool operator== (myString &str);
    friend ostream& operator<< (ostream &stream,const myString &p);
    myString operator+ (const myString &str);
    myString operator+ (const char* str);
    myString& operator+= (const myString &str);
    myString& operator+= (const char* str);
    char operator[] (size_t index);
    size_t size();
    myString& append(const char* str);

    size_t length();



};



#endif //MYSTRING_MYSTRING_H
