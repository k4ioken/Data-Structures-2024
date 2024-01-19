//pointers
#include <iostream>
using namespace std;
int main(){
    int a=56;
    int* ptr=&a;
    char b='a';   //initialisation
    // cout<<ptr;    //prints "0x9f29ff704",which is the adress of a.
    // cout<<*ptr;   // * is a dereference operator which fetches the value stored at adress "0x9f29ff704".
    // cout<<*&a;       //this is not deferencing a ptr,this is dereferencing a reference variable
    //reference variable is another name for memory adress,it does not take extra memory unlike ptr.
    //we can say that cout<<*ptr is somewhat same as cout<<a
    // char* cptr=&b;
    //  long l=621869264;
    //  long* lptr=&l;
    // cout<<sizeof(lptr);
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(cptr);
    
    int* bptr; //==>bad practice as dereferencing of such ptr will throw garbage value,instead use nullptr.
    int* nptr=0;  //initializing nullptr,better for debugging.
    

}