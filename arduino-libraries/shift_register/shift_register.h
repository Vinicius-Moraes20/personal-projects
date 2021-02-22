/*

    shift_register.h
    Nome da Biblioteca: shift_register.h
    Autor: Tec. Vinicius Moraes
    Versão: 1.0
    Data de Publicação: Fevereiro de 2021

    Descrição: Biblioteca para automação de processos do uso simples de um registrador de deslocamento de 8 bits

*/

#ifndef shift_register_h
#define shift_register_h

#include "Arduino.h"

class shift_register {
    public:
        shift_register(int clk, int letch, int data);
        void register_out(int dataValue);
    private:
        int _clk, _letch, _data;
};
#endif