#!/bin/sh
echo "obase=13;ibase=5;" $(echo $FT_NBR1 | tr "\'" '0' | tr '\\\"\?\!' "1234") + $(echo $FT_NBR2 | tr "mrdoc" "01234") | bc | tr '0123456789ABC' 'gtaio\ luSnemf'

echo "obase=13;ibase=5;" $FT_NBR1 + $FT_NBR2 | tr "\'" '0' | tr '\\\"\?\!mrdoc' "123401234" | sed 's/3/o/' | bc | tr '0123456789ABC' 'gtaio\ luSnemf'
