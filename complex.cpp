#include <iostream>
#include <type_traits>
#include "complex.hpp"

int main() {
    complex_number<float> c1(3.0, 5.0);
    complex_number<float> prima_copia_c1 = c1;
    complex_number<float> seconda_copia_c1 = c1;
    complex_number<float> terza_copia_c1 = c1;
    complex_number<float> c2(6.0, -9.0);
    complex_number<float> prima_copia_c2 = c2;

    std::cout << "Numero complesso 1: " << c1 << std::endl;
    std::cout << "Numero complesso 2: " << c2 << std::endl;

    std::cout << "Parte reale di c1: " << c1.real() << std::endl;
    std::cout << "Parte immaginaria di c1: " << c1.imag() << std::endl;

    std::cout << "Coniugato di c1: " << c1.coniugato() << std::endl;


    
    complex_number<float> sum = c1 + c2;
    std::cout << "+ c1 con c2: " << sum << std::endl;
    
    
    c1 += c2;
    std::cout << "+= c1 con c2: " << c1 << std::endl; 

    
    complex_number<float> prod = prima_copia_c1 * c2;
    std::cout << "* prima copia c1 con c2: " << prod << std::endl;

    prima_copia_c1 *= c2;
    std::cout << "*= prima copia con c2:  " << prima_copia_c1 << std::endl; //errore di calcolo
    
    seconda_copia_c1 += 3.0; 
    std::cout << "c1 += 3.0: " << seconda_copia_c1 << std::endl;

    complex_number<float> sum2 =  terza_copia_c1+3.0f ; 
    std::cout << "c1 + 3.0: " << sum2 << std::endl;
    std::cout << "commutatività della somma: " <<  3.0f + terza_copia_c1<< std::endl;

    c2 *= 2.0; 
    std::cout << "c1 *= 2.0: " << c2 << std::endl;

    complex_number<float> c2new = prima_copia_c2 * 2.0f;  
    std::cout << "c2 * 2.0: " << c2new << std::endl;
    std::cout << "commutatività del prodotto:" << 2.0f * prima_copia_c2 << std::endl;

    
    
    complex_number<float> prod2 = 2.0f * terza_copia_c1 ; 
    std::cout << "Prodotto tra un scalare 2.0 e il numero complesso c1: " << prod2 << std::endl;
    std::cout << "commutatività" << terza_copia_c1 * 2.0 << std::endl;
   
   

    complex_number<double> c3(3.0, 5.0);
    complex_number<double> prima_copia_c3 = c3;
    complex_number<double> seconda_copia_c3 = c3;
    complex_number<double> terza_copia_c3 = c3;
    complex_number<double> c4(6.0, -9.0);
    complex_number<double> prima_copia_c4 = c4;

    std::cout << "Numero complesso 1: " << c3 << std::endl;
    std::cout << "Numero complesso 2: " << c4 << std::endl;

    std::cout << "Parte reale di c1: " << c3.real() << std::endl;
    std::cout << "Parte immaginaria di c1: " << c3.imag() << std::endl;

    std::cout << "Coniugato di c1: " << c3.coniugato() << std::endl;



    complex_number<double> sum_d = c3 + c4;
    std::cout << "+ c1 con c2: " << sum_d << std::endl;


    c3 += c4;
    std::cout << "+= c1 con c2: " << c3 << std::endl; 


    complex_number<double> prod_d = prima_copia_c3 * c4;
    std::cout << "* prima copia c1 con c2: " << prod_d << std::endl;

    prima_copia_c3 *= c4;
    std::cout << "*= prima copia con c2:  " << prima_copia_c3 << std::endl; //errore di calcolo

    seconda_copia_c3 += 3.0; 
    std::cout << "c1 += 3.0: " << seconda_copia_c3 << std::endl;

    complex_number<double> sum2_d =  terza_copia_c3+3.0 ; 
    std::cout << "c1 + 3.0: " << sum2_d << std::endl;
    std::cout << "commutatività della somma: " <<  3.0 + terza_copia_c3<< std::endl;

    c4 *= 2.0; 
    std::cout << "c1 *= 2.0: " << c4 << std::endl;

    complex_number<double> c4new = prima_copia_c4 * 2.0;  
    std::cout << "c2 * 2.0: " << c4new << std::endl;
    std::cout << "commutatività del prodotto:" << 2.0 * prima_copia_c4 << std::endl;



    complex_number<double> prod2_d = 2.0 * terza_copia_c3 ; 
    std::cout << "Prodotto tra un scalare 2.0 e il numero complesso c1: " << prod2_d << std::endl;
    std::cout << "commutatività" << terza_copia_c3 * 2.0 << std::endl;

        
    
    

    return 0;


};