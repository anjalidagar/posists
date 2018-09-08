#include "Gchain.h"
#include "sha256.h"


string Geneises::Hash() {
    return Hash;
}

void Geneisis::bm(int dn) {
    char string_an[dn + 1];
    for (int i = 0; i < dn; ++i) {
        string_an[i] = '0';
    }
    string_an[dn] = '\0';

    string str(string_an);

while(Hash.substr(0,dn)!=str)
{
	n++;
	
}
    
   
}

void Geneisis::bm(int dn) {
    char string_an[dn + 1];
    for (int i = 0; i < dn; ++i) {
        string_an[i] = '0';
    }
    string_an[dn] = '\0';

    string str(string_an);

    do {
        n++;
        Hash = Hash();
    } while (Hash.substr(0, dn) != str);

  
}
