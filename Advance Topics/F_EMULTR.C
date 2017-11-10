//To force linking of the floating point emulator into an application
//There is no need to call this function from your program

void linkfloat(void)
{
	float a=0, *b=&a; //cause emulator to be linked
	a=*b; //suppress warning - variable not used
}

