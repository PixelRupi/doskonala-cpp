// Piotr Bukowski 3ia
#include <iostream>

using namespace std;

int main(){
                                                                                                                                  
                                                                                                                                             
cout << "               AAA                  CCCCCCCCCCCCCHHHHHHHHH     HHHHHHHHHTTTTTTTTTTTTTTTTTTTTTTTUUUUUUUU     UUUUUUUUNNNNNNNN        NNNNNNNN        GGGGGGGGGGGGG " << endl;
cout << "              A:::A              CCC::::::::::::CH:::::::H     H:::::::HT:::::::::::::::::::::TU::::::U     U::::::UN:::::::N       N::::::N     GGG::::::::::::G " << endl;
cout << "             A:::::A           CC:::::::::::::::CH:::::::H     H:::::::HT:::::::::::::::::::::TU::::::U     U::::::UN::::::::N      N::::::N   GG:::::::::::::::G " << endl;
cout << "            A:::::::A         C:::::CCCCCCCC::::CHH::::::H     H::::::HHT:::::TT:::::::TT:::::TUU:::::U     U:::::UUN:::::::::N     N::::::N  G:::::GGGGGGGG::::G " << endl;
cout << "           A:::::::::A       C:::::C       CCCCCC  H:::::H     H:::::H  TTTTTT  T:::::T  TTTTTT U:::::U     U:::::U N::::::::::N    N::::::N G:::::G       GGGGGG " << endl;
cout << "          A:::::A:::::A     C:::::C                H:::::H     H:::::H          T:::::T         U:::::D     D:::::U N:::::::::::N   N::::::NG:::::G               " << endl;
cout << "         A:::::A A:::::A    C:::::C                H::::::HHHHH::::::H          T:::::T         U:::::D     D:::::U N:::::::N::::N  N::::::NG:::::G               " << endl;
cout << "        A:::::A   A:::::A   C:::::C                H:::::::::::::::::H          T:::::T         U:::::D     D:::::U N::::::N N::::N N::::::NG:::::G    GGGGGGGGGG " << endl;
cout << "       A:::::A     A:::::A  C:::::C                H:::::::::::::::::H          T:::::T         U:::::D     D:::::U N::::::N  N::::N:::::::NG:::::G    G::::::::G " << endl;
cout << "      A:::::AAAAAAAAA:::::A C:::::C                H::::::HHHHH::::::H          T:::::T         U:::::D     D:::::U N::::::N   N:::::::::::NG:::::G    GGGGG::::G " << endl;
cout << "     A:::::::::::::::::::::AC:::::C                H:::::H     H:::::H          T:::::T         U:::::D     D:::::U N::::::N    N::::::::::NG:::::G        G::::G " << endl;
cout << "    A:::::AAAAAAAAAAAAA:::::AC:::::C       CCCCCC  H:::::H     H:::::H          T:::::T         U::::::U   U::::::U N::::::N     N:::::::::N G:::::G       G::::G " << endl;
cout << "   A:::::A             A:::::AC:::::CCCCCCCC::::CHH::::::H     H::::::HH      TT:::::::TT       U:::::::UUU:::::::U N::::::N      N::::::::N  G:::::GGGGGGGG::::G " << endl;
cout << "  A:::::A               A:::::ACC:::::::::::::::CH:::::::H     H:::::::H      T:::::::::T        UU:::::::::::::UU  N::::::N       N:::::::N   GG:::::::::::::::G " << endl;
cout << " A:::::A                 A:::::A CCC::::::::::::CH:::::::H     H:::::::H      T:::::::::T          UU:::::::::UU    N::::::N        N::::::N     GGG::::::GGG:::G " << endl;
cout << "AAAAAAA                   AAAAAAA   CCCCCCCCCCCCCHHHHHHHHH     HHHHHHHHH      TTTTTTTTTTT            UUUUUUUUU      NNNNNNNN         NNNNNNN        GGGGGG   GGGG " << endl;


cout << "Wedlug moich obliczen 5 z kolei liczba doskonala wymaga baaardzo duzo czasu do obliczenia, wiec program sie nie zawiesza, po prostu liczy" << endl;
cout << "Jezeli Pan nie wierzy to polecam zerknac w menedzer zadan" << endl;
	
	int doskonale = 0, suma = 0, x = 1;
	
		while(doskonale < 6){
			
			for(int i = 1; i < x; i++){
				if (x%i == 0){
					suma += i;
				}
			}
		
		if(suma == x){
			doskonale += 1;
			cout << x << endl;
		}
		suma = 0;
		x += 1;
					
	}
	
 cout << "koniec obliczen" << endl;
}


// Piotr Bukowski 3ia

