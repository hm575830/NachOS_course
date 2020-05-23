#include "kernel.h"  
#include "synchconsole.h"  
#include "utility.h"  
#include "stdio.h"  
int sysOSAdd(int num1,int num2);
void sysOSPrint(char* msg,int length);


int sysOSAdd(int num1,int num2){
	return num1+num2;
}
void sysOSPrint(char *msg,int length){
	int i;
	int memVal,memPt=(int)msg;
	for(i=0;i<length;++i){
		kernel->machine->ReadMem(memPt,1,&memVal);
		kernel->output->PutChar((char)memVal);
	}
	return;
}


