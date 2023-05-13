#include <iostream>
#include <string>
using namespace std;

class bank{
    private:
        string username[50];
        string password[50];
        double balance[50];
        int u, p, b;
        
    public:
        int scope = 0;
        
        
        // MAIN MENU FUNCTION
        void main_menu(){
            string option;
            
            do{
            system("cls");
            cout << "==============================\n";
            cout << "\t•BANK SYSTEM•\n";
            cout << "==============================\n";
            cout << " [1] Login Account\n";
            cout << " [2] Create Account\n";
            cout << " [3] View Account List\n";
            cout << " [0] Exit The Bank\n";
            cout << "==============================\n";
            cout << endl;
            cout << " ENTER YOUR OPTION: ";
            cin >> option;
            if(option == "1"){
                login();
                }else if(option == "2"){
                    create();
                }else if(option == "3"){
                    list();
                }else if(option == "0"){
                    cout << endl;
                    cout << " ** EXITING THE BANK **\n";
                    cout << endl;
                    exit(0);
                }else{
                    cout << " ** INVALID OPTION **\n";
                    cout << endl;
                    system("pause");
                    }
                }while(option != "1" || option != "2");
            }
            
            
        // LOGIN ACCOUNT FUNCTION
        void login(){
            string login_username;
            string login_password;
            int counter = 0;
            
            for(int x = 0; x < scope; x++){
            do{
            system("cls");
            cout << "==============================\n";
            cout << "     >> LOGIN ACCOUNT <<\n";
            cout << "==============================\n";
            cout << " Enter Username: ";
            cin >> login_username;
            cout << " Enter Password: ";
            cin >> login_password;
            for(int x = 0; x < scope; x++){
                if(login_username == username[x] && login_password == password[x]){
                    cout << endl;
                    cout << " ** LOGIN SUCCESSFULL **\n";
                    u = x;
                    p = x;
                    b = x;
                    menu();
                    }else{
                        if(counter == scope - 1) {
                        	cout << endl;
                        	cout << " ** INVALID USERNAME OR PASSWORD **\n";
                        	cout << endl;
                        	system("pause");
                        	main_menu();
                        }
                        counter++;
                    }
                }
            }while(username[x] != login_username && password[x] != login_password);
            }
            }
            
        // DISPLAY ACCOUNT LIST FUNCTION
        void list(){
            system("cls");
            cout << "==============================\n";
            cout << "\tACCOUNT LIST\n";
            cout << "==============================\n";
            for(int x = 0; x < scope; x++){
                if(scope <= 0){
                    cout << " THE LIST IS CURRENTLY EMPTY\n";
                    }else{
                cout << " Username: " << username[x] << endl;
                cout << " Balance: " << balance[x] << "$" << endl;
                cout << "==============================\n";
                      }
             }
                cout << endl;
                system("pause");
            }
            
        // CREATE ACCOUNT FUNCTION
        void create(){
            string new_username;
            string new_password;
            double new_balance;
            string confirmation;
            
            system("cls");
            cout << "==============================\n";
            cout << "     >> CREATE ACCOUNT <<\n";
            cout << "==============================\n";
            cout << " Enter Username: ";
            cin >> new_username;
            
            for(int x = 0; x < scope; x++){
            do{
            for(int x = 0; x < scope; x++){
                
                if(username[x] == new_username){
                    cout << " ** THAT NAME IS ALREADY EXIST **\n";
                    cout << " Enter Username: ";
                    cin >> new_username;
                    }else{
                        continue;
                        }
                }
            }while(username[x] == new_username);
            }
                
            cout << "==============================\n";
            cout << " Enter Password: ";
            cin >> new_password;
            cout << "==============================\n";
            cout << " Enter Balance: ";
            cin >> new_balance;
            cout << "==============================\n";
            
            do{
            system("cls");
            cout << "==============================\n";
            cout << "     >> CONFIRMATION <<\n";
            cout << "==============================\n";
            cout << " [1] Confirm Account Creation\n";
            cout << " [2] Cancel And Back To Menu\n";
            cout << "==============================\n";
            cout << endl;
            cout << " ENTER YOUR OPTION: ";
            cin >> confirmation;
            if(confirmation == "1"){
                username[scope] =  new_username;
                password[scope] = new_password;
                balance[scope] = new_balance;
                scope++;
                cout << endl;
                cout << " ** ACCOUNT SUCCESSFULLY CREATED **\n";
                cout << endl;
                system("pause");
                main_menu();
                }else if(confirmation == "2"){
                    cout << endl;
                    cout << " ** CANCELLED CREATION **\n";
                    cout << endl;
                    system("pause");
                    main_menu();
                }else{
                    cout << " ** INVALID OPTION **\n";
                    }
                }while(confirmation != "1" || confirmation != "2");
            }
        
