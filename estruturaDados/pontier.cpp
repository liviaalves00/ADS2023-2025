#include <iostream>
#include <vector>
using namespace std;
void inc(int &x){
    ++x;
}
int main(){
   int z = 1;
   inc(z);
   cout << z;

}
