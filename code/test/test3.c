#include "syscall.h"
#include "main.h"
#include "iostream"
main()
	{
		int	a,b,c;
		a=10;
		b=1;	
		PrintInt(OSAdd(a,b));
		std::cout<<KernelType<<std::endl;
	}
