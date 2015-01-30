#include <iostream>
#include <string>
using namespace std;
unsigned int medicine = 0;
unsigned int pet_feed = 0;
unsigned int toy = 0;
unsigned int books = 0;
void loop(string name, string species);    //Loops program
float store(float money); //Allow users to buy items
string name();    //Prompt user for name
string species(); //Prompt user for species
string end(char end);      //Tells user fate of critter when it ends
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

    while(true)
    {
        cout << "Here is your inventory: " << endl
             << "Medicine: " << medicine << endl
             << "Food: " << pet_feed << endl
             << "Toys: " << toy << endl
             << "Books: " << books << endl
             << "Gumnuts: " << money << endl;
        cout << endl;
        if (health < 05) cout << "Your pet is sickly." << endl;
        if (health > 15) cout << "Your pet is healthy looking." << endl;
        if (nutrition < 05) cout << "Your pet is looking undernurished." << endl;
        if (nutrition > 15) cout << "Your pet is getting fat." << endl;
        if (happiness < 05) cout << "Your pet seems depressed." << endl;
        if (happiness > 15) cout << "Your pet seems happy." << endl;
        if (intelligence < 05) cout << "Your pet is stupid." << endl;
        if (intelligence > 15) cout << "Your pet is unnervingly intelligent." << endl;
        cout << endl;
        cout << "A) Medicate your pet" << endl
             << "B) Feed your pet" << endl
             << "C) Entertain your pet" << endl
             << "D) Educate your pet" << endl
             << "E) Work in the salt mines" << endl
             << "F) Go to the store" << endl;

        char answer;
        cin >> answer;
        cout << endl;
        switch(answer)
        {
        case 'A':
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
        case 'B':
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
        case 'C':
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
        case 'D':
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
        case 'E':
            money++;
            break;
        case 'F':
            money = store(money);
        }

        health *= 0.70;
        nutrition *= 0.70;
        happiness *= 0.70;
        intelligence *= 0.70;
        string msg;
        if (health < 1) msg = end('g');
        if (nutrition < 1) msg = end('f');
        if (nutrition > 20) msg= end('d');
        if (happiness < 1) msg = end('r');
        if (intelligence < 1) msg = end('l');
        if (intelligence > 20) msg = end('t');
        if (msg != "")
        {
            cout << msg << endl;
            break;
        }
    }

}
float store(float money)
{
    return 10;
}
string name()
{
    return "Name";
}
string species()
{
    return "Species";
}
string end(char ending)
{
    switch(ending)
    {
        case 'g': return "Your critter fades away.";
        case 'f': return "Your critter faints.";
        case 'd': return "Your critter is institutionalized due to diabetes.";
        case 'r': return "Your critter runs away.";
        case 'l': return "Your critter gets lost.";
        case 't': return "Your critter takes over the world.";
        default : return "";
    }
}
