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
    cout<<"Would you like to buy or sell ?"<<endl;
    cout<<endl;
    getline(cin, action);
    getline(cin, item);


    transform(action.begin(), action.end(), action.begin(), ::tolower);
    transform(item.begin(), item.end(), item.begin(), ::tolower);

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
            else
            cout<<"Sorry that is not an appropriate response. Try again."<<endl;

            if(item=="apples")
            {
            cout<<"How many apples would you like to sell? ";
            cin>>amount_of_item;
            cost=apples*amount_of_item;
            profit=profit+cost;
            }
            else
            cout<<"Sorry that is not an appropriate response. Try again."<<endl;

            if(item=="medicine")
            {
            cout<<"How many vials of your medication would you like to sell? "<<endl;
            cin>>amount_of_item;
            cost=medicine*amount_of_item;
            profit=profit+cost;
            }

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
            else
            cout<<"Sorry that is not an appropriate response. Try again."<<endl;

            if(item=="apples")
            {
            cout<<"How many apples would you like to buy? ";
            cin>>amount_of_item;
            cost=apples*amount_of_item;
            money=money-cost;
            }
            else
            cout<<"Sorry that is not an appropriate response. Try again."<<endl;

            if(item=="medicine")
            {
            cout<<"How many vials of your medication would you like to buy? "<<endl;
            cin>>amount_of_item;
            cost=medicine*amount_of_item;
            money=money-cost;
            }

        }
        while(loop!="exit");
    }

    return money;
}
