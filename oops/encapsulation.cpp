#include<iostream>
#include<string>

using namespace std;

class account{
// These attributes can't be access outside this class
// Which ensures data hiding
private:
    double balance;
    string password;

// These attributes can be accessed in main function
public: 
    string username;
    string accountID;

};

int main(){
    account shivansh;
    shivansh.username = "Shivansh";
    shivansh.accountID = "02323XXXXX";

    // Shivansh.balance = 45000; //balance cant be accessed as it belongs to private
    return;
}