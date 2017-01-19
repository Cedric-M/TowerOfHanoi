// Ce code est partiellement recopié d'un prof (M Samir Akkouche prof d'informatique à l'université Lyon1).

#include <iostream.h>
#include <conio.h>

void hanoi(char dep, char dest, char temp, int n)
{
	if(n==1)
	{
		cout << "deplacez "<< dep << "  vers  " << dest << endl;
		getch();
	}
	else
	{
		hanoi( dep, temp, dest, n-1);	// ss-problème 1
		hanoi( dep, dest, temp, 1);	// ss-problème 2
		hanoi(temp, dest,  dep, n-1);	// ss-problème 3
	}
}

int main()
{
	int nb = 8;		// Nombre de paliers à résoudre.
	hanoi( 'a','c','b',nb);
                return 0;
}
