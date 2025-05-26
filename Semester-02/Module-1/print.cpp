#include<iostream>
int main(){
    int x = 10;
    char c = 'A';
    double d = 34.25;
    //As we don't have any spacific function to print so we use the std::cout command , the cout command is located in std name space . the << sign says what we whant form the cout command.
    std::cout<<x<<std::endl<<c<<std::endl<<d<<std::endl;// the endl command prints a new line std::endl
    std::cout<<"My favourite number is "<<x<<std::endl;
    return 0;
}