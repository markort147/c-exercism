#include "rna_transcription.h"
#include <string.h>
#include <stdlib.h>

char *to_rna(const char *dna) {
    int dna_len = strlen(dna);
    char *rna = malloc(dna_len * sizeof(char));
    for(int i = 0; i < dna_len; i++) {
        switch (dna[i]) {
            case 'G':
                rna[i] = 'C';
                break;
            case 'C':
                rna[i] = 'G';
                break;
            case 'T':
                rna[i] = 'A';
                break;
            case 'A':
                rna[i] = 'U';
                break;
        }
    }
    return rna;
}