//#include <ctype>
//#include <studio>
//#include <windows.h>


unsigned int store(unsigned int money)
{

    unsigned int amount_of_item;
    unsigned int bank_account;
    string action; 
    string buy("buy");
    string sell("sell");
    
    cout<<"Howd'y there!  What can I do for you today?"<<endl;
    cout<<endl;
    cout<<"Would you like to buy or sell ?"<<endl;
    cout<<endl;
    getline(cin, action);
    
    isupper(action) = tolower(action);
    
    if(action=="sell")
    {
        string loop;
        float cost;
        float profit;
        float pancake=0.75;
        float apples=0.25;
        float medicine=2.00;
         
        for(loop!="exit")
        {
        string item;
        cout<<"What item would you like to sell? ";
        getline(cin, item)
        isupper(item) = tolower(item);
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
        
        
    }
    
    return bank_account;
}
