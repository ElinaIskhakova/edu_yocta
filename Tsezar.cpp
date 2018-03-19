#include "Tsezar.h"
#include "string.h"
#include "iostream"
using namespace std;
Tsezar::Tsezar()
{
 memset(Buff,0, 50); 
}

void Tsezar::getBuff()
{
  cout<<Buff<<endl;
}

void Tsezar::setBuff ()
{
  cin>>Buff;
}

void Tsezar:: DecodeBuff()
{
   for(int i = 0;i < strlen(Buff); i++)
        Buff[i] += 3;
}
