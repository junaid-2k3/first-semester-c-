#include <iostream>
using namespace std;
int main()
{
  string arr[]={"junaid", "saad", "ramzan","sufyan"};
  for(string element :arr){
    cout<<element<< " "<<"hello "<<endl;
  }
return 0;
}