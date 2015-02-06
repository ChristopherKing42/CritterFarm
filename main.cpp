#include <windows.h>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
unsigned int medicine = 0;
unsigned int pet_feed = 0;
unsigned int toy = 0;
unsigned int books = 0;
void loop(string name, string species);    //Loops program
float store(float money); //Allow users to buy items
string name();    //Prompt user for name
string species(); //Prompt user for species
string end(char end, string name);      //Tells user fate of critter when it ends
int main()
{
    loop(name(), species());
    cout << "GAME OVER!" << endl;
}
void loop(string name, string species)
{
    float health = 10;        //All stats start at 10
    float nutrition = 10;
    float happiness = 10;
    float intelligence = 10;
    float money = 0;

    string pet = name + " the " + species;
    while(true)
    {
        cout << "Here is your inventory: " << endl
             << "Medicine: " << medicine << endl
             << "Food: " << pet_feed << endl
             << "Toys: " << toy << endl
             << "Books: " << books << endl
             << "Gumnuts: " << money << endl;
        cout << endl;
        if (health < 05) cout << pet << " is sickly." << endl;
        if (health > 15) cout << pet << " is healthy looking." << endl;
        if (nutrition < 05) cout << pet << " is looking undernurished." << endl;
        if (nutrition > 15) cout << pet << " is getting fat." << endl;
        if (happiness < 05) cout << pet << " seems depressed." << endl;
        if (happiness > 15) cout << pet << " seems happy." << endl;
        if (intelligence < 05) cout << pet << " is stupid." << endl;
        if (intelligence > 15) cout << pet << " is unnervingly intelligent." << endl;
        cout << endl;
        cout << "a) Medicate your pet" << endl
             << "b) Feed your pet" << endl
             << "c) Entertain your pet" << endl
             << "d) Educate your pet" << endl
             << "e) Work in the salt mines" << endl
             << "f) Go to the store" << endl;

        char answer;
        cin >> answer;
        cout << endl;
        switch(answer)
        {
        case 'a':
            if (medicine == 0) //Medicine is  necessary
            {
                cout << "Sorry, you have no medicine." << endl;
                continue;
            }
            else
            {
                if (health >= 20) //Health has a cap
                {
                    cout << "Sorry, your pet is already healthy.";
                    continue;
                }
                else
                {
                    medicine--;
                    health*=1.15; //Increase by 5%
                }
            }
            break;
        case 'b':
            if (pet_feed == 0)
            {
                cout << "Sorry, you have no food." << endl;
                continue;
            }
            else
            {
                pet_feed--;
                nutrition *= 1.15;
            }
            break;
        case 'c':
            if (toy == 0)
            {
                cout << "Sorry, you have no toys." << endl; //You can't play with a pet without a toy
                continue;
            }
            else
            {
                if (happiness >= 20)
                {
                    cout << "Sorry, your pet is happy enough already.";
                    continue;
                }
                else
                {
                    toy--; //Toy is destroyed in process of playing
                    happiness*=1.15;
                }
            }
            break;
        case 'd':
            if (books == 0)
            {
                cout << "Sorry, you have no books." << endl;
                continue;
            }
            else
            {
                books--; //Book is destroyed in process of reading
                intelligence *= 1.15;
            }
            break;
        case 'e':
            money++;
            break;
        case 'f':
            money = store(money);
        }

        health *= 0.70;
        nutrition *= 0.70;
        happiness *= 0.70;
        intelligence *= 0.70;
        string msg;
        if (health < 1) msg = end('g', pet);
        if (nutrition < 1) msg = end('f', pet);
        if (nutrition > 20) msg= end('d', pet);
        if (happiness < 1) msg = end('r', pet);
        if (intelligence < 1) msg = end('l', pet);
        if (intelligence > 20) msg = end('t', pet);
        if (msg != "")
        {
            cout << msg << endl;
            break;
        }
    }

}
float store(float money)
{
    string item;
    string loop;
    unsigned int amount_of_item;
    unsigned int bank_account;
    string action;
    string buy("buy");
    string sell("sell");

    cout<<"Howd'y there!"<<endl;
    cout<<"You have now entered the store."<<endl;
    cout<<endl;
    cout<<"Commands include \"buy\", \"sell\", or \"exit\"."<<endl;
    cout<<endl;
    cout<<"Would you like to buy or sell? "<<endl;
    cout<<endl;
    cin.ignore(256, '\n');
    getline(cin, action);

    transform(action.begin(), action.end(), action.begin(), ::tolower);

    if(action=="sell")
    {

        float cost;
        float profit;
        float pancake=0.75;
        float apples=0.25;
        float medicine=2.00;

        do
        {
            string item;
            cout<<"Please select an item from the list below"<<endl;
            cout<<endl;
            cout<<"     * Apples"<<endl;
            cout<<"     * Books"<<endl;
            cout<<"     * Medicine"<<endl;
            cout<<"     * Pancakes"<<endl;
            cout<<endl;
            cout<<"What item would you like to sell? ";
            getline(cin, item);

            transform(item.begin(), item.end(), item.begin(), ::tolower);

            if(item=="pancakes")
            {
                cout<<"How many pancakes would you like to sell? ";
                cin>>amount_of_item;
                cost=pancake*amount_of_item;
                profit=profit+cost;
            }

            if(item=="apples")
            {
                cout<<"How many apples would you like to sell? ";
                cin>>amount_of_item;
                cost=apples*amount_of_item;
                profit=profit+cost;
            }

            if(item=="medicine")
            {
                cout<<"How many vials of your medication would you like to sell? "<<endl;
                cin>>amount_of_item;
                cost=medicine*amount_of_item;
                profit=profit+cost;
            }
            cout<<endl;
            cout<<endl;
        }
        while(loop!="exit");
    }
    if(action=="buy")
    {
        string loop;
        float cost;
        float profit;
        float pancake=1.25;
        float apples=.50;
        float medicine=3.50;
        float books=5.00;

        do
        {
            string item;
            cout<<"Please select an item from the list below"<<endl;
            cout<<endl;
            cout<<"     * Apples"<<endl;
            cout<<"     * Books"<<endl;
            cout<<"     * Medicine"<<endl;
            cout<<"     * Pancakes"<<endl;
            cout<<endl;
            cout<<"What item would you like to buy? ";
            getline(cin, item);

            transform(item.begin(), item.end(), item.begin(), ::tolower);

            if(item=="pancakes")
            {
                cout<<"How many pancakes would you like to buy? ";
                cin>>amount_of_item;
                cost=pancake*amount_of_item;
                money=money-cost;
            }

            if(item=="apples")
            {
                cout<<"How many apples would you like to buy? ";
                cin>>amount_of_item;
                cost=apples*amount_of_item;
                money=money-cost;
            }

            if(item=="medicine")
            {
                cout<<"How many vials of your medication would you like to buy? "<<endl;
                cin>>amount_of_item;
                cost=medicine*amount_of_item;
                money=money-cost;
            }

            if(item=="books")
            {
                cout<<"How many books would you like to buy? "<<endl;
                cin>>amount_of_item;
                cost=books*amount_of_item;
                money=money-cost;
            }
            cout<<endl;
            cout<<endl;
        }
        while(loop!="exit");
    }

    return money;
}
string name()
{
    string n;
    cout << "What shall you name your critter? ";
    getline(cin, n);
    return n;
}
string species()
{
    string n;
    cout << "What kind of Critter have you? ";
    getline(cin, n);
    return n;
}
string end(char ending, string name)
{
    switch(ending)
    {
    case 'g':
        return name + " fades away.";
    case 'f':
        return name + " faints.";
    case 'd':
        return name + " is institutionalized due to diabetes.";
    case 'r':
        return name + " runs away.";
    case 'l':
        return name + " gets lost.";
    case 't':
        return name + " takes over the world.";
    default :
        return "";
    }
}
