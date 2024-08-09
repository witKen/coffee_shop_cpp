#ifndef LOGIN_H
#define LOGIN_H

class Login
{
private:
    const string adminPw = "admin123";
    const string userPw = "user123";
public:
    int login(){
        while(true){
            Loading loading;
            int choice;
            string pw;
            system("cls");
            cout << "\n0. Exit\n1. Login as Admin\n2. Login as User\nYour Choice: "; 
            cin>>choice;
            
            if(cin.fail() || choice < 0 || choice > 2){
                cout<<"Invalid Input\n";
                cin.clear();
                cin.ignore(10000,'\n');
                system("pause");
            }
            else{
                switch (choice)
                {
                case 0:
                    loading.load("\nExiting");
                    cout<<endl;
                    return 0;
                case 1: 
                    cout<<"Enter Password: ";
                    pw = readPassword();   
                    if(pw == adminPw){
                        loading.load("\nLogin as admin");
                        return 1;
                    }else{
                        cout<<"\nInvalid Password\n";
                        system("pause");
                        break;
                    }
                case 2:
                    cout<<"Enter Password: ";
                    pw = readPassword();   
                    if(pw == userPw){
                        loading.load("\nLogin as user");
                        return 2;
                    }else{
                        cout<<"\nInvalid Password\n";
                        system("pause");
                        break;
                    }
                default:
                    break;
                }
            }
        }
    }

    string readPassword(){
        char ch;
        string pw;
        ch = static_cast<char>(_getch());
        while(ch!=13){
            if(ch==8){
                if(!pw.empty()){
                    cout<<"\b \b";
                    pw.pop_back();
                }
            }else{
                pw.push_back(ch);
                cout<<"*";
            }
            ch = static_cast<char>(_getch());
        }
        return pw;
    }
};

#endif