#ifndef MANAGEDRINK_H
#define MANAGEDRINK_H

class ManageDrink{
    private:
        string Name, Activity;
        char Size;
        float Small, Medium, Large;
        int Number, choice, c, option;
        char buffer[40];
        char tmpName[20]="";
        char tmpNewName[20]="";
        bool success = false;
        InputValidation inputValidation;

    public:
        void addDrink(){
            while(!success){
                int step = 0;
                system("cls");
                cout<<"\tAdding Item\n";
                fflush(stdin);
                cout<<"Input Name(Press Enter To Return): ";
                getline(cin, Name);
                if(Name.empty()){
                    break;
                }
                Name = inputValidation.trimString(Name);
                while(!success){
                    float input = 0;
                    system("cls");
                    switch (step)
                    {
                    case 0:
                        cout<<"\tAdding Item\n";
                        cout<<"Input Name(Press Enter To Return): "<<Name<<endl;
                        cout<<"Input Price\n";
                        cout<<"Small: $"; cin>>Small;
                        input = Small;
                        break;
                    case 1:
                        cout<<"\tAdding Item\n";
                        cout<<"Input Name(Press Enter To Return): "<<Name<<endl;
                        cout<<"Input Price\n";
                        cout<<"Small: $"<<Small<<endl;
                        cout<<"Medium: $"; cin>>Medium;
                        break;
                    case 2:
                        cout<<"\tAdding Item\n";
                        cout<<"Input Name(Press Enter To Return): "<<Name<<endl;
                        cout<<"Input Price\n";
                        cout<<"Small: $"<<Small<<endl;
                        cout<<"Medium: $"<<Medium<<endl;
                        cout<<"Large: $"; cin>>Large;
                        break;
                    default:
                        cout<<"\tAdding Item\n";
                        cout<<"Input Name(Press Enter To Return): "<<Name<<endl;
                        cout<<"Input Price\n";
                        cout<<"Small: $"<<Small<<endl;
                        cout<<"Medium: $"<<Medium<<endl;
                        cout<<"Large: $"<<Large<<endl;
                        cout<<"Success\n";
                        system("pause");
                        success = true;
                        break;
                    }

                    if(cin.fail() || input < 0){
                        cout<<"Invalid Input\n";
                        cin.clear();
                        cin.ignore(10000,'\n');
                        system("pause");
                    }
                    else{
                        step++;
                    }
                }
            }
            success = false;
        }
};

#endif
