#include<iostream>
#include<vector>
using namespace std;

int main()
{
  char input;
  vector <string> list;

  do
  {
    cout<<"\n==GROCERY LIST MANAGER==";
    cout<<"\nEnter your choice: ";
    cout<<"\n (A)dd an item";
    cout<<"\n (Q)uit";
    cout<<"\nYour choice (A/Q): ";
    cin>>input;

    if( input == 'a' || input == 'A' )
    {
        string item;
        cout<<"What item? ";
        cin.ignore();
        getline(cin,item);
        list.push_back(item);
    }
  }while( input != 'q' && input != 'Q' );

  if(list.size() >= 1){
     for(int i = 0; i < list.size(); i++){
         cout << i << " " << list[i] << endl;
     }
  }else{
     cout << "there are no items on the list." << endl;
  }
 
   return 0;
}
