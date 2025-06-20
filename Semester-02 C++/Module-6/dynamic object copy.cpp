#include<bits/stdc++.h>
using namespace std;
class cricketer
    {
        public:
        int jresey;
        string country;
        cricketer(string country,int jersey){
            this->country = country;
            this->jresey = jersey;
        }
    };
int main(){
    cricketer* dhoni = new cricketer("India",100);
    cricketer* kohli = new cricketer("India",18);
    *kohli = *dhoni;
    delete dhoni;
    cout<<kohli->country<<" "<<kohli->jresey;
    return 0;
}