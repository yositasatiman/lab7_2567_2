#include <iostream>
using namespace std;

int main(){
    int gear,student_ID;
    string name,movie,GoWithFahsai;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
    cout << "?????: ";
    getline(cin, name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name. \n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID? \n";
    cout << name << ": ";
    cin >> student_ID;
    cin.ignore();
    
    student_ID /= 10000000;
    gear = student_ID;

    cout << "Fahsai: I think you may be GEAR " <<gear-12 << ". I have a free movie ticket for you. \n";
    cout << "Fahsai: Let's go to the cinema together!!! \n";
    cout << "Fahsai: What movie do you want to watch? \n";
    cout << name << ": ";
    getline (cin, movie);
    cout << "Fahsai: So....which day are you free to go with me? \n";
    cout << name << ": ";
    getline(cin, GoWithFahsai);
    cout << "Fahsai: "<< GoWithFahsai << "....that is OK!!! I'm looking forward to watching " << movie << " with you. \n";
    cout << name << ": ";
    cout << "Fahsai: 555+ see you " <<GoWithFahsai<<". Bye Bye \\(^ ^)/";
}
