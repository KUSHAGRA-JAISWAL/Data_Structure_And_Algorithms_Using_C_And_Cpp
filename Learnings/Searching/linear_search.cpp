#include<iostream>
using namespace std;

int main(){
    int a[5] = {10,20,30,40,50};
    int i =0;
    int item;
    cout<<"Enter the element to be searched: ";
    cin>>item;

    while (i<5)
    {
        if(a[i]==item)
        {
            cout<<"Element found at index: "<<i;
            break;
        }
        i++;
    }

    if (i>=5)
    {
        cout<<"Element not found";
    }

}