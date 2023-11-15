#include<iostream>

using namespace std;

int main(){

/*
Homework 1: Math operations
Write a program that reads 2 numbers and print their + - * / as following

Do good testing for your code
E.g. consider zero as first or 2nd number
E.g. consider negative values 
E.g. even and odd values
E.g. try the MAX of int: 2147483647

Try inputs
12 3
15 0
0 15
2147483647 2147483647

*/

int number1,number2;
cout<<"Enter 2 numbers \n";

cin>>number1>>number2;

cout<<number1<<"+"<<number2<<"="<<number1+number2<<endl;
cout<<number1<<"-"<<number2<<"="<<number1-number2<<endl;
cout<<number1<<"/"<<number2<<"="<<number1/number2<<endl;
cout<<number1<<"*"<<number2<<"*"<<number1+number2<<endl;

    return 0;


    
}