        // LOGIN -> MENU FUNCTION
        void menu(){
            string option;
            
            do{
            system("cls");
            cout << "==============================\n";
            cout << "\t>> MENU <<\n";
            cout << "==============================\n";
            cout << " [1] Check Balance\n";
            cout << " [2] Deposit Money\n";
            cout << " [3] Withdraw Money\n";
            cout << " [4] Transfer Money\n";
            cout << " [5] View & Edit Account Info\n";
            cout << " [0] Log Out\n";
            cout << "==============================\n";
            cout << endl;
            cout << " ENTER YOUR OPTION: ";
            cin >> option;
            if(option == "1"){
                check_balance();
                }else if(option == "2"){
                    deposit_money();
                }else if(option == "3"){
                    withdraw_money();
                }else if(option == "4"){
                    transfer_money();
                }else if(option == "5"){
                    edit_account();
                }else if(option == "0"){
                    main_menu();
                }else{
                    cout << endl;
                    cout << " ** INVALID OPTION **\n";
                    cout << endl;
                    system("pause");
                    }
            }while(option != "1" || option != "2" || option != "3" || option != "4" || option != "5" || option != "0");
            }
            
        // MENU -> CHECK BALANCE FUNCTION
        void check_balance(){
            system("cls");
            cout << "==============================\n";
            cout << "\t>> BALANCE <<\n";
            cout << "==============================\n";
            cout << " Current Balance: " << balance[b] << "$" << endl;
            cout << "==============================\n";
            cout << endl;
            system("pause");
            menu();
            }
            
        // MENU -> DEPOSIT MONEY FUNCTION
        void deposit_money(){
            double amount;
            string option;
            
            do{
            system("cls");
            cout << "==============================\n";
            cout << "\t>> DEPOSIT MONEY <<\n";
            cout << "==============================\n";
            cout << " [1] Enter Amount Money\n";
            cout << " [0] Back To Menu\n";
            cout << "==============================\n";
            cout << endl;
            cout << " ENTER YOUR OPTION: ";
            cin >> option;
            
            if(option == "1"){
                cout << endl;
            cout << "==============================\n";
                cout << " Enter Amount: ";
                cin >> amount;
                if(amount <= 0){
                    cout << endl;
                    cout << " ** NEGATIVE AND ZERO AMOUNT IS NOT ALLOWED **\n";
                    cout << endl;
                    system("pause");
                    }else{
                        balance[b] += amount;
                        cout << endl;
                        cout << " ** SUCCESSFULLY DEPOSITED " << amount << "$ **\n";
                        cout << endl;
                        system("pause");
                        }
                }else if(option == "0"){
                    menu();
                }else{
                    cout << endl;
                    cout << " ** INVALID OPTION **\n";
                    cout << endl;
                    system("pause");
                    }
                    
            }while(amount < 0 || option == "1");
            }
            
