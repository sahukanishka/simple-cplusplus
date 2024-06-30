#include <iostream>
#include <vector>

using namespace std;

int main(){
    int x = 100;
    int& ref = x;

    cout<<"Value of x "<<x<<endl;
    cout<<"Get value of x using reference "<<ref<<endl; 
    //modify the value of x using reference
    ref = ref + 10;
    cout<<"Updated value of x "<<x<<endl;
    cout<<"Updated value of ref "<<ref<<endl;

    //modify the value of vector without copying it
    vector<int> new_vector{10,11,12,13,14,15};
    for(int& x : new_vector){
        x = x + 1;
    }
    for(int x : new_vector){
        cout<<x<<endl;
    }

    return 0;


}