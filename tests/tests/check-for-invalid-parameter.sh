#!/bin/bash

  CYAN="\033[0;36m"
 GREEN="\033[0;32m"
   RED="\033[0;31m"
 RESET="\033[0m"
  MAP1="maps/invalid/map-extra-parameter-1.ber"
  MAP2="maps/invalid/map-extra-parameter-2.ber"
  MAP3="maps/invalid/map-extra-parameter-3.ber"
  MAP4="maps/invalid/map-extra-parameter-4.ber"
  MAP5="maps/invalid/map-extra-parameter-5.ber"  
ERROR1=$(./../KPOproject $MAP1 | grep "Error" | wc -l)
ERROR2=$(./../KPOproject $MAP2 | grep "Error" | wc -l)
ERROR3=$(./../KPOproject $MAP3 | grep "Error" | wc -l)
ERROR4=$(./../KPOproject $MAP4 | grep "Error" | wc -l)
ERROR5=$(./../KPOproject $MAP5 | grep "Error" | wc -l)

if [ ${ERROR1} -ge 1 ]
then
	echo -e -n "${CYAN}Check extra parameter: $GREEN         [OK] $RESET"
else
	echo -e -n "${CYAN}Check extra parameter: $RED         [KO] $RESET"
fi

if [ ${ERROR2} -ge 1 ]
then
	echo -e -n "$GREEN[OK] $RESET"
else
	echo -e -n "$RED[KO] $RESET"
fi

if [ ${ERROR3} -ge 1 ]
then
	echo -e -n "$GREEN[OK] $RESET"
else
	echo -e -n "$RED[KO] $RESET"
fi

if [ ${ERROR4} -ge 1 ]
then
	echo -e -n "$GREEN[OK] $RESET"
else
	echo -e -n "$RED[KO] $RESET"
fi

if [ ${ERROR5} -ge 1 ]
then
	echo -e "$GREEN[OK] $RESET"
else
	echo -e "$RED[KO] $RESET"
fi
