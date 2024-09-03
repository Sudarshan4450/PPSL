#include <iostream>
using namespace std;

class test{
  public:
  //user-defined constructor
  test(){cout<<"\n constructor executed";}
  
  //user-defined destructor
  ~test(){cout<<"\n destructor excuted";}
};
main()
{
  test t;
  return 0;
}