        // MENU -> WITHDRAW MONEY FUNCTION
        void withdraw_money(){
            double amount;
            string option;
            
            do{
            system("cls");
            cout << "==============================\n";
            cout << "\t>> WITHDRAW MONEY <<\n";
            cout << "==============================\n";
            cout << " [1] Enter Amount Money\n";
            cout << " [0] Back To Menu\n";
            cout << "==============================\n";
            cout << endl;
            cout << " ENTER YOUR OPTION: ";
            cin >> option;
            if(option == "1"){
                cout << " Enter Amount: ";
                cin >> amount;
                if(amount <= 0){
                    cout << endl;
                    cout << " ** NEGATIVE AND ZERO AMOUNT IS NOT ALLOWED **\n";
                    cout << endl;
                    system("pause");
                    }else{
                        if(amount <= balance[b]){
                        balance[b] -= amount;
                        cout << endl;
                        cout << " ** SUCCESSFULLY WITHDRAWED " << amount << "$ **\n";
                        cout << endl;
                        system("pause");
                        }else if(amount > balance[b]){
                            cout << endl;
                            cout << " ** NOT ENOUGH BALANCE **\n";
                            cout << endl;
                            system("pause");
                            }
                        }
                }else if(option == "0"){
                    menu();
                }else{
                    cout << endl;
                    cout << " ** INVALID OPTION **\n";
                    cout << endl;
                    system("pause");
                    }
            }while(option == "1" || amount <= 0);
            }
            
        // MENU -> TRANSFER MONEY FUNCTION
        void transfer_money(){
            string option;
            
            do{
            system("cls");
            cout << "==============================\n";
            cout << "\t>> TRANSFER MONEY <<\n";
            cout << "==============================\n";
            cout << " [1] Enter the Username you want to transfer\n";
            cout << " [0] Back To Menu\n";
            cout << "==============================\n";
            cout << endl;
            cout << " ENTER YOUR OPTION: ";
            cin >> option;
            if(option == "1"){
                transfer();
                }else if(option == "0"){
                    menu();
                }else{
                    cout << endl;
                    cout << " ** INVALID OPTION **\n";
                    cout << endl;
                    system("pause");
                    }
                    
            }while(option == "1" || option != "1" || option != "0");
            }
            
        // TRANSFER_MONEY -> TRANSFER FUNCTION
        void transfer(){
            string name;
            
            do{
            system("cls");
            cout << "==============================\n";
            cout << "\tENTER USERNAME\n";
            cout << "==============================\n";
            cout << " Enter Here: ";
            cin >> name;
            if(name == username[u]){
                cout << endl;
                cout << " ** CAN'T TRANSFER TO YOURSELF **\n";
                cout << endl;
                system("pause");
                }else{
                          transfer_name(name);
                        }
                        
                
            }while(name == username[u]);
            }
            
        // TRANSFER -> TRANSFER NAME FUNCTION
        void transfer_name(string name){
            int pos;
            string check;
            
            for(int x = 0; x < scope; x++){
                if(name == username[x]){
                    check = username[x];
                    pos = x;
                    final_transfer(pos);
                 }
            }
            
            if(name != check){
                cout << endl;
                cout << " ** THAT ACCOUNT DOESN'T EXIST **\n";
                cout << endl;
                system("pause");
                transfer_money();
             }
                        
            }
            
        // FINAL TRANSFER FUNCTION
        void final_transfer(int pos){
            double amount;
            
            do{
            system("cls");
            cout << "==============================\n";
            cout << "\tTRANSFER TO: " << username[pos] << endl;
            cout << "==============================\n";
            cout << endl;
            cout << " Enter Amount: ";
            cin >> amount;
            if(amount <= 0){
                cout << endl;
                cout << " ** NEGATIVE OR ZERO AMOUNT IS NOW ALLOWED **\n";
                cout << endl;
                system("pause");
            }else if(amount > balance[b]){
                cout << endl;
                cout << " ** NOT ENOUGH BALANCE **\n";
                cout << endl;
                system("pause");
            }else{
                balance[pos] += amount;
                balance[b] -= amount;
                cout << endl;
                cout << " ** SUCCESSFULLY TRANSFERRED " << amount << "$ to " << username[pos] << " **\n";
                cout << endl;
                system("pause");
                menu();
            }
            
            }while(amount <= 0 || amount > balance[b]);
            
            }
            
