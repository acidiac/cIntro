/*
    author: Amit Chanchal
    Series: Introduction to C
    Month/Year: Nov/2016
    Subject: Pointers 1
    demostrates concepts such as Declaration, address-of, dereferencing and datatypes
*/

#include<stdio.h>

/*
    Before we get into pointers let's brifly look at how computer memory works. In modern computer systems there are generally
    two types of memory one that is on the CPU in form of registers and other that resides outside of CPU and is referred to as 
    Main Memory. While the regiters on the CPU keep track of locations of next instructions the instruction themselves are stored 
    in the main memory as the current stack. Please refer to the page on Stacks for more about stack. For CPU to execute an instruction set 
    it must fetch the instructions from main memory using address of the storage where the instructions reside. This address is unsigned int of either
    32 bit or 64 bit depending on the system's architecture. These integers are referred to as POINTERS in C language. 

    A variable that hold the address is called pointer variable. 

    Declaration:
    Pointer variable is declared with the datatype that we location stores and variablename. The syntax is
    <Datatype> *<variableName>;
    The asterix tells the compiler that it is an pointer variable. 
*/

