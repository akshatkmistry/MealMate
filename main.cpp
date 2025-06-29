#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Person {
private:
    string pname;
    long long phone;

public:
    void setName() {
        cout << "\n\tEnter Your Name: ";
        cin >> pname;
    }

    void setPhone() {
        cout << "\n\tEnter your Phone Number: ";
        cin >> phone;
    }

    string showName() {
        return pname;
    }

    long long showPhone() {
        return phone;
    }
};

class Food {
public:
    string fname;
    int price;
    int quantity;
    void getQuantity() {
        cout << "\n                           Enter the Quantity: ";
        cin >> quantity;
    }
};

class Soup : public Food {
public:
    Soup(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Starters : public Food {
public:
    Starters(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Sabzi : public Food {
public:
    Sabzi(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Paneer : public Food {
public:
    Paneer(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Daal : public Food {
public:
    Daal(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Rice : public Food {
public:
    Rice(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Tandoor : public Food {
public:
    Tandoor(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class PR : public Food {
public:
    PR(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Beverages : public Food {
public:
    Beverages(const string& s, int p) {
        fname = s;
        price = p;
    }
};

class Sweets : public Food {
public:
    Sweets(const string& s, int p) {
        fname = s;
        price = p;
    }
};

int main() {
    string method;
    long long no;
    char op1, fop;
    Person p1;
    int num, i, ran, menuop, menuop1;
    float total;
    string mhead = "     ___  ___              _ ___  ___        _        \n"
                  "     |  \\/  |             | ||  \\/  |       | |       \n"
                  "     | .  . |  ___   __ _ | || .  . |  __ _ | |_  ___ \n"
                  "     | |\\/| | / _ \\ / _` || || |\\/| | / _` || __|/ _ \\\n"
                  "     | |  | ||  __/| (_| || || |  | || (_| || |_|  __/\n"
                  "     \\_|  |_/ \\___| \\__,_||_|\\_|  |_/ \\__,_| \\__|\\___|\n\n"
                  "                      Fine Dine-In                      \n";

	string fhead = R"(
 	 ___             _   __  __              
 	| __|__  ___  __| | |  \/  |___ _ _ _  _ 
 	| _/ _ \/ _ \/ _` | | |\/| / -_) ' \ || |
 	|_|\___/\___/\__,_| |_|  |_\___|_||_\_,_|
	)";
	
	string shead1 = R"(
                          ___                
                         / __| ___ _  _ _ __ 
                         \__ \/ _ \ || | '_ \
                         |___/\___/\_,_| .__/
                                       |_|
)";

string shead2 = R"(
                      ___ _            _               
                     / __| |_ __ _ _ _| |_ ___ _ _ ___ 
                     \__ \  _/ _` | '_|  _/ -_) '_(_-< 
                     |___/\__\__,_|_|  \__\___|_| /__/ 
)";

string sabzihead = R"(
          ___       _       _   __  __              _ _   ___      
         / __| __ _| |__ __(_) |  \/  |__ _ _ _  __| (_) / __| ___ 
         \__ \/ _` | '_ \_ / | | |\/| / _` | ' \/ _` | | \__ \/ -_)
         |___/\__,_|_.__/__|_| |_|  |_\__,_|_||_\__,_|_| |___/\___|
)";

string phead1 = R"(
         ___                         _   _   _    _            _   
        | _ \__ _ _ _  ___ ___ _ _  | |_(_) | |  (_)________ _| |_ 
        |  _/ _` | ' \/ -_) -_) '_| | / / | | |__| |_ /_ / _` |  _|
        |_| \__,_|_||_\___\___|_|   |_\_\_| |____|_/__/__\__,_|\__|
)";

string dhead = R"(
                           ___            _ 
                          |   \ __ _ __ _| |
                          | |) / _` / _` | |
                          |___/\__,_\__,_|_|
)";

string rhead = R"(
      _  ___           _                 ___                     _   _ 
     | |/ / |_ _  _ __| |__ _  _   ___  | _ ) __ _ ____ __  __ _| |_(_)
     | ' <| ' \ || (_-< '_ \ || | / -_) | _ \/ _` (_-< '  \/ _` |  _| |
     |_|\_\_||_\_,_/__/_.__/\_,_| \___| |___/\__,_/__/_|_|_\__,_|\__|_|
)";

string thead = R"(
      _____             _                _         ____     _ _       
     |_   _|_ _ _ _  __| |___  ___ _ _  | |_____  |_  /__ _(_) |_____ 
       | |/ _` | ' \/ _` / _ \/ _ \ '_| | / / -_)  / // _` | | / / -_)
       |_|\__,_|_||_\__,_\___/\___/_|   |_\_\___| /___\__,_|_|_\_\___|
                                                                  
)";
string phead2 = R"(
      ___                    _                _   ___      _ _        
     | _ \__ _ _ __  __ _ __| |  __ _ _ _  __| | | _ \__ _(_) |_ __ _ 
     |  _/ _` | '_ \/ _` / _` | / _` | ' \/ _` | |   / _` | |  _/ _` |
     |_| \__,_| .__/\__,_\__,_| \__,_|_||_\__,_| |_|_\__,_|_|\__\__,_|
              |_|                                                     
)";

string bhead = R"(
                  ___                                   
                 | _ ) _____ _____ _ _ __ _ __ _ ___ ___
                 | _ \/ -_) V / -_) '_/ _` / _` / -_|_-<
                 |___/\___|\_/\___|_| \__,_\__, \___/__/
                                      |___/        
)";

string shead3 = R"(
                        ___                _      
                       / __|_ __ _____ ___| |_ ___
                       \__ \ V  V / -_) -_)  _(_-<
                       |___/\_/\_/\___\___|\__/__/
)";

string billhead = R"(
                                                  ___ _ _ _ 
                                                 | _ |_) | |
                                                 | _ \ | | |
                                                 |___/_|_|_|
)";

string ty = R"(
           _____ _              _                      __            ___         _         _           _ 
          |_   _| |_  __ _ _ _ | |__  _  _ ___ _  _   / _|___ _ _   / _ \ _ _ __| |___ _ _(_)_ _  __ _| |
            | | | ' \/ _` | ' \| / / | || / _ \ || | |  _/ _ \ '_| | (_) | '_/ _` / -_) '_| | ' \/ _` |_|
            |_| |_||_\__,_|_||_|_\_\  \_, \___/\_,_| |_| \___/_|    \___/|_| \__,_\___|_| |_|_||_\__, (_)
                                      |__/                                                       |___/   
)";

string orderhead = R"(
                                               ___         _         
                                              / _ \ _ _ __| |___ _ _ 
                                             | (_) | '_/ _` / -_) '_|
                                              \___/|_| \__,_\___|_|  
)";

