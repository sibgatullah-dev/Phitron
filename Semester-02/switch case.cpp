#include<iostream>
using namespace std;
int main(){
    int day;cin>>day;
    switch (day)
    {
    case 1:cout<<"Saturday"<<endl;break;
    case 2:cout<<"Snday"<<endl;break;
    case 3:cout<<"Monday"<<endl;break;
    case 4:cout<<"Tuesday"<<endl;break;
    case 5:cout<<"Wednesday"<<endl;break;
    case 6:cout<<"Thursday"<<endl;break;
    case 7:cout<<"Friday"<<endl;break;

    default:cout<<"Please enter number between 1 to 7"<<endl;
    }
    return 0;
}
// When one case gets true in switch case , it prints all the other cases after that without checking them . 