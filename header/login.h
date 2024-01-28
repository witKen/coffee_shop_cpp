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
            string choice;
            string pw;
            system("cls");
            cout << "\n0. Exit\n1. Login as Admin\n2. Login as User\nYour Choice: ";
            
            getline(cin, choice);

            if (choice == "0"){
                loading.load("\nExiting");
                cout<<endl;
                return 0;
            }else if(choice == "1"){
                cout<<"Enter Password: ";
                pw = readPassword();   
                if(pw == adminPw){
                    loading.load("\nLogin as admin");
                    return 2;
                }else{
                    cout<<"\nInvalid Password\n";
                    system("pause");
                }
            }else if(choice == "2"){
                cout<<"Enter Password: ";
                pw = readPassword();   
                if(pw == userPw){
                    loading.load("\nLogin as user");
                    return 2;
                }else{
                    cout<<"\nInvalid Password\n";
                    system("pause");
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