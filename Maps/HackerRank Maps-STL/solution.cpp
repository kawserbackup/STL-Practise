#include<iostream>
using namespace std;
#include<map>

int main ()
{
    map <string,int> m;
    m.insert(make_pair("hello",9)); //Insertion. Here the pair is inserted into the map where the key is "hello" and the value associated with it is 9.
    //cout<<length;
    m.insert(make_pair("val",10));
    int length=m.size(); //Gives the size of the map.
    cout<<length<<endl;
    m.erase("val"); //Erases the pair from the map where the key_type is val.
    cout<<length<<endl;/*ei line print korar por 1 asar kotha chilo coz delete kore dici but aslona keno */
    return 0;
}

