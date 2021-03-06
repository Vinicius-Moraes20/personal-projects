/*

    shift_register.cpp
    Nome da Biblioteca: shift_register.h
    Autor: Tec. Vinicius Moraes
    Versão: 1.0
    Data de Publicação: Fevereiro de 2021

    Descrição: Biblioteca para automação de processos do uso simples de um registrador de deslocamento de 8 bits

*/

#include "Arduino.h"
#include "shift_register.h"

shift_register::shift_register(int clk, int letch, int data) {
    pinMode(clk,   OUTPUT);
    pinMode(letch, OUTPUT);
    pinMode(data,  OUTPUT);
    
    _clk   = clk;
    _letch = letch;
    _data  = data;
};

void shift_register::register_out(int dataValue) {
    shiftOut(_data, _clk, LSBFIRST, dataValue);
    digitalWrite(_letch, LOW);
    digitalWrite(_letch, HIGH);
    digitalWrite(_letch, LOW);
};
