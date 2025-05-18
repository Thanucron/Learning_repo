#include <iostream>
#include <string>
#include <typeinfo>

std::string konwertuj( std::string sTekst )
{
    std::string sWynik;
    for (int i = 0; i < sWynik.size(); i++) {
        size_t i_b_convert = sWynik.find("<b>");
        size_t i_B_convert = sWynik.find("<B>");
        std::cout << i_b_convert;
        if (i_b_convert==std::string::npos || i_B_convert==std::string::npos) {
            
        }
    }
    return sWynik;
}
int main()
{
    std::cout << konwertuj( "<b>to jest </b> testowy       napis     <b>:)" ) << std::endl;
    std::cout << konwertuj( "  s       a         m      e         sp    a   c j    e" ) << std::endl;
    std::cout << konwertuj( "<<B><//b><i></i>" ) << std::endl;
    return 0;
}