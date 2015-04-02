#include <iostream>
main()
{
	long long N,i,T;
    std::cin>>T;
    while(T--)
    {
		std::cin>>N;
	std::cout<<((N&(N-1))?"No\n":"Yes\n");
    }
    return 0;
}
