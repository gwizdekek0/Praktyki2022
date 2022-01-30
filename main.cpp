#include <iostream>
#include <string>
#include <string.h>
#include <windows.h>

using namespace std;

int choiseInt, choiseInt2, choiseInt3;

string todo1;
string todo2;
string todo3;
string todo4;
string todo5;
string choiseStr;
string choiseStr2;
string choiseStr3;
string choiseStr4;
string choiseStr5;
string choiseStr6;

int main()
{
            //z is goto function
    z:
            cout << "___________________________" << endl;
            cout << "Simple app ToDo" << endl;
            cout << "Author: gwizdekek_" << endl;
            cout << "___________________________" << endl;
            cout<<""<<endl;
    //x is goto function

    x:

    //below we must type what we want to do

            cout << "1.Create your activity."<<endl;
            cout << "2.See your all activity."<<endl;
            cout << "3.Delete some activity."<<endl;
            cout << "4.Edit some activity."<<endl;
                cout<<""<<endl;
            cout << "Choose what you want do to : ";
            cin  >> choiseInt;

    //if your answer is 1 you will add your activity

    if(choiseInt==1){
                system( "cls" );


                            if(todo1.empty()){
                                        cout<<"Type there your activity (One word max.) : ";
                                        cin>> todo1;
                                y:
                                                cout<< "Do you want add this to your list ? : " << todo1 << endl;
                                                cout<< ""<< endl;
                                                cout<< "Type *yes* or *no* : ";
                                                cin>> choiseStr;

                                                        if(choiseStr=="yes"){
                                                            system( "cls" );
                                                            cout <<"Your activity has been successfully added"<<endl;
                                                            goto x;
                                                        }
                                                            else if(choiseStr=="no"){
                                                                system( "cls" );
                                                                todo1.clear();
                                                                goto x;
                                                            }
                                                                else{
                                                                    cout<< "Wrong value!"<<endl;
                                                                    goto y;
                                                                }
                            }
    else
    {
                            if(todo2.empty()){
                                cout<<"Type there your activity (One word max.) : ";
                                    cin>> todo2;
                            d:
                                            cout<< "Do you want add this to your list ? : " << todo2 << endl;
                                            cout<< ""<< endl;
                                            cout<< "Type *yes* or *no* : ";
                                            cin>> choiseStr2;

                                                    if(choiseStr2=="yes"){
                                                        system( "cls" );
                                                        cout <<"Your activity has been successfully added"<<endl;
                                                        goto x;
                                                    }
                                                        else if(choiseStr2=="no"){
                                                            system( "cls" );
                                                            todo2.clear();
                                                            goto x;
                                                        }
                                                            else{
                                                                cout<< "Wrong value!"<<endl;


                                                                goto d;
                                                            }
                            }
        else
            {
                            if(todo3.empty()){
                            cout<<"Type there your activity (One word max.) : ";
                                cin>> todo3;
                        a:
                                        cout<< "Do you want add this to your list ? : " << todo3 << endl;
                                        cout<< ""<< endl;
                                        cout<< "Type *yes* or *no* : ";
                                        cin>> choiseStr3;

                                                if(choiseStr3=="yes"){
                                                    system( "cls" );
                                                    cout <<"Your activity has been successfully added"<<endl;
                                                    goto x;
                                                }
                                                    else if(choiseStr3=="no"){
                                                        system( "cls" );
                                                        todo1.clear();
                                                        goto x;
                                                    }
                                                        else{
                                                            cout<< "Wrong value!"<<endl;


                                                            goto a;
                                                        }
                            }
                else{
                                        if(todo4.empty()){
                                            cout<<"Type there your activity (One word max.) : ";
                                    cin>> todo4;
                                b:
                                            cout<< "Do you want add this to your list ? : " << todo4 << endl;
                                            cout<< ""<< endl;
                                            cout<< "Type *yes* or *no* : ";
                                            cin>> choiseStr4;

                                                    if(choiseStr4=="yes"){
                                                        system( "cls" );
                                                        cout <<"Your activity has been successfully added"<<endl;
                                                        goto x;
                                                    }
                                                        else if(choiseStr4=="no"){
                                                            system( "cls" );
                                                            todo4.clear();
                                                            goto x;
                                                        }
                                                            else{
                                                                cout<< "Wrong value!"<<endl;


                                                                goto b;
                                                            }
                                        }
                    else
                                        {
                                            if(todo5.empty()){
                                                    cout<<"Type there your activity (One word max.) : ";
                                    cin>> todo5;
                            c:
                                            cout<< "Do you want add this to your list ? : " << todo5 << endl;
                                            cout<< ""<< endl;
                                            cout<< "Type *yes* or *no* : ";
                                            cin>> choiseStr5;

                                                    if(choiseStr5=="yes"){
                                                        system( "cls" );
                                                        cout <<"Your activity has been successfully added"<<endl;
                                                        goto x;
                                                    }
                                                        else if(choiseStr5=="no"){
                                                            system( "cls" );
                                                            todo5.clear();
                                                            goto x;
                                                        }
                                                            else{system( "cls" );
                                                                cout<< "Wrong value!"<<endl;

                                                                goto c;
                                                            }
                                        }else{
                                        cout<<"You must delete min. one activity"<<endl;
                                        Sleep(2500);
                                        system( "cls" );
                                        goto x;
                                        }
                                        }
                        }
                        }
                        }
    //if you choose 2 you want see your list with activity to do
    }else if(choiseInt==2){
        system( "cls" );
        cout<<"1."<<todo1<<endl;
        cout<<"2."<<todo2<<endl;
        cout<<"3."<<todo3<<endl;
        cout<<"4."<<todo4<<endl;
        cout<<"5."<<todo5<<endl;
        cout<<""<<endl;
        cout<<"Do you want back to menu? (*yes*-*no* close app your data will be deleted) : ";
        cin>>choiseStr6;
        if(choiseStr6=="yes"){
                system( "cls" );
            goto x;
        }
        if(choiseStr6=="no"){
            return 0;
        }
    }
    else if(choiseInt==3){
            p:
            system( "cls" );
        cout<<"1."<<todo1<<endl;
        cout<<"2."<<todo2<<endl;
        cout<<"3."<<todo3<<endl;
        cout<<"4."<<todo4<<endl;
        cout<<"5."<<todo5<<endl;
        cout<<""<<endl;
        cout<<"Which activity you want delete? : ";
        cin>>choiseInt2;
        if(choiseInt2==1){
            system( "cls" );
            todo1.clear();
            goto x;
        }if(choiseInt2==2){
            system( "cls" );
            todo2.clear();
            goto x;
        }if(choiseInt2==3){
            system( "cls" );
            todo3.clear();
            goto x;
        }if(choiseInt2==4){
            system( "cls" );
            todo4.clear();
            goto x;
        }if(choiseInt2==5){
            system( "cls" );
            todo5.clear();
            goto x;
        }else{
            cout<<""<<endl;
            cout<<"Wrong value!"<<endl;
            Sleep(2500);
            goto p;
        }
    }else if(choiseInt==4){
        o:
        system( "cls" );
        cout<<"1."<<todo1<<endl;
        cout<<"2."<<todo2<<endl;
        cout<<"3."<<todo3<<endl;
        cout<<"4."<<todo4<<endl;
        cout<<"5."<<todo5<<endl;
        cout<<""<<endl;
        cout<<"Which activity you want edit? : "<<endl;
        cin>>choiseInt3;
        if(choiseInt3==1){
            system( "cls" );
            cout<<todo1<<endl;
            todo1.clear();
            cout<<""<<endl;
            cout<<"Correct your activity: ";
            cin>>todo1;
            cout<<"Managed to edit!"<<endl;
            Sleep(2500);
            goto x;
        }if(choiseInt3==2){
            system( "cls" );
            cout<<todo2<<endl;
            todo2.clear();
            cout<<""<<endl;
            cout<<"Correct your activity: ";
            cin>>todo2;
            cout<<"Managed to edit!"<<endl;
            Sleep(2500);
            goto x;
        }if(choiseInt3==3){
            system( "cls" );
            cout<<todo3<<endl;
            todo3.clear();
            cout<<""<<endl;
            cout<<"Correct your activity: ";
            cin>>todo3;
            cout<<"Managed to edit!"<<endl;
            Sleep(2500);
            goto x;
        }if(choiseInt3==4){
            system( "cls" );
            cout<<todo4<<endl;
            todo4.clear();
            cout<<""<<endl;
            cout<<"Correct your activity: ";
            cin>>todo4;
            cout<<"Managed to edit!"<<endl;
            Sleep(2500);
            goto x;

        }if(choiseInt3==5){
            system( "cls" );
            cout<<todo5<<endl;
            todo5.clear();
            cout<<""<<endl;
            cout<<"Correct your activity: ";
            cin>>todo5;
            cout<<"Managed to edit!"<<endl;
            Sleep(2500);
            goto x;

        }else{
            cout<<""<<endl;
            cout<<"Wrong value!"<<endl;
            Sleep(2500);
            goto o;
        }
    }

            //if you choose something else is wrong and you will go back to start
            else{
                cout<<"This value is wrong"<<endl;
                system( "cls" );
                goto x;
            }

    return 0;
}
