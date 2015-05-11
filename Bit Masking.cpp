# include <iostream>
# include <cstdio>
# include <cstring>
using namespace std;
inline int set(int N,int pos){return N=N|(1<<pos);}
inline int reset(int N,int pos){return N=N&~(1<<pos);}
inline bool chack(int N,int pos){return(bool)(N&(1<<pos));}
int main()
{
	int N=2343554545,pos=7;
	set(N,pos);//SET bit by 1 in pos-th position in N value
	reset(N,pos);//Reset bit by 0 in pos-th position in N value
	chack(N,pos)//Chack whthere pos-th bit set or reset
	return 0;
}
