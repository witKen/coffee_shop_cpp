#ifndef ADMIN_H
#define ADMIN_H

#include<iostream>
#include<conio.h>
#include<header.h>

using namespace std;

class Admin{
    public:
        void admin(){
            bool back = false;
            while (!back)
            {
                int choice;

                system("cls");
                cout<<"\nWelcome Coffee Shop System"<<endl;
                cout<<"0.Return\n1.Add item\n2.Display item\n3.Search item by name\n4.Update item\n5.Delete item\n6.View History\nYour Choice: ";
                cin>>choice;
                
                switch (choice)
                {
                case 0:
                    loading.load("Returning");
                    back = true;
                    break;
                case 1:
                    break;
                default:
                    break;
                }
            }
            
        }
};

#endif