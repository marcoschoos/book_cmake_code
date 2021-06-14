#include "mathe.h"

#include <iostream>

int main()
{
    int a=2;
    int b=4;
    Mathe math;
    
    std::cout << "a und b addieren: " << math.addieren(a,b) << std::endl;
    std::cout << "Rechteckfläche : " << math.rechteck_flaeche(a,b) << std::endl;
    std::cout << "Rechteckumfang: " << math.rechteck_umfang(a,b) << std::endl;
	
    return 0;
}
