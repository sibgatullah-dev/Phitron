#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "Hello World";
    string s2 = " Hi ";
    // s += s2; //can be used as s.append() or s.push_back()
    s.append(s2);
    cout<<s<<endl;
    
    s.push_back('A');// can push a single character in the last of a string
    cout<<s<<endl;

    s[1]= 'u';//replacing index 1 character with u
    cout<<s<<endl;

    int a = s.size();
    s[a-1]= 'B';// replacing the last character with B
    cout<<s<<endl;

    s.pop_back();// removing the last character
    cout<<s<<endl;

    string s1 = "Hi";
    string s3 = "Hello";
    s3.assign(s1);// assigning s1 as s3 string 
    cout<<s3<<endl;

    string b = "Hello World";
    b.erase(6,3);//first parameter indicated the index and second number in parameter indicates how many character we want to delete 
    cout<<b<<endl;// in this case its 3 character starting from index 6

    string r = "Hello world";
    r.replace(6,5,"Bangladesh");// first number in parameter indicates the index second number indicates how many characters should be removed and the string indicates which characters you wnat to put as replacement 
    cout<<r<<endl;

    r.insert(5," Sibgatullah");// inserts a character or a string starting from the designated index here it's 5 and the rest will be push back after Sibgatullah
    cout<<r<<endl;

    return 0; 
}