string chead = R"(
  __   __               ___         _           _              _                     ___                  _ _        _ 
  \ \ / /__ _  _ _ _   / _ \ _ _ __| |___ _ _  | |_  __ _ ___ | |__  ___ ___ _ _    / __|__ _ _ _  __ ___| | |___ __| |
   \ V / _ \ || | '_| | (_) | '_/ _` / -_) '_| | ' \/ _` (_-< | '_ \/ -_) -_) ' \  | (__/ _` | ' \/ _/ -_) | / -_) _` |
   |_| \___/\_,_|_|    \___/|_| \__,_\___|_|   |_||_\__,_/__/ |_.__/\___\___|_||_|  \___\__,_|_||_\__\___|_|_\___\__,_|
)";

string abhead = R"(
                                    _   _              _     _   _    
                                   /_\ | |__  ___ _  _| |_  | | | |___
                                  / _ \| '_ \/ _ \ || |  _| | |_| (_-<
                                 /_/ \_\_.__/\___/\_,_|\__|  \___//__/
)";

string namehead = R"(
  ___  _                      _                  _ _             _   _       _         _     __  __ _    _            
 |   \| |_  _ _ _  ___ __  _ | |__ _ _ _ __ _ __| (_)           /_\ | |__ __| |_  __ _| |_  |  \/  (_)__| |_ _ _ _  _ 
 | |) | ' \| '_| || \ V / | || / _` | '_/ _` / _` | |          / _ \| / /(_-< ' \/ _` |  _| | |\/| | (_-<  _| '_| || |
 |___/|_||_|_|  \_,_|\_/   \__/\__,_|_| \__,_\__,_| |         /_/ \_\_\_\/__/_||_\__,_|\__| |_|  |_|_/__/\__|_|  \_, |
                                                                                                                  |__/
)";

    goto start;
    start:
    system("cls");
    cout << mhead;
    cout << "\n \n";
       cout << "         --------------------------------------- " << endl;
       cout << "         |  Option No.  |       Function       |" << endl;
       cout << "         ---------------------------------------" << endl;
       cout << "         |      1       |      Order Food      |  " << endl;
       cout << "         ---------------------------------------" << endl;
       cout << "         |      2       |   View/Cancel Order  |  " << endl;
       cout << "         ---------------------------------------" << endl;
       cout << "         |      3       |       About Us       |   " << endl;
       cout << "         ---------------------------------------" << endl;
       cout << "         |      4       |          Exit        |    " << endl;
       cout << "         ---------------------------------------" << endl;
    cout << "\n\t\t  Enter your Option: ";
    cin >> num;

    if (num == 1) {
        system("cls");
        cout << mhead << "\n";
        p1.setName();
        p1.setPhone();
        goto menu;
    }
    else if(num== 2){
        system("cls");
        cout << mhead;
        cout << "\n\tEnter your Mobile Number :";
        cin >> no;
        if(no == p1.showPhone())
        {
            system("cls");
            cout << mhead;
            cout << "\n\n\t\t    Welcome Back, " << p1.showName() << "!\n";
       cout << "\n";     
       cout << "         --------------------------------------------" << endl;
       cout << "         |  Option No.  |          Function         |" << endl;
       cout << "         --------------------------------------------" << endl;
       cout << "         |      1       |       View Order Food     |  " << endl;
       cout << "         --------------------------------------------" << endl;
       cout << "         |      2       |        Cancel Order       |  " << endl;
       cout << "         --------------------------------------------" << endl;
       cout << "         |      0       |           Return          |   " << endl;
       cout << "         --------------------------------------------" << endl;
            cout << "\t\tEnter your Option : ";
            cin >> menuop;
            if(menuop == 0){
                goto start;
            }
            else if(menuop == 1){
                string line;
                system("cls");
                cout << orderhead << "\n\n";
                cout << "\t\t\tItems \t\t\tQuantity \t\t\tPrice\n\n";
                ifstream inputFile("order.txt");
                if (inputFile.is_open()) {
                while (getline(inputFile, line)) {
                cout <<"\t\t\t" << line << endl;
                    }
                }
                cout << "\t\t\t-------------------------------------------------------------\n";
                cout << "\t\t\t\tTotal :\t\t\t\t" << total << "\n\n";
       cout << "\t\t\t\t--------------------------------------------" << endl;
       cout << "\t\t\t\t|  Option No.  |          Function         |" << endl;
       cout << "\t\t\t\t--------------------------------------------" << endl;
       cout << "\t\t\t\t|      1       |        Cancel Order       |  " << endl;
       cout << "\t\t\t\t--------------------------------------------" << endl;
       cout << "\t\t\t\t|      0       |    Return to Main Page    |  " << endl;
       cout << "\t\t\t\t--------------------------------------------" << endl;
                cout << "\n\n\t\t\t\t\t        Enter your Option : ";
                cin >> menuop1;
                if(menuop1 == 0){
                    goto start;
                }
                else if(menuop1 == 1){
                    system("cls");
                    std::ofstream outputFile("order.txt", std::ofstream::trunc);
                    outputFile.close();
                    cout << chead << endl;
       cout << "\t\t\t\t--------------------------------------------" << endl;
       cout << "\t\t\t\t|      0       |    Return to Main Page    |  " << endl;
       cout << "\t\t\t\t--------------------------------------------" << endl;
                cout << "\n\n\t\t\t\t\t        Enter your Option : ";
                    total = 0;
                    cin >> menuop;
                    goto start;
                }
            }
            else if(menuop == 2 )
            {
                system("cls");
                    std::ofstream outputFile("order.txt", std::ofstream::trunc);
                    outputFile.close();
        
                    cout << chead << endl;
       cout << "\t\t\t\t--------------------------------------------" << endl;
       cout << "\t\t\t\t|      0       |    Return to Main Page    |  " << endl;
       cout << "\t\t\t\t--------------------------------------------" << endl;
                cout << "\n\n\t\t\t\t\t        Enter your Option : ";
                    total = 0;
                    cin >> menuop;
                    goto start;
            }
        }
        else if(no != p1.showPhone())
        {
            system("cls");
            cout << "\n\n\t\t\tThere are no Orders done with the provided Mobile Number.\n";
            cout << "\t\t\t\tPlease order Food to view Order Histroy.\n\n";
       cout << "\t\t\t\t--------------------------------------------" << endl;
       cout << "\t\t\t\t|  Option No.  |          Function         |" << endl;
       cout << "\t\t\t\t--------------------------------------------" << endl;
       cout << "\t\t\t\t|      0       |     Return to Main Page   |  " << endl;
       cout << "\t\t\t\t--------------------------------------------" << endl;
       cout << "\t\t\t\t|      1       |           Exit            |  " << endl;
       cout << "\t\t\t\t--------------------------------------------" << endl;
                cout << "\n\n\t\t\t\t\t      Enter your Option : ";
            cin >> menuop1;
            if(menuop1 == 0){
                goto start;
            }
            else{
                exit(0);
            }
        }
    }

     else if (num == 3) {
        system("cls");
        cout << abhead << "\n\n";
        cout << namehead << endl;
        cout << "\n\t      MealMate is an application made by us to simulate Dine-In Food Ordering at a Restaurant.\n";
        cout << "\n\t         It is based on real life applications which we have seen in many Restaurants and is \n";
        cout << "\n\t       inspired from them. Our Application has an interactive and easy to understand interface.\n";
        cout << "\n\t      We would love to thank Dr. Maulika Patel for her guidance and for helping us with problems\n";
        cout << "\n\t                          which enabled us to make this project possible.\n\n";
        cout << "\t\t\t\t--------------------------------------------" << endl;
        cout << "\t\t\t\t|      0       |    Return to Main Page    |  " << endl;
        cout << "\t\t\t\t--------------------------------------------" << endl;
        cout << "\n\n\t\t\t\t\t        Enter your Option : ";
        cin >> ran;
        goto start;

    }
    else if (num == 4) {
        exit(0);
    }

