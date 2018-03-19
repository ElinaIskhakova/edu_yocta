#include "Tsezar.h"

Tsezar::Tsezar()
{
	
}

void getBuff(char Buff)
{
  cout<<Buff<<endl;
}

void setBuff (char Buff)
{
  cin>>Buff;
}

void DecodeBuff(char Buff)
{
   for(int i = 0;i < strlen(Buff); i++)
        Buff[i] -= 3;
}
