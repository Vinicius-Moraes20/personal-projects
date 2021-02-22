/*

    shift_register.h
    Nome da Biblioteca: shift_register.h
    Autor: Tec. Vinicius Moraes
    Versão: 1.0
    Data de Publicação: Fevereiro de 2021

    Descrição: Biblioteca para automação de processos do uso simples de um registrador de deslocamento de 8 bits

*/

#ifndef shift_register
#define shift_register

#include "Arduino.h"

class shift_register {
    public: 
        shift_register(int clk, int letch, int data);
    private:
        int _clk, _letch, _clock;
};


#endif