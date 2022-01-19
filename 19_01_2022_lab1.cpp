#include<iostream>
using namespace std;

//Declaration int and float for apk
int intType;
float floNumber1, floNumber2, floResult;

int main()
{
    cout<<"Kalkulator prosty"<<endl;
    cout<<"--------------------------"<<endl;
    cout<<""<<endl;
    cout<<"Autor: Maksym Snitco-Sekula"<<endl;
    cout<<""<<endl;
    cout<<"--------------------------"<<endl;
    //Below this line, apk please us to choose what type of
    //calculation we want to do.
    cout<<"Jakie działanie wykonać? "<<endl;
    cout<<""<<endl;
    cout<<"1.Dodawanie"<<endl;
    cout<<"2.Odejmowanie"<<endl;
    cout<<"3.Mnozenie"<<endl;
    cout<<"4.Dzielenie"<<endl;
    cout<<""<<endl;
    cout<<"Wybierz liczbę od 1 do 4 : ";
    cin>>intType;
    cout<<""<<endl;
    //If user type 1 aplication will add two numbers
    //typed by user
    if(intType==1) {
        cout<<"Podaj pierwsza liczbe : ";
        cin>>floNumber1;
        cout<<"Podaj druga liczbę : ";
        cin>>floNumber2;
        floResult=floNumber1+floNumber2;
        cout<<floNumber1<<"+"<<floNumber2<<"="<<floResult;
    }
    //If user type 2 aplication will substract two numbers
    //typed by user
    else if(intType==2) {
        cout<<"Podaj pierwsza liczbe : ";
        cin>>floNumber1;
        cout<<"Podaj druga liczbę : ";
        cin>>floNumber2;
        floResult=floNumber1-floNumber2;
        cout<<floNumber1<<"-"<<floNumber2<<"="<<floResult;
    }
    //If user type 3 aplication will be dividing two numbers
    //typed by user
    else if(intType==3) {
        cout<<"Podaj pierwsza liczbe : ";
        cin>>floNumber1;
        cout<<"Podaj druga liczbę : ";
        cin>>floNumber2;
        floResult=floNumber1*floNumber2;
        cout<<floNumber1<<"*"<<floNumber2<<"="<<floResult;
    }
    //If user type 4 aplication will be multiplicate two numbers
    //typed by user
    else if(intType==4) {
        cout<<"Podaj pierwsza liczbe : ";
        cin>>floNumber1;
        cout<<"Podaj druga liczbę : ";
        cin>>floNumber2;
        floResult=floNumber1/floNumber2;
        cout<<floNumber1<<":"<<floNumber2<<"="<<floResult;
    } 
    //If user type number more than 4, aplication will be stoped
    else {
        cout<<"Error";
        return 0;
    }



    return 0;
}