menu:
    system("cls");
       cout << fhead;
       cout << "\n	       Welcome to our Dine-In, " << p1.showName() << "!\n\n";
       cout << "         ------------------------------------------ " << endl;
       cout << "         |  Option No.  |      Food Category      |" << endl;
       cout << "         ------------------------------------------" << endl;
       cout << "         |      1       |          Soup           |  " << endl;
       cout << "         ------------------------------------------" << endl;
       cout << "         |      2       |        Starters         |  " << endl;
       cout << "         ------------------------------------------" << endl;
       cout << "         |      3       |      Sabzi Mandi Se     |   " << endl;
       cout << "         ------------------------------------------" << endl;
       cout << "         |      4       |     Paneer ki Lizzat    |    " << endl;
       cout << "         ------------------------------------------" << endl;
       cout << "         |      5       |          Daal           |   " << endl;
       cout << "         ------------------------------------------" << endl;
       cout << "         |      6       |     Khusbu-e-Basmati    |    " << endl;
       cout << "         ------------------------------------------" << endl;
       cout << "         |      7       |     Tandoor ke Zaike    |   " << endl;
       cout << "         ------------------------------------------" << endl;
       cout << "         |      8       |     Papad and Raita     |   " << endl;
       cout << "         ------------------------------------------" << endl;
       cout << "         |      9       |        Beverages        |    " << endl;
       cout << "         ------------------------------------------" << endl;
       cout << "         |      10      |        Sweets           |    " << endl;
       cout << "         ------------------------------------------" << endl;
       cout << "\t ------------------------------------------" << endl;
       cout << "\t |      0       |   Return to Main Page   |  " << endl;
       cout << "\t ------------------------------------------" << endl;
                cout << "\n\n\t\t        Enter your Option : ";
    cin >> i;

    if(i == 0){
        goto start;
    }

    if (i == 1) {
        system("cls");
        cout << shead1;

         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |  Food No.  |          Food Name         |    Price    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     1      |    Cream of Tomato Soup    |    100.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     2      |     Veg Sweet Corn Soup    |    110.00   |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     3      |       Hot & Sour Soup      |    120.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     4      |        Manchow Soup        |    140.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
                
        cout << "\n";
        cout << "                --------------------------------------------" << endl;
        cout << "                |  Option No.  |          Function         |" << endl;
        cout << "                --------------------------------------------" << endl;
        cout << "                |      0       |    Return to Main Menu    |  " << endl;
        cout << "                --------------------------------------------" << endl;
        

        cout << "\n                           Enter your Option: ";
        cin >> op1;

        if(op1 == '0'){
            goto menu;
        }
        else if (op1 == '1') {
            Soup s1("Cream of Tomato Soup", 100);
            s1.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t   " << s1.quantity << "\t\t                 " << s1.price << endl;
                outputFile.close();
                total = total + 100 * s1.quantity;
            }
        }
        else if (op1 == '2') {
            Soup s2("Veg Sweet Corn Soup", 110);
            s2.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 110 * s2.quantity;
            }
        }
        else if (op1 == '3') {
            Soup s3("Hot & Sour Soup", 120);
            s3.getQuantity();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
            total = total + 120 * s3.quantity;
             }
        }
        else if (op1 == '4') {
            Soup s4("Manchow Soup", 140);
            s4.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
            total = total + 140 * s4.quantity;
            }
        }

        cout << "\n\t\t  Do you want to order anything else? (Y/N)?\n";
        cout << "\n\t\t\t    Enter your Option: ";
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 2) {
        system("cls");
        cout << shead2;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |  Food No.  |          Food Name         |    Price    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     1      |      Hara Bhara Kabab      |    160.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     2      |    Veg Manchurian (Dry)    |    170.00   |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     3      |       Veg Spring Roll      |    170.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     4      |        Paneer Tikka        |    170.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
                
        cout << "\n";
        cout << "                --------------------------------------------" << endl;
        cout << "                |  Option No.  |          Function         |" << endl;
        cout << "                --------------------------------------------" << endl;
        cout << "                |      0       |    Return to Main Menu    |  " << endl;
        cout << "                --------------------------------------------" << endl;
        

        cout << "\n                           Enter your Option: ";
        cin >> op1;

        if(op1 == '0'){
            goto menu;
        }

        else if (op1 == '1') {
            Starters s1("Hara Bhara Kabab", 160);
            s1.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                total = total + 160 * s1.quantity;
            }
        }
        else if (op1 == '2') {
            Starters s2("Veg Manchurian (Dry)", 170);
            s2.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 170 * s2.quantity;
            }
        }
        else if (op1 == '3') {
            Starters s3("Veg Spring Roll", 170);
            s3.getQuantity();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
            total = total + 170 * s3.quantity;
             }
        }
        else if (op1 == '4') {
            Starters s4("Paneer Tikka", 170);
            s4.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
            total = total + 170 * s4.quantity;
            }
        }

        cout << "\n\t\t  Do you want to order anything else? (Y/N)?\n";
        cout << "\n\t\t\t    Enter your Option: "; 
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 3) {
        system("cls");
        
        cout << sabzihead;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |  Food No.  |          Food Name         |    Price    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     1      |        Veg. Hungama        |    190.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     2      |     Veg. Handi Masala      |    190.00   |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     3      |        Veg. Jaipuri        |    190.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     4      |      Veg. Tawa Masala      |    190.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     5      |       Veg. Makhanwala      |    195.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     6      |       Mushroom Masala      |    200.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;

        cout << "\n";
        cout << "                --------------------------------------------" << endl;
        cout << "                |  Option No.  |          Function         |" << endl;
        cout << "                --------------------------------------------" << endl;
        cout << "                |      0       |    Return to Main Menu    |  " << endl;
        cout << "                --------------------------------------------" << endl;
        

        cout << "\n                           Enter your Option: ";
        cin >> op1;

        if(op1 == '0'){
            goto menu;
        }

        else if (op1 == '1') {
            Sabzi s1("Veg. Hungama", 190);
            s1.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                total = total + 190 * s1.quantity;
            }
        }
        else if (op1 == '2') {
            Sabzi s2("Veg. Handi Masala", 190);
            s2.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t    " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 190 * s2.quantity;
            }
        }
        else if (op1 == '3') {
            Sabzi s3("Veg. Jaipuri", 190);
            s3.getQuantity();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
            total = total + 190 * s3.quantity;
             }
        }
        else if (op1 == '4') {
            Sabzi s4("Veg. Tawa Masala", 190);
            s4.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
            total = total + 190 * s4.quantity;
            }
        }
        else if (op1 == '5') {
            Sabzi s5("Veg. Makhanwala", 195);
            s5.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s5.fname << "\t\t   " << s5.quantity << "\t\t\t         " << s5.price << endl;
            outputFile.close();
            total = total + 195 * s5.quantity;
             }
        }
        else if (op1 == '6') {
            Sabzi s6("Mushroom Masala", 200);
            s6.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s6.fname << "\t\t   " << s6.quantity << "\t\t\t         " << s6.price << endl;
            outputFile.close();
            total = total + 200 * s6.quantity;
            }
        }
        cout << "\n\t\t  Do you want to order anything else? (Y/N)?\n";
        cout << "\n\t\t\t    Enter your Option: "; 
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 4) {
        system("cls");
cout << phead1;

         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |  Food No.  |          Food Name         |    Price    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     1      |        Palak Paneer        |    180.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     2      |      Paneer Chatpata       |    200.00   |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     3      |       Paneer Toofani       |    200.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     4      |      Paneer Kolhapuri      |    220.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     5      |    Paneer Butter Masala    |    220.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     6      |        Paneer Angara       |    240.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;

        cout << "\n";
        cout << "                --------------------------------------------" << endl;
        cout << "                |  Option No.  |          Function         |" << endl;
        cout << "                --------------------------------------------" << endl;
        cout << "                |      0       |    Return to Main Menu    |  " << endl;
        cout << "                --------------------------------------------" << endl;
        

        cout << "\n                           Enter your Option: ";
        cin >> op1;

        if(op1 == '0'){
            goto menu;
        }

        else if (op1 == '1') {
            Paneer  s1("Palak Paneer", 180);
            s1.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                total = total + 180 * s1.quantity;
            }
        }
        else if (op1 == '2') {
            Paneer  s2(" Paneer Chatpata", 200);
            s2.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 200 * s2.quantity;
            }
        }
        else if (op1 == '3') {
            Paneer  s3("Paneer Toofani", 200);
            s3.getQuantity();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
            total = total + 200 * s3.quantity;
             }
        }
        else if (op1 == '4') {
            Paneer  s4("Paneer Kolhapuri", 220);
            s4.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
            total = total + 220 * s4.quantity;
            }
        }
        else if (op1 == '5') {
            Paneer  s5("Paneer Butter Masala", 220);
            s5.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s5.fname << "\t   " << s5.quantity << "\t\t\t         " << s5.price << endl;
            outputFile.close();
            total = total + 220 * s5.quantity;
             }
        }
        else if (op1 == '6') {
            Paneer  s6("Paneer Angara", 240);
            s6.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s6.fname << "\t\t   " << s6.quantity << "\t\t\t         " << s6.price << endl;
            outputFile.close();
            total = total + 240 * s6.quantity;
            }
        }
        
        cout << "\n\t\t  Do you want to order anything else? (Y/N)?\n";
        cout << "\n\t\t\t    Enter your Option: "; 
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 5) {
        system("cls");
cout << dhead;

         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |  Food No.  |          Food Name         |    Price    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     1      |           Dal Fry          |    120.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     2      |          Dal Tadka         |    140.00   |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     3      |          Dal Makhani       |    160.00   | " << endl;
         cout << "         ---------------------------------------------------------" << endl;

        cout << "\n";
        cout << "                --------------------------------------------" << endl;
        cout << "                |  Option No.  |          Function         |" << endl;
        cout << "                --------------------------------------------" << endl;
        cout << "                |      0       |    Return to Main Menu    |  " << endl;
        cout << "                --------------------------------------------" << endl;
        

        cout << "\n                           Enter your Option: ";
        cin >> op1;

        if(op1 == '0'){
            goto menu;
        }

        else if (op1 == '1') {
            Daal  s1("Dal Fry", 120);
            s1.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                total = total + 120 * s1.quantity;
            }
        }
        else if (op1 == '2') {
            Daal  s2("Dal Tadka", 140);
            s2.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 140 * s2.quantity;
            }
        }
        else if (op1 == '3') {
            Daal  s3("Dal Makhani", 160);
            s3.getQuantity();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
            total = total + 160 * s3.quantity;
             }
        }
       

        cout << "\n\t\t  Do you want to order anything else? (Y/N)?\n";
        cout << "\nEnter your Option: ";
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 6) {
        system("cls");
cout << rhead;

         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |  Food No.  |          Food Name         |    Price     |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     1      |          Plain Rice        |    120.00    | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     2      |          Jeera Rice        |    130.00    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     3      |          Dum Biryani       |    150.00    | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     4      |      Hyderabadi Biryani    |    170.00    | " << endl;
         cout << "         ---------------------------------------------------------" << endl;

        cout << "\n";
        cout << "                --------------------------------------------" << endl;
        cout << "                |  Option No.  |          Function         |" << endl;
        cout << "                --------------------------------------------" << endl;
        cout << "                |      0       |    Return to Main Menu    |  " << endl;
        cout << "                --------------------------------------------" << endl;
        

        cout << "\n                           Enter your Option: ";
        cin >> op1;

        if(op1 == '0'){
            goto menu;
        }

        else if (op1 == '1') {
            Rice s1("Plain Rice", 120);
            s1.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                total = total + 120 * s1.quantity;
            }
        }
        else if (op1 == '2') {
            Rice s2("Jeera Rice", 130);
            s2.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
           outputFile.close();
            total = total + 130 * s2.quantity;
            }
        }
        else if (op1 == '3') {
            Rice s3("Dum Biryani", 150);
            s3.getQuantity();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
             total = total + 150 * s3.quantity;
             }
        }
        else if (op1 == '4') {
            Rice s4("Hyderabadi Biryani", 170);
            s4.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
             total = total + 170 * s4.quantity;
            }
        }
 
        cout << "\n\t\t  Do you want to order anything else? (Y/N)?\n";
        cout << "\n\t\t\t    Enter your Option: "; 
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 7) {
        system("cls");
cout << thead;

         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |  Food No.  |          Food Name         |    Price    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     1      |             Roti           |    20.00    | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     2      |         Plain Paratha      |    30.00    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     3      |          Plain Naan        |    35.00    | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     4      |          Missi Roti        |    40.00    | " << endl;
         cout << "         ---------------------------------------------------------" << endl;

        cout << "\n";
        cout << "                --------------------------------------------" << endl;
        cout << "                |  Option No.  |          Function         |" << endl;
        cout << "                --------------------------------------------" << endl;
        cout << "                |      0       |    Return to Main Menu    |  " << endl;
        cout << "                --------------------------------------------" << endl;
        

        cout << "\n                           Enter your Option: ";
        cin >> op1;

        if(op1 == '0'){
            goto menu;
        }

        else if (op1 == '1') {
            Tandoor s1("Roti", 20);
            s1.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                 total = total + 20 * s1.quantity;
            }
        }
        else if (op1 == '2') {
            Tandoor s2("Plain Paratha", 30);
            s2.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
             total = total + 30 * s2.quantity;
            }
        }
        else if (op1 == '3') {
            Tandoor s3("Plain Naan", 35);
            s3.getQuantity();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
             total = total + 35 * s3.quantity;
             }
        }
        else if (op1 == '4') {
            Tandoor s4("Missi Roti", 40);
            s4.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
             total = total + 40 * s4.quantity;
            }
        }
 
        cout << "\n\t\t  Do you want to order anything else? (Y/N)?\n";
        cout << "\n\t\t\t    Enter your Option: "; 
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 8) {
        system("cls");
cout << phead2;

         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |  Food No.  |          Food Name         |    Price    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     1      |        Roasted Papad       |    25.00    | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     2      |         Masala Papad       |    35.00    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     3      |          Veg. Raita        |    60.00    | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     4      |        Mix Fruit Raita     |    80.00    | " << endl;
         cout << "         ---------------------------------------------------------" << endl;

        cout << "\n";
        cout << "                --------------------------------------------" << endl;
        cout << "                |  Option No.  |          Function         |" << endl;
        cout << "                --------------------------------------------" << endl;
        cout << "                |      0       |    Return to Main Menu    |  " << endl;
        cout << "                --------------------------------------------" << endl;
        

        cout << "\n                           Enter your Option: ";
        cin >> op1;

        if(op1 == '0'){
            goto menu;
        }

        else if (op1 == '1') {
            PR s1("Roasted Papad", 25);
            s1.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                 total = total + 25 * s1.quantity;
            }
        }
        else if (op1 == '2') {
            PR s2("Masala Papad", 35);
            s2.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 35 * s2.quantity;
            }
        }
        else if (op1 == '3') {
            PR s3("Veg. Raita", 60);
            s3.getQuantity();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
            total = total + 60 * s3.quantity;
             }
        }
        else if (op1 == '4') {
            PR s4("Mix Fruit Raita", 80);
            s4.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
            total = total + 80 * s4.quantity;
            }
        }
 
        cout << "\n\t\t  Do you want to order anything else? (Y/N)?\n";
        cout << "\n\t\t\t    Enter your Option: "; 
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 9) {
        system("cls");
cout << bhead;

         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |  Food No.  |          Food Name         |    Price    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     1      |         Mineral Water      |    20.00    | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     2      |         Butter Milk        |    30.00    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     3      |         Cold Drinks        |    40.00    | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     4      |      Sweet/Salt Lassi      |    60.00    | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
        
       

        cout << "\n";
        cout << "                --------------------------------------------" << endl;
        cout << "                |  Option No.  |          Function         |" << endl;
        cout << "                --------------------------------------------" << endl;
        cout << "                |      0       |    Return to Main Menu    |  " << endl;
        cout << "                --------------------------------------------" << endl;
        

        cout << "\n                           Enter your Option: ";
        cin >> op1;

        if(op1 == '0'){
            goto menu;
        }
        else if (op1 == '1') {
            Beverages s1("Mineral Water", 20);
            s1.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s1.fname << "\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                total = total + 20 * s1.quantity;
            }
        }
        else if (op1 == '2') {
            Beverages s2("Butter Milk", 30);
            s2.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 30 * s2.quantity;
            }
        }
        else if (op1 == '3') {
            Beverages s3("Cold Drinks", 40);
            s3.getQuantity();
            ofstream outputFile("order.txt", ios::app);
             if (outputFile.is_open()) {
            outputFile  << s3.fname << "\t\t   " << s3.quantity << "\t\t\t         " << s3.price << endl;
            outputFile.close();
            total = total + 40 * s3.quantity;
             }
        }
        else if (op1 == '4') {
            Beverages s4("Sweet/Salt Lassi", 60);
            s4.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s4.fname << "\t   " << s4.quantity << "\t\t\t         " << s4.price << endl;
            outputFile.close();
            total = total + 60 * s4.quantity;
            }
        }
 
        cout << "\n\t\t  Do you want to order anything else? (Y/N)?\n";
        cout << "\n\t\t\t    Enter your Option: "; 
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

    if (i == 10) {
        system("cls");
        cout << shead3;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |  Food No.  |          Food Name         |    Price    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     1      |          Gulab Jamun       |    60.00    | " << endl;
         cout << "         ---------------------------------------------------------" << endl;
         cout << "         |     2      |         Kala Jamun         |    70.00    |" << endl;
         cout << "         ---------------------------------------------------------" << endl;
        cout << "\n";
        cout << "                --------------------------------------------" << endl;
        cout << "                |  Option No.  |          Function         |" << endl;
        cout << "                --------------------------------------------" << endl;
        cout << "                |      0       |    Return to Main Menu    |  " << endl;
        cout << "                --------------------------------------------" << endl;
        

        cout << "\n                           Enter your Option: ";
        cin >> op1;

        if(op1 == '0'){
            goto menu;
        }
        else if (op1 == '1') {
            Sweets s1("Gulab Jamun", 60);
            s1.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
                outputFile  << s1.fname << "\t\t   " << s1.quantity << "\t\t\t         " << s1.price << endl;
                outputFile.close();
                total = total + (60*s1.quantity);
            }
        }
        else if (op1 == '2') {
            Sweets s2("Kala Jamun", 70);
            s2.getQuantity();
            ofstream outputFile("order.txt", ios::app);
            if (outputFile.is_open()) {
            outputFile  << s2.fname << "\t\t   " << s2.quantity << "\t\t\t         " << s2.price << endl;
            outputFile.close();
            total = total + 70*(s2.quantity);

            }
        }

        
 
        cout << "\n\t\t  Do you want to order anything else? (Y/N)?\n";
        cout << "\n\t\t\t    Enter your Option: "; 
        cin >> op1;

        if (op1 == 'y' || op1 == 'Y') {
            goto menu;
        } 
        else if (op1 == 'n' || op1 == 'N') {
            goto checkout;
        }
    }

