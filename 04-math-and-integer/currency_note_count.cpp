#include<iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    int hundred;
    int fifty;
    int twenty;
    int ten;
    int reminder;

    switch(1){
        case 1:
                hundred = amount / 100;
                reminder = amount % 100;
        case 2: 
                fifty = reminder / 50;
                reminder = reminder % 50;
        case 3: 
                twenty = reminder / 20;
                reminder = reminder % 20;
        case 4: 
                ten = reminder / 10;
                break;
    }

    cout << "Hundred notes needed: " << hundred << endl;
    cout << "Fifty notes needed: " << fifty << endl;
    cout << "Twenty notes needed: " << twenty << endl;
    cout << "Ten notes needed:" << ten << endl;

   return 0;
}