#include <iostream> 
using namespace std; 
  
// base class 
class ROLES  
{ 
  public: 
    void CEO() 
  { cout<<"CEO"; }
};  
// first sub class  
class COO: public CEO 
{ 
 public:
 void COO()
{cout<<"COO";} 
}; 
  
// second sub class 
class CTO: public CEO
{ public:
void COO()
{cout<<"COO";}     
}; 
  
// main function 
int main() 
{   
    ROLES.C1
    cout << "ENTER ROOT ROLE NAME:";
    C1.CEO();
cout << "ENTER SUB ROLE NAME:";
    C1.COO();
cout << "ENTER SUB ROLE NAME:"; 
    C1.CTO(); 
    return 0; 
} 
