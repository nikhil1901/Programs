#include <iostream>
using namespace std;
main()
{
    long long X,S;
    cin>>X>>S;
    S=X^S;
    X=X^S;
    S=X^S;
    cout<<X<<" "<<S;
    return 0;
}
