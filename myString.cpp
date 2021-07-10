//
// Created by 裴沛东 on 2021/7/8.
//
#include <cstring>
#include "myString.h"
#include <iostream>
myString::myString() {
    data = new char[1];
    data[0] = '\0';
    strlength = 0;
}
myString::myString(const char *str) {
    cout<<"construct myString"<<endl;
    data = new char[strlen(str)+1];
    strcpy(data,str);
    this->strlength = strlen(data);
}
myString::myString(const myString &str) {
    this->data = new char[str.strlength+1];
    strcpy(this->data,str.data);
    this->data[str.strlength] = '\0';
    this->strlength = str.strlength;
}
myString::~myString() {
    cout<<"deconstruct"<<endl;
    if(this->data != nullptr){
        delete[] this->data;
        this->data = nullptr;
    }
    strlength = 0;

}
myString::myString(int num, char c) {
    data = new char[num+1];
    for(int i=0;i<num;i++) {
        this->data[i] = c;
    }
    this->data[num] = '\0';
    this->strlength = strlen(data);
}
ostream& operator<< (ostream &stream,const myString &p){

    stream<<p.data;
    return stream;
}
size_t myString::length() {
    return this->strlength;
}
size_t myString::size() {
    return this->strlength;
}
myString& myString::operator=(const char *str) {
    if(this->data) {
        delete data;
    }
    this->data = new char[strlen(str)+1];
    strcpy(data,str);
    this->strlength = strlen(data);
    return *this;
}
myString & myString::operator=(myString& str) {
    if(this->data) {
        delete data;
    }
    this->data = new char[strlen(str.data)+1];
    strcpy(this->data,str.data);
    this->strlength = strlen(data);
    return *this;

}
bool myString::operator==(myString &str) {
    if(strcmp(this->data,str.data) == 0 && this->strlength == str.strlength) {
        return true;
    }else {
        return false;
    }
}
myString myString::operator+(const myString &str) {
    char temp[this->strlength+str.strlength+1];
    strcpy(temp,this->data);
    strcat(temp,str.data);
    myString s1(temp);
    return s1; //局部变量不能返回引用或地址
}
myString myString::operator+(const char* str) {
    char temp[this->strlength+strlen(str)+1];
    strcpy(temp,this->data);
    strcat(temp,str);
    myString s1(temp);
    return s1; //局部变量不能返回引用或地址
}
myString & myString::operator+=(const myString &str) {
    char* temp = new char[this->strlength+str.strlength];
    strcpy(temp,this->data);
    delete[] this->data;
    strcat(temp,str.data);
    this->data = temp;
    this->strlength = strlen(data);
    return *this;
}
myString & myString::operator+=(const char* str) {
    char* temp = new char[this->strlength+strlen(str)];
    strcpy(temp,this->data);
    delete[] this->data;
    strcat(temp,str);
    this->data = temp;
    this->strlength = strlen(data);
    return *this;

}
char myString::operator[](size_t index) {
    return this->data[index];
}
myString & myString::append(const char *str) {
    return myString::operator+=(str);
}
