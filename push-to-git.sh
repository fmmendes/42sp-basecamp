#!/bin/sh

# Colors
Red='\033[0;31m'
Green='\033[0;32m'
Yellow='\033[0;33m'
Blue='\033[0;34m'
NC='\033[0m' # No Color

if [ -z $1 ]; then
 printf "${Red}>> Você esqueceu a mensagem do commit ${NC}\n"
 exit 0
fi

git add -A
git commit -m "$1"
git push
clear