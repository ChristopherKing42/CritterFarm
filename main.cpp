float store(float money2)
{
    string item;
    string loop;
    string loop1;
    unsigned int food=1;
    unsigned int amount_of_item;
    unsigned int bank_account;
    string action;
    string buy("buy");
    string sell("sell");

    do
    {
        cout<<"Howd'y there!"<<endl;
        cout<<"You have now entered the store."<<endl;
        cout<<endl;
        cout<<"Commands include \"buy\", \"sell\", or \"exit\"."<<endl;
        cout<<endl;
        cout<<"Would you like to buy or sell? "<<endl;
        cout<<endl;
        getline(cin, action);
        loop1=action;
        system("cls");
        transform(action.begin(), action.end(), action.begin(), ::tolower);

        if(action=="sell")
        {
            char term;
            float cost=0;
            float profit;
            int med;
            float pancake=0.75;
            float apples=0.25;
            float medicine=2.00;
            float chew=1.25;

            do
            {
                string item;
                cout<<"Please select an item from the list below"<<endl;
                cout<<endl;
                cout<<"     * Apples"<<endl;
                cout<<"     * Books"<<endl;
                cout<<"     * Chew Toy"<<endl;
                cout<<"     * Medicine"<<endl;
                cout<<"     * Pancakes"<<endl;

                cout<<endl;
                cout<<"or \"exit\" to return to store menu"<<endl;
                cout<<endl;
                cout<<"What item would you like to sell? ";
                getline(cin, item);
                loop=item;
                system("cls");

                transform(item.begin(), item.end(), item.begin(), ::tolower);

                if(item=="pancakes")
                {
                    cout<<"How many pancakes would you like to sell? ";
                    cin>>amount_of_item;
                     if(pet_feed<3*amount_of_item)
                    {
                        cout<<endl;
                        cout<<"I'm sorry you dont have that many to sell."<<endl;
                        system("pause>nul");
                    }
                    else
                    {

                    cost=pancake*amount_of_item;
                    money2=money2+cost;
                    food=food-3*amount_of_item;
                    pet_feed=pet_feed-amount_of_item;
                    }

                }
                if(item=="chew toy")
                {
                    cout<<"How many chew toys would you like to sell? ";
                    cin>>amount_of_item;
                     if(toy<amount_of_item)
                    {
                        cout<<endl;
                        cout<<"I'm sorry you dont have that many to sell."<<endl;
                        system("pause>nul");
                    }
                    else
                    {

                    cost=toy*amount_of_item;
                    money2=money2+cost;
                    toy=toy-amount_of_item;
                    }

                }
                if(item=="apples")
                {

                    cout<<"How many apples would you like to sell? ";
                    cin>>amount_of_item;
                    cost=apples*amount_of_item;
                     if(pet_feed<amount_of_item)
                    {
                        cout<<endl;
                        cout<<"I'm sorry you dont have that many to sell."<<endl;
                        system("pause>nul");
                    }
                    else
                    {
                    food=food-1*amount_of_item;
                    money2=money2+cost;
                    pet_feed=pet_feed-food;
                    }
                }

                if(item=="medicine")
                {
                    cout<<"How many vials of your medication would you like to sell? "<<endl;
                    cin>>amount_of_item;
                    cost=medicine*amount_of_item;
                     if(medicine<amount_of_item)
                    {
                        cout<<endl;
                        cout<<"I'm sorry you dont have that many to sell."<<endl;
                        system("pause>nul");
                    }
                    else
                    {
                    medicine=medicine-amount_of_item;
                    money2=money2+cost;
                    }
                }
                if(item=="books")
                {
                    cout<<"How many books would you like to sell? "<<endl;
                    cin>>amount_of_item;
                    cost=books*amount_of_item;
                     if(books<amount_of_item)
                    {
                        cout<<endl;
                        cout<<"I'm sorry you dont have that many to sell."<<endl;
                        system("pause>nul");
                    }
                    else
                    {
                    money2=money2+cost;
                    books=books-amount_of_item;
                    }
                }
                system("cls");
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
            float meds=3.50;
            float book=5.00;
            float chew=1.75;

            do
            {
                string item;
                cout<<"Please select an item from the list below"<<endl;
                cout<<endl;
                cout<<"     * Apples"<<endl;
                cout<<"     * Books"<<endl;
                cout<<"     * Chew Toy"<<endl;
                cout<<"     * Medicine"<<endl;
                cout<<"     * Pancakes"<<endl;
                cout<<endl;
                cout<<"or \"exit\" to return to store menu"<<endl;
                cout<<endl;
                cout<<"What item would you like to buy? ";
                getline(cin, item);
                loop=item;
system("cls");

                transform(item.begin(), item.end(), item.begin(), ::tolower);

                if(item=="pancakes")
                {
                    cout<<"How many pancakes would you like to buy? ";
                    cin>>amount_of_item;
                    money2=money2-cost;
                    cost=pancake*amount_of_item;


                    if(money2<cost)
                    {
                        cout<<endl;
                        cout<<"I'm sorry you have insufficient funds in your account."<<endl;
                        system("pause>nul");
                    }
                    else
                    {

                        food=food+3*amount_of_item;
                        pet_feed=pet_feed+food;
                    }

                }

                if(item=="apples")
                {
                    cout<<"How many apples would you like to buy? ";
                    cin>>amount_of_item;
                    cost=apples*amount_of_item;

                    if(money2<cost)
                    {
                        cout<<endl;
                        cout<<"I'm sorry you have insufficient funds in your account."<<endl;
                        system("pause>nul");
                    }
                    else
                    {
                        money2=money2-cost;
                        pet_feed=pet_feed+amount_of_item;
                    }
                }
                 if(item=="chew toy")
                {
                    cout<<"How many chew toys would you like to buy? ";
                    cin>>amount_of_item;
                    cost=chew*amount_of_item;

                    if(money2<cost)
                    {
                        cout<<endl;
                        cout<<"I'm sorry you have insufficient funds in your account."<<endl;
                        system("pause>nul");
                    }
                    else
                    {
                        money2=money2-cost;
                        toy=toy+amount_of_item;
                    }
                }


                if(item=="medicine")
                {
                    cout<<"How many vials of your medication would you like to buy? "<<endl;
                    cin>>amount_of_item;
                    cost=meds*amount_of_item;

                    if(money2<cost)
                    {
                       cout<<endl;
                        cout<<"I'm sorry you have insufficient funds in your account."<<endl;
                        system("pause>nul");
                    }
                    else
                    {
                    money2=money2-cost;
                    medicine=medicine+amount_of_item;
                    }
                }

                if(item=="books")
                {
                    cout<<"How many books would you like to buy? "<<endl;
                    cin>>amount_of_item;
                    cost=book*amount_of_item;

                    if(money2<cost)
                    {
                     cout<<endl;
                        cout<<"I'm sorry you have insufficient funds in your account."<<endl;
                        system("pause>nul");
                    }
                    else
                    {
                        money2=money2-cost;
                        books=books+amount_of_item;
                    }
                }

            }

            while(loop!="exit");
        }
    }
    while(loop1!="exit");



    return money2;
}
