// 22.11.2021
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() 
{
	while(true){
	
	srand(time(0));
	int a=rand()%5+1;
    cout<<"Guess my number from 1 to 5"<<endl;
    cin>>a;
    if(a==rand()%5+1)
    cout<<"Correct :)"<<endl;
    else
    cout<<"Wrong :("<<endl;
}
}
