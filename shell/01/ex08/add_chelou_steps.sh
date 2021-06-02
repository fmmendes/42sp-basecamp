#!/bin/sh
FT_NBR1=\\\'?\"\\\"\'\\
FT_NBR2=rcrdmddd

# traduzir o nbr1 na base '\"?!
echo $FT_NBR1 
echo $FT_NBR1 | tr "\'" '0' | tr '\\\"\?\!' "1234"
echo ""
# traduzir o nbr2 na base mrdoc
echo $FT_NBR2
echo $FT_NBR2 | tr "mrdoc" "01234"
echo ""

# Junta tudo e faz o calculo
echo "obase=13;ibase=5;" $(echo $FT_NBR1 | tr "\'" '0' | tr '\\\"\?\!' "1234") + $(echo $FT_NBR2 | tr "mrdoc" "01234") | bc 
echo ""

# traduzindo o resultado par na base "gtaio luSnemf"(sim, o espaço conta)
# https://unix.stackexchange.com/a/199620
echo "obase=13;ibase=5;" $(echo $FT_NBR1 | tr "\'" '0' | tr '\\\"\?\!' "1234") + $(echo $FT_NBR2 | tr "mrdoc" "01234") | bc | tr '0123456789ABC' 'gtaio\ luSnemf'
echo ""

FT_NBR1=\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"!\\\"\\\"
FT_NBR2=dcrcmcmooododmrrrmorcmcrmomo
echo "obase=13;ibase=5;" $(echo $FT_NBR1 | tr "\'" '0' | tr '\\\"\?\!' "1234") + $(echo $FT_NBR2 | tr "mrdoc" "01234") | bc | tr '0123456789ABC' 'gtaio\ luSnemf'