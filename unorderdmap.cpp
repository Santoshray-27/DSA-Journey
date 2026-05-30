#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;

    m["abc"] = 1;
    m["def"] = 2;
    m["ghi"] = 3;

    for(auto it : m){
        cout << it.first << " " << it.second << endl;
    }

    // FIND
    if(m.find("abc") != m.end()){   
        cout << "Found abc" << endl;
    }
    else{
        cout << "Not found abc" << endl;
    }   

    // ERASE
    m.erase("abc");     

    // SIZE AND EMPTY
    cout << "Size of map: " << m.size() << endl;
    if(m.empty()){
        cout << "Map is empty" << endl;
    }
    else{
        cout << "Map is not empty" << endl;
    }                       

    // ITERATORS
    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " " << it->second << endl;
    }    

    // CLEAR
    m.clear();       

    // COUNT             
    if(m.count("abc") > 0){
        cout << "Found abc" << endl;
    }
    else{
        cout << "Not found abc" << endl;
    }     



    // MAP
    map<string, int> m2;     

    m2["abc"] = 1;
    m2["def"] = 2;
    m2["ghi"] = 3;

    for(auto it : m2){
        cout << it.first << " " << it.second << endl;
    }       

    // FIND
    if(m2.find("abc") != m2.end()){  
        cout << "Found abc" << endl;
    }
    else{
        cout << "Not found abc" << endl;
    }   

    // ERASE
    m2.erase("abc");     

    // SIZE AND EMPTY    
    cout << "Size of map: " << m2.size() << endl;
    if(m2.empty()){
        cout << "Map is empty" << endl;
    }
    else{
        cout << "Map is not empty" << endl;
    }                        

    // ITERATORS
    for(auto it = m2.begin(); it != m2.end(); it++){
        cout << it->first << " " << it->second << endl;
    }    

    // CLEAR
    m2.clear();       

    // COUNT             
    if(m2.count("abc") > 0){
        cout << "Found abc" << endl;
    }
    else{
        cout << "Not found abc" << endl;
    }           

    
    return 0;
}