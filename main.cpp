#include <iostream>
#include <string>
using namespace std;
unsigned int medicine = 0;
unsigned int pet_feed = 0;
unsigned int toy = 0;
unsigned int books = 0;
void loop(string name, string species);
unsigned int store(unsigned int money);
string name();
string species();
void end();
int main()
{
    loop(name(), species());
}
void loop(string name, string species)
{
    float health = 10;
    float nutrition = 10;
    float happiness = 10;
    float intelligence = 10;
    unsigned int money = 0;

    while(true)
    {
        cout << "Here is your inventory: "
             << "Medicine: " << medicine << endl
             << "Food: " << pet_feed << endl
             << "Toys: " << toy << endl
             << "Books: " << books << endl;

        cout << "A) Medicate your pet" << endl
             << "B) Feed your pet" << endl
             << "C) Entertain your pet" << endl
             << "D) Educate your pet" << endl;

        char answer;
        cin << answer;
        switch(answer)
        {
        case 'A':
            if (medicine == 0)
            {
                cout << "Sorry, you have no medicine." << endl;
            }
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
