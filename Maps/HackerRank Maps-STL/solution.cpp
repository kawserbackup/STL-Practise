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
    The find() member function searches for the first element that has the appropriate key and returns
    its iterator position. If no such element is found, find() returns end() of the container. You can’t
    use the find() member function to search for an element that has a certain value
    */

    //first mane holo key and second mane holo value.

    cout<<m.find("9")->second<<endl; //If Maps is not present as the key value then itr==m.end().
    cout<<m.find("hello")->second<<endl;
    return 0;
}

