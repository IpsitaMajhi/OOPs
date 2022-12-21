//comparsion operators
#include <iostream>
using namespace std;
class Index{
int value;
public:
Index(){
value = 0;}
Index(int val){
value = val;}
int GetIndex(){
return value;}
bool operator< (Index idx){
return (value<idx.value?true:false); }
};
int main()
{
Index idx1=7, idx2=30;
cout<<"INDEX 1 :- "<<idx1.GetIndex()<<endl;
cout<<"INDEX 2 :- "<<idx2.GetIndex()<<endl;
if(idx1 < idx2)
cout<<"INDEX 1 IS LESS THAN INDEX 2";
else
cout<<"INDEX 1 IS GREATER THAN INDEX 2" ;
return 0;
}