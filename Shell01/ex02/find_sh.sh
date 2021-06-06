#!/bin/sh
############Procura o .sh e apresenta sem a extensão##########
#				       Ampulheta							 #
#    usei o rev mas dá pra usar o cut, tr, sed, etc...       #
#															 #
#	Inverti o texto, fiz os cortes e reverti,                #
#   porque no enunciado, se cada arquivo estiver dentro de   #
#	subdiretorios diferentes, ele exibiria o diretorio		 #
##############################################################

#find . -type f -name '*.sh' | sed 's/\.sh//g'| grep --color=always '^\|[^/]*$'
#find . -type f -name '*.sh' | sed 's/\.sh//g'
find . -type f -name '*.sh' | rev | cut -d '/' -f1 | rev | cut -d '.' -f1