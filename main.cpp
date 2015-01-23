#include <iostream>
#include <string>
using namespace std;
unsigned int medicine = 0;
unsigned int pet_feed = 0;
unsigned int toy = 0;
unsigned int books = 0;
void loop(string name, string species);    //Loops program
unsigned int store(unsigned int money); //Allow users to buy items
string name();    //Prompt user for name
string species(); //Prompt user for species
void end();      //Tells user fate of critter when it ends
int main()
{
    loop(name(), species());
}
void loop(string name, string species)
{
    float health = 10;        //All stats start at 10
    float nutrition = 10;
    float happiness = 10;
    float intelligence = 10;
    unsigned int money = 0;

    while(true)
    {
        cout << "Here is your inventory: " << endl
             << "Medicine: " << medicine << endl
             << "Food: " << pet_feed << endl
             << "Toys: " << toy << endl
             << "Books: " << books << endl
             << "Gumnuts: " << money << endl;
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
                    health*=1.05; //Increase by 5%
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
                nutrition *= 1.05;
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
                    happiness*=1.05;
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
                intelligence *= 1.05;
            }
            break;
        case 'E':
            money++;
            break;
        case 'F':
            money = store(money);
        }
    }

}
unsigned int store(unsigned int money)
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
void end()
{
    cout << "End" << endl;
}
