#include <stdio.h>
#include <stdlib.h>

char data [] = {0x7E, 0x30, 0x6D, 0x79, 0x33, 0x5B, 0x5F,0x70,0x7F, 0x7B};

main() {
    FILE *arquivo;
    int value_bin = 0;
    arquivo = fopen("dec_disp.bin", "wb");

    for(value_bin = 0; value_bin < 256; value_bin++) {
        fwrite(&data[value_bin % 10], 1, 1, arquivo);
    }

    for(value_bin = 256; value_bin < 512; value_bin++) {
        fwrite(&data[((value_bin-256)/10)%10], 1, 1, arquivo);
    }

    for(value_bin = 512; value_bin < 768; value_bin++) {
        fwrite(&data[(value_bin-512)/100], 1, 1, arquivo);
    }
    //------------------------------------------------------
    for(value_bin = 1024; value_bin < 1280; value_bin += 1) {
        if(value_bin < (1024+128)) {   
            anchor = -2;    
            fwrite(&data[(value_bin-1024)%10], 1, 1, arquivo);
         } else {
             anchor += 2;
             fwrite(&data[(value_bin-1024-anchor)%10], 1, 1, arquivo);
         }         
    }
                  
    for(value_bin = 1280; value_bin < 1536; value_bin += 1) {
         if(value_bin < (1280+128))  
         { 
                  anchor = -2;     
                  fwrite(&data[((value_bin-1280)/10)%10], 1, 1, arquivo);
         }
         else
         {
                  anchor += 2;
                  fwrite(&data[((value_bin-1280-anchor)/10)%10], 1, 1, arquivo);
         }
         
     }
                  
                  
    //centena
    for(value_bin = 1536; value_bin < 1792; value_bin += 1)
    {
        if(value_bin < (1536+128))  
        {     
            anchor = -2;       
            fwrite(&data[(value_bin-1536)/100], 1, 1, arquivo);
        }
        else
        {
            anchor += 2;
            fwrite(&data[(value_bin-1536-anchor)/100], 1, 1, arquivo);
        }
    }
    
    
    //blank
    for(value_bin = 1792; value_bin < 2048; value_bin += 1)
    {
        if(value_bin < (1792+128))
        {
                  fwrite(&blank, 1, 1, arquivo);
        }
        else
        {
                  fwrite(&signal,1, 1, arquivo);    
        }
   
     }
    printf("=======================================\n\n  Arquivo binario gerado com sucesso!\n\n=======================================\n\n\n");

    fclose(arquivo);
    return 0;
}