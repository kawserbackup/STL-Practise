Recently map শিখছিলাম। এর একটা operation হল find(key). এটার কাজ হল যেই key টা input দেয়া হবে তার position বের করা। 
Application: এখন তাহলে আমরা যদি এটার posision বের করতে পারি তাহলে সেই position এর key সহ তার value print করতে পারব বা তা নিয়ে কাজ করতে পারব। 
তার জন্য আমরা একটা iterator set করব সেই position এ। সেই position এ iterator টা point করে থাকবে। 
যেই code উপরে way তে লিখা থাকবে সেটাই right apporach. ডান পাশের box এ সেটা দেখতে পাচ্ছি। 
Wrong Approach: 
Wrong apporach বাম পাশে দেখ। এখানে কোন দরকারই ছিলনা যেই position এ point করে আছে তার পরের point কে print করে দেখানোর।Coz এটা find এর main কাজ না। 


WRONG APPORACH	RIGHT APPORACH
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
 
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 20 });
    mp.insert({ 4, 50 });
 
    cout << "Elements from position of 3 in the map are : \n";
    cout << "KEY\tELEMENT\n";
 
    // find() function finds the position
    // at which 3 is present
    for (auto itr = mp.find(3); itr != mp.end(); itr++) {
       
        cout << itr->first << '\t' << itr->second << '\n';
    }
 
    return 0;
}	#include <iostream>  
#include <map>  
using namespace std;  
int main(void) {  
   map<char, int> m = {  
            {'a', 100},  
            {'b', 200},  
            {'c', 300},  
            {'d', 400},  
            {'e', 500},  
            };  
  
   auto it = m.find('c');  
  
   cout << "Iterator points to " << it->first <<   
      " = " << it->second << endl;  
  
   return 0;  
}
Output:
The elements from position 3 in map are : 
KEY    ELEMENT
3    20
4    50	Output:
Iterator points to c = 300

Site Link:
https://www.geeksforgeeks.org/map-find-function-in-c-stl/
	Site link:
https://www.javatpoint.com/post/cpp-map-find-function