checkout:
system("cls");
cout << mhead;
cout <<"\n";
cout << "\t\tHow do you want to pay the bill?\n\n";
       cout << "        --------------------------------------------" << endl;
       cout << "        |  Option No.  |          Function         |" << endl;
       cout << "        --------------------------------------------" << endl;
       cout << "        |      1       |            Cash           |   " << endl;
       cout << "        --------------------------------------------" << endl;
       cout << "        |      2       |            UPI            |  " << endl;
       cout << "        --------------------------------------------" << endl;
       cout << "        --------------------------------------------" << endl;
       cout << "        |      0       |    Return to Main Menu    |  " << endl;
       cout << "        --------------------------------------------" << endl;
cout << "\n                       Enter your Option: ";
cin >> fop;
if(fop == '1')
{
    method = "Cash";
    goto bill;
}
else if(fop == '2')
{
    method = "UPI";
    goto bill;
}
else if(fop =='0')
{
    system("cls");
    goto menu;
}
bill: 
string line;
    system("cls");
    cout << billhead << "\n\n";
    cout << "\t\t\tItems \t\t\tQuantity \t\t\tPrice\n\n";
    ifstream inputFile("order.txt");
        if (inputFile.is_open()) {
        while (getline(inputFile, line)) {
            cout <<"\t\t\t" << line << endl;
        }
    }
    cout << "\t\t\t-------------------------------------------------------------\n";
    cout << "\t\t\t\tTotal :\t\t\t\t" << total << "\n\n";
    cout << ty << "\n\n";
    cout << "\t\t\t      Your Order will be given at your table in few minutes.\n\n";
    cout << "\t\t\t\t--------------------------------------------" << endl;
    cout << "\t\t\t\t|      0       |    Return to Main Page    |   " << endl;
    cout << "\t\t\t\t--------------------------------------------" << endl;
    cout << "\n\n\t\t\t\t\t     Enter your Option: "; 
    cin >> ran;
    goto start;
    
    return 0;
}