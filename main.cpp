#include <iostream>
using namespace std;
void Add_User(string Name [] , string ADD [] , string Country [] , double TW [] , double TWA [] , double TDA [] , double TD [] , int &counter)
{
    char choose , EXIT ;
    int COUNT=0;
    double Money ,twa{0} ,tda{0};
    string Enter ;
    cout<< "Enter Customer "<<counter <<" Name \n";
    cin>>Enter;
    Name[counter]=Enter;
    cout<< "Enter Customer "<<Name[counter] <<"'S ADD \n";
    cin>>Enter;
    ADD[counter]=Enter;
    cout<< "Enter Customer's Country \n";
    cin >>Enter;
    Country[counter]=Enter;
    cout<< "Enter Customer "<<Name[counter] <<"'S Transactions \n";
    do
    {
        cout<<"W for Withdraw and D for Deposit \n";
        Right:
        cin>>choose;
        if (choose=='W'||choose=='w')
        {
            cout<< "Enter The Money You Want Withdraw It \n";
            With:
            cin>>Money;
            if (Money>=1)
            {
                TW[counter]=Money;
                twa=twa+Money;
                TWA[counter]=twa;
            }
            else
            {
                cout<<"Enter Valid Transaction \n";
                goto With;
            }
        }
        else if (choose=='D'||choose=='d')
        {
            cout<< "Enter The Money You Want Deposit It \n";
            Dis:
            cin>>Money;
            if (Money>=1)
            {
                TD[counter]=Money;
                tda=tda+Money;
                TDA[counter]=tda;
            }
            else
            {
                cout<<"Enter Valid Transaction \n";
                goto Dis;
            }
        }
        else
        {
            cout<< "Enter The  Right Choice Between W & D \n";
            goto Right;
        }
        cout<< "Do You Want Continue Press Y \n";
        cin>> EXIT;

    }
    while (EXIT=='Y'||EXIT=='y');

    counter++;
}
/////////////////////////////////////////////////////////////done
void print_user(string Name [] , string ADD [] , string Country [] , double TW [] , double TWA [] , double TDA [] , double TD [] , int &counter )
{
    string name , add , country;
    double tw{0} , td{0};
    for (int i=1 ;i<counter ;i++)
    {
        name = Name[i];
        add = ADD[i];
        country = Country[i];
        tw=TW[i];
        td=TD[i];
        cout << " Customer "<<i<<" Name : "<<name <<"\n" ;
        cout << " Customer "<<i<<" ADD : "<<add <<" Country : "<<country<<"\n";
        if (tw>=1&&td>=1)
        {
             cout << " Customer "<<i<<" Transactions : " <<tw<<" Withdraw "<<td<<" Deposit"<<"\n";
        }
        else if (tw>=1)
        {
             cout << " Customer "<<i<<" Transactions : " <<tw<<" Withdraw "<<"null Deposit"<<"\n";
        }
        else if (td>=1)
        {
             cout << " Customer "<<i<<" Transactions : " <<"null Withdraw "<<td<<" Deposit"<<"\n";
        }
    }
}
/////////////////////////////////////////////////////////////done
void print_specific(string Name [] , string ADD [] , string Country [] , double TW [] , double TWA [] , double TDA [] , double TD [] , int &counter)
{
    double tw , td ;
    string name , add , country ;
    cout <<"Enter his name \n";
    cin >> name ;
    for (int i=0 ; i<counter ; i++)
    {
        if (name==Name[i])
        {
            cout << " Customer " << Name[i] <<" ADD : "<<ADD[i] <<" Country : "<<Country[i]<<"\n";
            if (TW[i]>=1&&TD[i]>=1)
            {
                cout << " Customer "<<Name[i]<<" Transactions : " <<TW[i]<<" Withdraw "<<TD[i]<<" Deposit"<<"\n";
            }
            else if (TW[i]>=1)
            {
                cout << " Customer "<<Name[i]<<" Transactions : " <<TW[i]<<" Withdraw "<<"null Deposit"<<"\n";
            }
            else if (TD[i]>=1)
            {
                cout << " Customer "<<Name[i]<<" Transactions : " <<"null Withdraw "<<TD[i]<<" Deposit"<<"\n";
            }
        }
    }
}
/////////////////////////////////////////////////////////////done
void highst_balance(string Name [] , string ADD [] , string Country [] , double TW [] , double TWA [] , double TDA [] , double TD [] , int &counter)
{
    int i{0},highstcount{0};
    double tw , td , highstw{0} ,highstd{0} ;
    string name , add , country ;
    while (i<counter)
    {
        /*if (TW[i]>highst&&TD[i]>highst)
        {
            highstw=TW[i];
            highstd=TD[i];
            highstcount=i;
            //cout << " Customer "<<Name[i]<<" Transactions : " <<TW[i]<<" Withdraw "<<TD[i]<<" Deposit"<<"\n";
        }
        */
        if (TWA[i]>highstw)
        {
             highstw=TWA[i];
             highstcount=i;
             //cout << " Customer "<<Name[i]<<" Transactions : " <<TW[i]<<" Withdraw "<<"null Deposit"<<"\n";
        }
        /*else if (TD[i]>highst)
        {
             highstd=TD[i];
             highstcount=i;
             //cout << " Customer "<<Name[i]<<" Transactions : " <<"null Withdraw "<<TD[i]<<" Deposit"<<"\n";
        }
        */
        i++;
    }
    cout <<" The highst balance \n";
    cout << " Customer "<<Name[highstcount]<<" Transactions : " <<TWA[highstcount]<<"\n";
}
/////////////////////////////////////////////////////////////done
void edit_customer_balance(string Name [] , string ADD [] , string Country [] , double TW [] , double TWA [] , double TDA [] , double TD [] , int &counter)
{
    int i{0} , customeredit{0};
    char choose , EXIT ;
    double Money ,twa{0} ,tda{0};
    string name , add , country ;
    cout <<"Enter customer name you want edit it \n";
    cin >>name;
    while(i<counter)
    {
        if (name==Name[i])
        {
            customeredit=i;
        }
        i++;
    }
    cout <<"You will enter the balance you want \n";
    do
    {
        cout<<"W for Withdraw and D for Deposit \n";
        Right:
        cin>>choose;
        if (choose=='W'||choose=='w')
        {
            cout<< "Enter The Money You Want Withdraw It \n";
            With:
            cin>>Money;
            if (Money>=1)
            {
                TW[customeredit]=Money;
                twa=twa+Money;
                TWA[customeredit]=twa;
            }
            else
            {
                cout<<"Enter Valid Transaction \n";
                goto With;
            }
        }
        else if (choose=='D'||choose=='d')
        {
            cout<< "Enter The Money You Want Deposit It \n";
            Dis:
            cin>>Money;
            if (Money>=1)
            {
                TD[customeredit]=Money;
                tda=tda+Money;
                TDA[customeredit]=tda;
            }
            else
            {
                cout<<"Enter Valid Transaction \n";
                goto Dis;
            }
        }
        else
        {
            cout<< "Enter The  Right Choice Between W & D \n";
            goto Right;
        }
        cout<< "Do You Want Continue Press Y \n";
        cin>> EXIT;

    }
    while (EXIT=='Y'||EXIT=='y');
}
/////////////////////////////////////////////////////////////done
void edit_customer(string Name [] , string ADD [] , string Country [] , double TW [] , double TWA [] , double TDA [] , double TD [] , int &counter)
{
    int i{0} , customeredit{0};
    char choose , EXIT ;
    double Money ,twa{0} ,tda{0};
    string name , add , country, Enter ;
    cout <<"Enter customer name you want edit it \n";
    cin >>name;
    while(i<counter)
    {
        if (name==Name[i])
        {
            customeredit=i;
        }
        i++;
    }
    cout<< "Enter Customer New Name  \n";
    cin>>Enter;
    Name[customeredit]=Enter;
    cout<< "Enter Customer "<<Name[customeredit] <<"New 'S ADD \n";
    cin>>Enter;
    ADD[customeredit]=Enter;
    cout<< "Enter Customer's New Country \n";
    cin >>Enter;
    Country[customeredit]=Enter;
    cout<< "Enter Customer "<<Name[customeredit] <<"'S Transactions \n";
    do
    {
        cout<<"W for Withdraw and D for Deposit \n";
        Right:
        cin>>choose;
        if (choose=='W'||choose=='w')
        {
            cout<< "Enter The Money You Want Withdraw It \n";
            With:
            cin>>Money;
            if (Money>=1)
            {
                TW[customeredit]=Money;
                twa=twa+Money;
                TWA[customeredit]=twa;
            }
            else
            {
                cout<<"Enter Valid Transaction \n";
                goto With;
            }
        }
        else if (choose=='D'||choose=='d')
        {
            cout<< "Enter The Money You Want Deposit It \n";
            Dis:
            cin>>Money;
            if (Money>=1)
            {
                TD[customeredit]=Money;
                tda=tda+Money;
                TDA[customeredit]=tda;
            }
            else
            {
                cout<<"Enter Valid Transaction \n";
                goto Dis;
            }
        }
        else
        {
            cout<< "Enter The  Right Choice Between W & D \n";
            goto Right;
        }
        cout<< "Do You Want Continue Press Y \n";
        cin>> EXIT;

    }
    while (EXIT=='Y'||EXIT=='y');


}
/////////////////////////////////////////////////////////////
void cont(int x)
{
    cout<<"press any number to continue .. \n";
    cin>>x;
}
/////////////////////////////////////////////////////////////done
int main()
{
    char ex;
    string name[3] , add[3] , country[3] ;
    double tw[10] , td[10] ,twa[10] , tda[10] ;
    int Adad{1} , cho;
    int x{0};
    bac:
    cout << "ENTER THE CLIENTS \n";
    for (int i=1 ; i <3 ; i++ )
    {
        Add_User(name,add,country,twa,tda,tw,td,Adad);
    }
    cout << "Hello in bank management system please enter your choice \n";
    while (true)
    {
        cout << "1) To print all names and account balances \n";
        cout << "2) To print specific customer's account balance \n";
        cout << "3) To show customer with highest balance \n";
        cout << "4) To edit customer transactions \n";
        cout << "5) To change customer’s name, transactions, balance, or address \n";
        cout << "0) To out the program \n";
        cin >> cho ;
        if (cho==1)
        {
            print_user(name,add,country,twa,tda,tw,td,Adad);
            cont(x);
            continue;
        }
        else if (cho==2)
        {
            print_specific(name,add,country,twa,tda,tw,td,Adad);
            cont(x);
            continue;
        }
        else if (cho==3)
        {
            highst_balance(name,add,country,twa,tda,tw,td,Adad);
            cont(x);
            continue;
        }
        else if (cho==4)
        {
            edit_customer_balance(name,add,country,twa,tda,tw,td,Adad);
            cont(x);
            continue;
        }
        else if (cho==5)
        {
            edit_customer(name,add,country,twa,tda,tw,td,Adad);
            cont(x);
            continue;
        }
        else if (cho==0)
        {
            cout<<"Thanks for using our program "<<endl;
            break;
        }
    }
    return 0;
}