        // MENU -> EDIT ACCOUNT FUNCTION
        void edit_account(){
            string option;
            
            do{
            system("cls");
            cout << "==============================\n";
            cout << "\t>> EDIT ACCOUNT <<\n";
            cout << "==============================\n";
            cout << " Username: " << username[u] << endl;
            cout << " Password: " << password[p] << endl;
            cout << " Balance: " << balance[b] << endl;
            cout << "==============================\n";
            cout << " [1] Change Username\n";
            cout << " [2] Change Password\n";
            cout << " [3] Change Balance\n";
            cout << " [0] Back To Menu\n";
            cout << "==============================\n";
            cout << endl;
            cout << " ENTER YOUR OPTION: ";
            cin >> option;
            if(option == "1"){
                edit_username();
                }else if(option == "2"){
                    edit_password();
                }else if(option == "3"){
                    edit_balance();
                }else if(option == "0"){
                    menu();
                    }else{
                        cout << endl;
                        cout << " ** INVALID OPTION **\n";
                        cout << endl;
                        system("pause");
                        }
            }while(option != "1" || option != "2" || option != "3" || option != "0");
            }
        
        // EDIT ACCOUNT -> EDIT USERNAME FUNCTION
        void edit_username(){
            string new_username;
            string option;
            
            do{
            system("cls");
            cout << "==============================\n";
            cout << "\tEDIT USERNAME\n";
            cout << "==============================\n";
            cout << " [1] Enter Username To Edit\n";
            cout << " [2] Cancel And Back To Menu\n";
            cout << "==============================\n";
            cout << endl;
            cout << " Enter Your Option: ";
            cin >> option;
            if(option == "1"){
                cout << endl;
                cout << " Enter New Username: ";
                cin >> new_username;
                username[u] = new_username;
                cout << endl;
                cout << " ** SUCCESSFULLY CHANGED **\n";
                cout << endl;
                system("pause");
                menu();
            }else if(option == "2"){
                cout << endl;
                cout << " ** CANCELLED **\n";
                cout << endl;
                system("pause");
                edit_account();
            }else{
                cout << endl;
                cout << " ** INVALID OPTION **\n";
                cout << endl;
                system("pause");
            }
            
            }while(option != "1" || option != "2");
            
            }
            
        // EDIT ACCCOUNT -> EDIT PASSWORD FUNCTION
        void edit_password(){
            string new_password;
            string option;
            
            do{
            system("cls");
            cout << "==============================\n";
            cout << "\tEDIT PASSWORD\n";
            cout << "==============================\n";
            cout << " [1] Enter Password To Edit\n";
            cout << " [2] Cancel And Back To Menu\n";
            cout << "==============================\n";
            cout << endl;
            cout << " Enter Your Option: ";
            cin >> option;
            if(option == "1"){
                cout << endl;
                cout << " Enter New Password: ";
                cin >> new_password;
                password[p] = new_password;
                cout << endl;
                cout << " ** SUCCESSFULLY CHANGED **\n";
                cout << endl;
                system("pause");
                menu();
            }else if(option == "2"){
                cout << endl;
                cout << " ** CANCELLED **\n";
                cout << endl;
                system("pause");
                edit_account();
            }else{
                cout << endl;
                cout << " ** INVALID OPTION **\n";
                cout << endl;
                system("pause");
            }
            
            }while(option != "1" || option != "2");
            
            }
            
        // EDIT ACCOUNT -> EDIT BALANCE FUNCTION
        void edit_balance(){
         double new_balance;
         string option;
         
         do{
            system("cls");
            cout << "==============================\n";
            cout << "\tEDIT BALANCE\n";
            cout << "==============================\n";
            cout << " [1] Enter Balance To Edit\n";
            cout << " [2] Cancel And Back To Menu\n";
            cout << "==============================\n";
            cout << endl;
            cout << " Enter Your Option: ";
            cin >> option;
            if(option == "1"){
                cout << endl;
                cout << " Enter New Balance: ";
                cin >> new_balance;
                balance[b] = new_balance;
                cout << endl;
                cout << " ** SUCCESSFULLY CHANGED **\n";
                cout << endl;
                system("pause");
                menu();
            }else if(option == "2"){
                cout << endl;
                cout << " ** CANCELLED **\n";
                cout << endl;
                system("pause");
                edit_account();
            }else{
                cout << endl;
                cout << " ** INVALID OPTION **\n";
                cout << endl;
                system("pause");
            }
            
            }while(option != "1" || option != "2");
        }
    };
    
int main(){
    bank b1;
    b1.main_menu();
    }