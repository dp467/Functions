//
//  function.cpp
//  function
//
//  Created by Dhruv Patel on 3/9/20.
//  Copyright © 2020 Dhruv Patel. All rights reserved.
//

#include <iostream>
using namespace std;

#include <vector>

void show_display();
char selection();
void error();
void check( vector <int> &v);
void error();
void print_number( vector < int> &k);
void add_num (vector <int> &v);
double calc_mean( vector<int> &v);
void mean_num( vector <int> &v);
void small_num (vector<int> &v);
int clac_small (vector<int> &v);
void large_num (vector<int> &v);
void quit();


//-------------------------------------------------------------//
void show_display(){
    cout << " P: Print the number" << endl;
    cout << " A: Add the number to the list "<< endl;
    cout << " M: Mean of the number in the list" << endl;
    cout << " S: Display the smallest number in the list "<< endl;
    cout << " L: Display the largest number in the list "<< endl;
    cout << " Q: Quit" << endl;
    cout<< " Selct one the option : " ;
}
//--------------------------------------------------------------//
char selection(){
    char input;
    cin >> input;
    return toupper(input);
    
}

//---------------------------------------------------------------//
void error(){
    cout << "Invalid Selection---- Try again" << endl;
}

//----------------------------------------------------------------//
void check( vector <int> &v){
    cout << "[";
    
    for (auto var:v){
        cout << var << " ";
    }
    cout <<"]"<<endl;
}
//-------------------------------------------------------------------//
void print_number( vector < int> &k){
    if (k.size() == 0 ){
        cout << "  [] is empty" << endl;
    }
    
    else {
        check(k);
    }
    
    
}
//-------------------------------------------------------------//
void add_num (vector <int> &v){
    int num;
    cout << "Enter the number : " ;
    cin >> num;
    v.push_back (num);
}
//----------------------------------------------------------------//
void mean_num( vector <int> &v){
    if ( v.size()==0){
        cout << " Unable to calculate Mean, list is []" << endl;
    }
    else{
        float mean{};
        mean =calc_mean(v);
        cout <<  " Mean of the list is "<< mean << endl;
    }
        
}
//-----------------------------------------------------------------//
double calc_mean( vector<int> &v){
    float add{};
    float mean {};
    for (auto var : v){
        add += var;
        mean = add/float(v.size());
    }
    return mean;
        
    }
//-------------------------------------------------------------------//
void small_num (vector<int> &v){
    if ( v.size()==0){
        cout << " Unable to find smallest number, list is []" << endl;
    }
    else {
       int small = v.at(0);
        for (auto var:v){
            if (small > var){
                small = var ;
                
            }
        }
        cout << "The smallest number is : "<< small << endl;
    }
}


//--------------------------------------------------------------------//

void large_num (vector<int> &v){
    if ( v.size()==0){
                   cout << " Unable to find largest number, list is []" << endl;
               }
               else {
                   int small = v.at(0);
                   for (auto var:v){
                       if (small < var){
                           small = var ;
                           
                       }
                   }
                   cout << "The smallest number is : "<< small << endl;
                   
               }
}
//--------------------------------------------------------------------//
void quit (){
    
    cout << "Good Bye " <<  endl;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    
    vector<int> inputs;
    char option{};
    
    
        
    
    do {
        show_display();
        option = selection();
        switch (option){
            case 'P':
                print_number(inputs);
                break;
                
            case 'A':
                add_num(inputs);
                break;
            
            case 'M':
                mean_num(inputs);
                break;
            
            case 'S':
                small_num (inputs);
                break;
            
            case 'L':
                large_num (inputs);
                break;
                
            case 'Q':
                quit();
                break;
                
            default:
                error();
                break;
                
            
        }






    }while (option !='Q');
    cout << endl ;
    
    return 0 ;
}


