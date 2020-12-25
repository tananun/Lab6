#include<iostream>
#include<string>
using namespace std;
int main(){
    string name, movie, when, text;
    int id;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name <<" is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> id;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " << id/10000000 - 12 << ". I have a free movie ticket for you.";
    cout << "\nFahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,when);
    cout << "Fahsai: "<< when <<"....that is OK!!! I'm looking forward to watching "<< movie << " with you.\n";
    cout << name << ": ";
    getline(cin,text); 
    cout << "Fahsai: 555+ see you "<< when << ". Bye Bye \\(^ ^)/";
    }
