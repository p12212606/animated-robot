#include <stdio.h>

int add (int x, int y)
{
    return x + y;
}

int subtract (int x, int y)
{
    return x - y;
}
//This is the line causing issue in the conflict branch
int multiply (int x, int y)
{//This is the line causing issue in the master branch
    return x * y;
}

int divide (int x, int y)
{
   return x / y;
}

<<<<<<< HEAD
int main() {
	
	//test
=======
int remainder (int x, int y)
{
	return x % y;
}

int main() {
	
	
>>>>>>> testing

}
