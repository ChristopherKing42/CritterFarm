//#include <ctype>
//#include <studio>


unsigned int store(unsigned int money)
{
    unsigned int bank_account;
    string action;
    string buy("buy");
    string sell("sell");
    
    cout<<"Howd'y there!  What can I do for you today?"<<endl;
    cout<<"Would you like to buy or sell?"<<endl;
    cout<<endl;
    getline(cin, action);
    
    isupper(action) = tolower(action);
    
    if(action==sell)
    {
        
    }
    
    return bank_account;
}
