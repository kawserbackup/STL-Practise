//find er kaj bujhtesina

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
    map<string,int>::iterator itr; //declared the iterator for using on the find function
    itr=m.find("Maps");

    /*
    The map::find() is a built-in function in C++ STL which returns an iterator or a constant iterator that refers to the position where the key is present in the map. 
    If the key is not present in the map container, it returns an iterator or a constant iterator which refers to map.end(). 
    */

    //first mane holo key and second mane holo value.

    cout<<m.find("9")->second<<endl; //If Maps is not present as the key value then itr==m.end().
    cout<<m.find("hello")->second<<endl;
    return 0;
}

