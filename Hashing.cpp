#include<iostream>
#include <cstring>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map <string,int> m;
//insertion
pair<string,int>p1("I",3);
m.insert(p1);

//size



pair<string,int>p2("love",2);
m.insert(p2);

pair<string,int>p("you",1);
m.insert(p);

cout<<m["I"];
cout<<m["love"];
cout<<m["you"];



cout<<m.size();

cout<<m.count("you");
}
