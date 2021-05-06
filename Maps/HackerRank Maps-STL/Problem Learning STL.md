Recently map শিখছিলাম। এর একটা operation হল find(key). এটার কাজ হল যেই key টা input দেয়া হবে তার position বের করা। 
Application: এখন তাহলে আমরা যদি এটার posision বের করতে পারি তাহলে সেই position এর key সহ তার value print করতে পারব বা তা নিয়ে কাজ করতে পারব। 
তার জন্য আমরা একটা iterator set করব সেই position এ। সেই position এ iterator টা point করে থাকবে। 
যেই code উপরে way তে লিখা থাকবে সেটাই right apporach. ডান পাশের box এ সেটা দেখতে পাচ্ছি। 
Wrong Approach: 
Wrong apporach বাম পাশে দেখ। এখানে কোন দরকারই ছিলনা যেই position এ point করে আছে তার পরের point কে print করে দেখানোর।Coz এটা find এর main কাজ না। 


|  WRONG APPORACH |  RIGHT APPORACH |
|---|---|
| #include &lt;bits/stdc++.h> </br>using namespace std; </br>int main()</br>{</br>map&lt;int,int> mp;</br> mp.insert({ 2, 30 });</br>mp.insert({ 1, 40 });</br>mp.insert({ 3, 20 });</br>mp.insert({ 4, 50 });</br> cout << "Elements from position of 3 in the map are : \n";</br>cout << "KEY\tELEMENT\n";</br>// find() function finds the position at which 3 is present</br>for (auto itr = mp.find(3); itr != mp.end(); itr++) </br>{ </br>cout << itr->first << '\t' << itr->second << '\n';</br>}</br>return 0;</br>} | #include&lt;iostream> </br> #include&lt;map> </br> using namespace std;</br> int main( ) </br>{ </br> map<char, int> m </br>{ </br> {'a', 100}, </br> {'b', 200},</br>  {'c', 300}, </br> {'d', 400},</br>  {'e', 500}, </br>  };</br> auto it = m.find('c'); </br> cout << "Iterator points to " << it->first << " = " << it->second <<endl;</br> return 0; </br> } |
| Output:</br> The elements from position 3 in map are : </br> KEY &nbsp; &nbsp; &nbsp; ELEMENT </br> 3 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;20 </br> 4 &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;50 |Output: </br> Iterator points to c = 300|
| Site Link: https://www.geeksforgeeks.org/map-find-function-in-c-stl/ | Site link: https://www.javatpoint.com/post/cpp-map-find-function |
