#!/bin/sh
#########################Imprime a váriável FT_USER##############################
#																			    #
# Fi, não esquece de dar o 'export FT_USER=student' ou 'export FT_USER=staff'   #
#																			    #
#################################################################################

groups $FT_USER | sed 's/ /,/g' | tr -d '\n\r'