#!/bin/sh
###############Enunciado ERRADO##########
# o loopback é uma interface mas   		#
# precisei omitir porque no enunciado   #
# NÃÃO APARECE =~(                      #
#########################################

ip -brief link | awk '{print $3}' |sed -n '1!p'
#ifconfig  -a | grep ether | awk '{print$2}'# Também funciona
